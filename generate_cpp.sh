#!/bin/bash

. ./common.sh

if ! check_protoc_version; then
	exit 1
fi

push proto
echo "generate cpp code..."
gogo_protobuf_url=github.com/gogo/protobuf
GOGO_ROOT=${GOPATH}/src/github.com/gogo/protobuf
GO_INSTALL='go install'

echo "install gogoproto code/generator ..."
${GO_INSTALL} ${gogo_protobuf_url}/proto
${GO_INSTALL} ${gogo_protobuf_url}/protoc-gen-gofast
${GO_INSTALL} ${gogo_protobuf_url}/gogoproto

# add the bin path of gogoproto generator into PATH if it's missing
if ! cmd_exists protoc-gen-gofast; then
    for path in $(echo "${GOPATH}" | sed -e 's/:/ /g'); do
        gogo_proto_bin="${path}/bin/protoc-gen-gofast"
        if [ -e "${gogo_proto_bin}" ]; then
            export PATH=$(dirname "${gogo_proto_bin}"):$PATH
            break
        fi
    done
fi

protoc -I.:${GOGO_ROOT}:${GOGO_ROOT}/protobuf:../include --cpp_out ../cpp *.proto || exit $?
protoc -I.:${GOGO_ROOT}:${GOGO_ROOT}/protobuf:../include --grpc_out ../cpp --plugin=protoc-gen-grpc=`which grpc_cpp_plugin` *.proto || exit $?

protoc -I.:${GOGO_ROOT}:${GOGO_ROOT}/protobuf:../include --cpp_out ../cpp ../include/*.proto || exit $?
protoc -I.:${GOGO_ROOT}:${GOGO_ROOT}/protobuf:../include --grpc_out ../cpp --plugin=protoc-gen-grpc=`which grpc_cpp_plugin` ../include/*.proto || exit $?

protoc -I.:${GOGO_ROOT}:${GOGO_ROOT}/protobuf:../include --cpp_out ../cpp ${GOGO_ROOT}/gogoproto/gogo.proto || exit $?
protoc -I.:${GOGO_ROOT}:${GOGO_ROOT}/protobuf:../include --grpc_out ../cpp --plugin=protoc-gen-grpc=`which grpc_cpp_plugin` ${GOGO_ROOT}/gogoproto/gogo.proto || exit $?

pop


