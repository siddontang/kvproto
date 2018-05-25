// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: import_kvpb.proto
#ifndef GRPC_import_5fkvpb_2eproto__INCLUDED
#define GRPC_import_5fkvpb_2eproto__INCLUDED

#include "import_kvpb.pb.h"

#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class Channel;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace import_kvpb {

// ImportKV provides a service to import key-value pairs to TiKV.
//
// In order to import key-value pairs to TiKV, the user should:
// 1. Open an engine identified by an UUID.
// 2. Open write streams to write key-value batch to the opened engine.
//    Different streams/clients can write to the same engine concurrently.
// 3. Close the engine after all write batches are finished. An engine can only
//    be closed when all write streams are closed. An engine can only be closed
//    once, and it can not be opened again once it is closed.
class ImportKV final {
 public:
  static constexpr char const* service_full_name() {
    return "import_kvpb.ImportKV";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // Open an engine.
    virtual ::grpc::Status Open(::grpc::ClientContext* context, const ::import_kvpb::OpenRequest& request, ::import_kvpb::OpenResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::import_kvpb::OpenResponse>> AsyncOpen(::grpc::ClientContext* context, const ::import_kvpb::OpenRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::import_kvpb::OpenResponse>>(AsyncOpenRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::import_kvpb::OpenResponse>> PrepareAsyncOpen(::grpc::ClientContext* context, const ::import_kvpb::OpenRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::import_kvpb::OpenResponse>>(PrepareAsyncOpenRaw(context, request, cq));
    }
    // Open a write stream to the engine.
    std::unique_ptr< ::grpc::ClientWriterInterface< ::import_kvpb::WriteRequest>> Write(::grpc::ClientContext* context, ::import_kvpb::WriteResponse* response) {
      return std::unique_ptr< ::grpc::ClientWriterInterface< ::import_kvpb::WriteRequest>>(WriteRaw(context, response));
    }
    std::unique_ptr< ::grpc::ClientAsyncWriterInterface< ::import_kvpb::WriteRequest>> AsyncWrite(::grpc::ClientContext* context, ::import_kvpb::WriteResponse* response, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncWriterInterface< ::import_kvpb::WriteRequest>>(AsyncWriteRaw(context, response, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncWriterInterface< ::import_kvpb::WriteRequest>> PrepareAsyncWrite(::grpc::ClientContext* context, ::import_kvpb::WriteResponse* response, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncWriterInterface< ::import_kvpb::WriteRequest>>(PrepareAsyncWriteRaw(context, response, cq));
    }
    // Close the engine.
    virtual ::grpc::Status Close(::grpc::ClientContext* context, const ::import_kvpb::CloseRequest& request, ::import_kvpb::CloseResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::import_kvpb::CloseResponse>> AsyncClose(::grpc::ClientContext* context, const ::import_kvpb::CloseRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::import_kvpb::CloseResponse>>(AsyncCloseRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::import_kvpb::CloseResponse>> PrepareAsyncClose(::grpc::ClientContext* context, const ::import_kvpb::CloseRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::import_kvpb::CloseResponse>>(PrepareAsyncCloseRaw(context, request, cq));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::import_kvpb::OpenResponse>* AsyncOpenRaw(::grpc::ClientContext* context, const ::import_kvpb::OpenRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::import_kvpb::OpenResponse>* PrepareAsyncOpenRaw(::grpc::ClientContext* context, const ::import_kvpb::OpenRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientWriterInterface< ::import_kvpb::WriteRequest>* WriteRaw(::grpc::ClientContext* context, ::import_kvpb::WriteResponse* response) = 0;
    virtual ::grpc::ClientAsyncWriterInterface< ::import_kvpb::WriteRequest>* AsyncWriteRaw(::grpc::ClientContext* context, ::import_kvpb::WriteResponse* response, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncWriterInterface< ::import_kvpb::WriteRequest>* PrepareAsyncWriteRaw(::grpc::ClientContext* context, ::import_kvpb::WriteResponse* response, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::import_kvpb::CloseResponse>* AsyncCloseRaw(::grpc::ClientContext* context, const ::import_kvpb::CloseRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::import_kvpb::CloseResponse>* PrepareAsyncCloseRaw(::grpc::ClientContext* context, const ::import_kvpb::CloseRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status Open(::grpc::ClientContext* context, const ::import_kvpb::OpenRequest& request, ::import_kvpb::OpenResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::import_kvpb::OpenResponse>> AsyncOpen(::grpc::ClientContext* context, const ::import_kvpb::OpenRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::import_kvpb::OpenResponse>>(AsyncOpenRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::import_kvpb::OpenResponse>> PrepareAsyncOpen(::grpc::ClientContext* context, const ::import_kvpb::OpenRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::import_kvpb::OpenResponse>>(PrepareAsyncOpenRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientWriter< ::import_kvpb::WriteRequest>> Write(::grpc::ClientContext* context, ::import_kvpb::WriteResponse* response) {
      return std::unique_ptr< ::grpc::ClientWriter< ::import_kvpb::WriteRequest>>(WriteRaw(context, response));
    }
    std::unique_ptr< ::grpc::ClientAsyncWriter< ::import_kvpb::WriteRequest>> AsyncWrite(::grpc::ClientContext* context, ::import_kvpb::WriteResponse* response, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncWriter< ::import_kvpb::WriteRequest>>(AsyncWriteRaw(context, response, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncWriter< ::import_kvpb::WriteRequest>> PrepareAsyncWrite(::grpc::ClientContext* context, ::import_kvpb::WriteResponse* response, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncWriter< ::import_kvpb::WriteRequest>>(PrepareAsyncWriteRaw(context, response, cq));
    }
    ::grpc::Status Close(::grpc::ClientContext* context, const ::import_kvpb::CloseRequest& request, ::import_kvpb::CloseResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::import_kvpb::CloseResponse>> AsyncClose(::grpc::ClientContext* context, const ::import_kvpb::CloseRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::import_kvpb::CloseResponse>>(AsyncCloseRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::import_kvpb::CloseResponse>> PrepareAsyncClose(::grpc::ClientContext* context, const ::import_kvpb::CloseRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::import_kvpb::CloseResponse>>(PrepareAsyncCloseRaw(context, request, cq));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< ::import_kvpb::OpenResponse>* AsyncOpenRaw(::grpc::ClientContext* context, const ::import_kvpb::OpenRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::import_kvpb::OpenResponse>* PrepareAsyncOpenRaw(::grpc::ClientContext* context, const ::import_kvpb::OpenRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientWriter< ::import_kvpb::WriteRequest>* WriteRaw(::grpc::ClientContext* context, ::import_kvpb::WriteResponse* response) override;
    ::grpc::ClientAsyncWriter< ::import_kvpb::WriteRequest>* AsyncWriteRaw(::grpc::ClientContext* context, ::import_kvpb::WriteResponse* response, ::grpc::CompletionQueue* cq, void* tag) override;
    ::grpc::ClientAsyncWriter< ::import_kvpb::WriteRequest>* PrepareAsyncWriteRaw(::grpc::ClientContext* context, ::import_kvpb::WriteResponse* response, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::import_kvpb::CloseResponse>* AsyncCloseRaw(::grpc::ClientContext* context, const ::import_kvpb::CloseRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::import_kvpb::CloseResponse>* PrepareAsyncCloseRaw(::grpc::ClientContext* context, const ::import_kvpb::CloseRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_Open_;
    const ::grpc::internal::RpcMethod rpcmethod_Write_;
    const ::grpc::internal::RpcMethod rpcmethod_Close_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // Open an engine.
    virtual ::grpc::Status Open(::grpc::ServerContext* context, const ::import_kvpb::OpenRequest* request, ::import_kvpb::OpenResponse* response);
    // Open a write stream to the engine.
    virtual ::grpc::Status Write(::grpc::ServerContext* context, ::grpc::ServerReader< ::import_kvpb::WriteRequest>* reader, ::import_kvpb::WriteResponse* response);
    // Close the engine.
    virtual ::grpc::Status Close(::grpc::ServerContext* context, const ::import_kvpb::CloseRequest* request, ::import_kvpb::CloseResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_Open : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_Open() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_Open() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Open(::grpc::ServerContext* context, const ::import_kvpb::OpenRequest* request, ::import_kvpb::OpenResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestOpen(::grpc::ServerContext* context, ::import_kvpb::OpenRequest* request, ::grpc::ServerAsyncResponseWriter< ::import_kvpb::OpenResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_Write : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_Write() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_Write() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Write(::grpc::ServerContext* context, ::grpc::ServerReader< ::import_kvpb::WriteRequest>* reader, ::import_kvpb::WriteResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestWrite(::grpc::ServerContext* context, ::grpc::ServerAsyncReader< ::import_kvpb::WriteResponse, ::import_kvpb::WriteRequest>* reader, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncClientStreaming(1, context, reader, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_Close : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_Close() {
      ::grpc::Service::MarkMethodAsync(2);
    }
    ~WithAsyncMethod_Close() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Close(::grpc::ServerContext* context, const ::import_kvpb::CloseRequest* request, ::import_kvpb::CloseResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestClose(::grpc::ServerContext* context, ::import_kvpb::CloseRequest* request, ::grpc::ServerAsyncResponseWriter< ::import_kvpb::CloseResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_Open<WithAsyncMethod_Write<WithAsyncMethod_Close<Service > > > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_Open : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_Open() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_Open() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Open(::grpc::ServerContext* context, const ::import_kvpb::OpenRequest* request, ::import_kvpb::OpenResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_Write : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_Write() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_Write() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Write(::grpc::ServerContext* context, ::grpc::ServerReader< ::import_kvpb::WriteRequest>* reader, ::import_kvpb::WriteResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_Close : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_Close() {
      ::grpc::Service::MarkMethodGeneric(2);
    }
    ~WithGenericMethod_Close() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Close(::grpc::ServerContext* context, const ::import_kvpb::CloseRequest* request, ::import_kvpb::CloseResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Open : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_Open() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::import_kvpb::OpenRequest, ::import_kvpb::OpenResponse>(std::bind(&WithStreamedUnaryMethod_Open<BaseClass>::StreamedOpen, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_Open() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Open(::grpc::ServerContext* context, const ::import_kvpb::OpenRequest* request, ::import_kvpb::OpenResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedOpen(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::import_kvpb::OpenRequest,::import_kvpb::OpenResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Close : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_Close() {
      ::grpc::Service::MarkMethodStreamed(2,
        new ::grpc::internal::StreamedUnaryHandler< ::import_kvpb::CloseRequest, ::import_kvpb::CloseResponse>(std::bind(&WithStreamedUnaryMethod_Close<BaseClass>::StreamedClose, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_Close() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Close(::grpc::ServerContext* context, const ::import_kvpb::CloseRequest* request, ::import_kvpb::CloseResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedClose(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::import_kvpb::CloseRequest,::import_kvpb::CloseResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_Open<WithStreamedUnaryMethod_Close<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_Open<WithStreamedUnaryMethod_Close<Service > > StreamedService;
};

}  // namespace import_kvpb


#endif  // GRPC_import_5fkvpb_2eproto__INCLUDED
