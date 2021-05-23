/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <CFNetwork/__NSCFURLSessionConnection.h>

#import <CFNetwork/Swift-Protocol.h>

@class NSError, NSObject, NSString, NSURLResponse;

@protocol OS_dispatch_data;

@interface __NSCFURLLocalSessionConnection : __NSCFURLSessionConnection <Swift>

{
    struct SessionConnectionLoadable *_loaderClient;
    struct URLConnectionLoader *_loader;
    _Bool _canceled;
    long long _suspended;
    NSObject<OS_dispatch_data> *_pendingData;
    long long _pendingCompletion;
    unsigned long long _didReceiveResponseDisposition;
    NSError *_pendingError;
    int _state;
    long long _clientBufferLength;
    NSObject<OS_dispatch_data> *_sniffData;
    NSURLResponse *_sniffResponse;
    _Bool _isMixedReplace;
    _Bool _didCheckMixedReplace;
    _Bool _didCheckCredentialsSuppliedInURL;
    _Bool _actuallyTriedCredentialsSuppliedInURL;
    unsigned long long _maxDataSegmentCoalesceThreshhold;
    unsigned long long _maxDataSegmentCount;
    unsigned int _didReceiveDataCount;
    _Bool _canSendDidFinishCollectingMetrics;
    _Bool _ignoreLoaderEvents;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)cancel;
- (void)resume;
- (void)suspend;
- (void)_cleanup;
- (void)_tick;
- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;
- (id)initWithTask:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
- (void)expectedProgressTargetChanged;
- (void)setBytesPerSecondLimit:(long long)arg1;
- (void)setPriorityHint:(float)arg1;
- (void)setPoolPriority:(long long)arg1;
- (void)setIsDownload:(_Bool)arg1;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;
- (void)cancelAuthenticationChallenge:(id)arg1;
- (void)withDelegateAndPendingCompletion:(CDUnknownBlockType)arg1;
- (void)_immediatePostDelegateTick;
- (void)afterDelegateWithTick:(CDUnknownBlockType)arg1;
- (void)withLoaderOnQueue:(CDUnknownBlockType)arg1;
- (void)withLoaderAsync:(CDUnknownBlockType)arg1;
- (void)_tick_initialize_startLoad;
- (void)_tick_initialize;
- (void)_tick_sniffNow;
- (void)_tick_running;
- (void)_ackBytes:(long long)arg1;
- (void)_task_sendFinish;
- (void)_tick_finishing;
- (void)_sendResponseToDelegate:(id)arg1;
- (void)_didReceiveResponse:(id)arg1 sniff:(_Bool)arg2 rewrite:(_Bool)arg3;
- (void)_didReceiveData:(id)arg1;
- (void)_didSendBodyData:(struct UploadProgressInfo)arg1;
- (void)_didFinishWithError:(id)arg1;
- (void)_didReceiveConnectionCacheKey:(struct HTTPConnectionCacheKey *)arg1;
- (void)_willSendRequestForEstablishedConnection:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_connectionIsWaitingWithReason:(long long)arg1;
- (void)_conditionalRequirementsChanged:(_Bool)arg1;
- (void)_needConnectedSocketToHost:(id)arg1 port:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_redirectRequest:(id)arg1 redirectResponse:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_didReceiveChallenge:(id)arg1;
- (void)_needNewBodyStream;
- (void)_capturedSocketInputStream:(id)arg1 outputStream:(id)arg2;
- (void)_captureTransportConnection:(shared_ptr_8da4e70b)arg1 extraBytes:(id)arg2;

@end
