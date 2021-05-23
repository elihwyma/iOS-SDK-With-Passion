/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSInputStream, NSMutableData, NSMutableURLRequest, NSOutputStream, NSString;

@protocol OS_dispatch_queue, SSHTTPServerRequestHandlerDelegate;

@interface SSHTTPServerRequestHandler : NSObject

{
    _Bool _incommingHeadersComplete;
    struct __CFHTTPMessage *_incommingMessage;
    NSMutableData *_incommingMessageBody;
    NSInputStream *_input;
    NSOutputStream *_output;
    NSMutableURLRequest *_request;
    NSObject<OS_dispatch_queue> *_requestQueue;
    int _downloadSpeed;
    id <SSHTTPServerRequestHandlerDelegate> _delegate;
}

@property (weak, nonatomic) id <SSHTTPServerRequestHandlerDelegate> delegate;
@property (nonatomic) int downloadSpeed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)close;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)_close;
- (id)initWithReadStream:(id)arg1 writeStream:(id)arg2 runLoop:(id)arg3;
- (_Bool)_handleReceivedDataWithError:(id *)arg1;
- (void)_respondWithRequest:(id)arg1 error:(id)arg2;
- (id)_errorResponseDataWithStatus:(short)arg1 message:(id)arg2;
- (long long)_writeResponseData:(id)arg1 error:(id *)arg2;
- (long long)_throttledWriteSpeed;
- (_Bool)_shouldKeepRunning;

@end
