/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <CFNetwork/__NSCFURLSessionTask.h>

#import <CFNetwork/Swift-Protocol.h>

@class NSInputStream, NSObject, NSOperationQueue, NSOutputStream, NSString, NSURL, __NSCFURLSessionConnection;

@protocol OS_dispatch_data, OS_dispatch_source;

@interface __NSCFLocalSessionTask : __NSCFURLSessionTask <Swift>

{
    __NSCFURLSessionConnection *_cfConn;
    NSURL *_uploadFile;
    NSObject<OS_dispatch_data> *_dataTaskData;
    CDUnknownBlockType _dataTaskCompletion;
    NSObject<OS_dispatch_data> *_pendingResponseBytes;
    unsigned long long _suspendCount;
    CDUnknownBlockType _async_initialization;
    NSObject<OS_dispatch_source> *_resourceTimeout;
    struct HTTPConnectionCacheKey *_connKey;
    double _startTimeoutTime;
    NSObject<OS_dispatch_source> *_startTimeoutTimer;
    NSObject<OS_dispatch_source> *_payloadTransmissionTimer;
    NSObject<OS_dispatch_source> *_willSendRequestTimer;
    NSInputStream *_socketReadStreamForUpgrade;
    NSOutputStream *_socketWriteStreamForUpgrade;
    shared_ptr_8da4e70b _connectionForUpgrade;
    NSObject<OS_dispatch_data> *_extraBytes;
    NSOperationQueue *_connectionWorkQueue;
    int _connectionWorkQueueSuspensionCount;
    _Bool _pendingResponseDisposition;
    _Bool _pendingResponseDisposition_didFinish;
    _Bool _didIssueWaitingForConnectivity;
    _Bool _didIssueDidFinish;
    _Bool _suspendedForDisposition;
    _Bool _didCheckMixedReplace;
    _Bool _isMixedReplace;
    _Bool _sentDidFinishCollectingMetrics;
}

@property (retain) __NSCFURLSessionConnection *cfConn;
@property (retain) NSURL *uploadFile;
@property (copy) CDUnknownBlockType dataTaskCompletion;
@property _Bool pendingResponseDisposition;
@property _Bool pendingResponseDisposition_didFinish;
@property unsigned long long suspendCount;
@property (copy) CDUnknownBlockType async_initialization;
@property _Bool didIssueWaitingForConnectivity;
@property _Bool didIssueDidFinish;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id).cxx_construct;
- (void)setConnection:(id)arg1;
- (void)_onqueue_completeInitialization;
- (void)_onSessionQueue_disavow;
- (id)_onqueue_strippedMutableRequest;
- (id)initWithOriginalRequest:(id)arg1 ident:(unsigned long long)arg2 taskGroup:(id)arg3;
- (void)_onqueue_setupNextEffectiveConfigurationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_onqueue_cancel;
- (void)_onqueue_didReceiveResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_private_onqueue_didReceiveResponseDisposition:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_onqueue_suspend;
- (void)_private_onqueue_didReceiveResponse:(id)arg1;
- (void)connection:(id)arg1 wasRedirected:(id)arg2 newRequest:(id)arg3 responseCallback:(CDUnknownBlockType)arg4;
- (void)connection:(id)arg1 request:(id)arg2 needsNewBodyStreamCallback:(CDUnknownBlockType)arg3;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)connection:(id)arg1 willCacheResponse:(id)arg2 responseCallback:(CDUnknownBlockType)arg3;
- (void)connection:(id)arg1 didFinishCollectingMetrics:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)connectionWillFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFinishLoadingWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveConnectionCacheKey:(struct HTTPConnectionCacheKey *)arg2;
- (void)connection:(id)arg1 challenged:(id)arg2 authCallback:(CDUnknownBlockType)arg3;
- (void)connection:(id)arg1 didReceiveData:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)connection:(id)arg1 sentBodyBytes:(id)arg2 totalBytes:(id)arg3 expectedBytes:(id)arg4;
- (void)connection:(id)arg1 _willSendRequestForEstablishedConnection:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)connection:(id)arg1 waitingWithReason:(long long)arg2;
- (void)connection:(id)arg1 _conditionalRequirementsChanged:(_Bool)arg2;
- (void)connection:(id)arg1 didReceiveSocketInputStream:(id)arg2 outputStream:(id)arg3;
- (void)connection:(id)arg1 needConnectedSocketToHost:(id)arg2 port:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)connection:(id)arg1 didReceiveTCPConnection:(shared_ptr_8da4e70b)arg2 extraBytes:(id)arg3;
- (void)_onqueue_resume;
- (void)_onqueue_adjustPoolPriority;
- (void)_onqueue_adjustLoadingPoolPriority;
- (id)initWithLocalTask:(id)arg1;
- (id)initWithBackgroundTaskInfo:(id)arg1 taskGroup:(id)arg2;
- (void)_finishAllow;
- (void)_finishBecomeDownload:(id)arg1;
- (void)_finishBecomeStream:(id)arg1 forConnection:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)localSession;
- (void)_private_onqueue_becomeStreamTaskWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_onqueue_didReceiveResponse:(id)arg1 redirectRequest:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_onqueue_didReceiveChallenge:(id)arg1 request:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_onqueue_willCacheResponse:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_onqueue_didFinishCollectingMetrics:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_task_onqueue_didFinish;
- (void)_onqueue_didFinishWithError:(id)arg1;
- (void)_onqueue_didReceiveDispatchData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_task_onqueue_didReceiveDispatchData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_onqueue_needNewBodyStream:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_onqueue_willSendRequestForEstablishedConnection:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_onqueue_connectionWaitingWithReason:(long long)arg1;
- (void)_onqueue_conditionalRequirementsChanged:(_Bool)arg1;
- (void)_onqueue_needConnectedSocketToHost:(id)arg1 port:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_onqueue_didSendBodyBytes:(long long)arg1 totalBytesSent:(long long)arg2 totalBytesExpectedToSend:(long long)arg3;
- (void)_onqueue_cancel_with_error:(id)arg1;
- (void)_onqueue_adjustPriorityHint:(float)arg1;
- (void)_onqueue_adjustBytesPerSecondLimit:(long long)arg1;
- (void)_onqueue_expectedProgressTargetChanged;
- (void)cancel_with_error:(id)arg1;
- (void)_askForConnectedSocketLater;
- (id)error:(id)arg1 code:(long long)arg2;
- (id)nsurlError:(int)arg1;
- (id)canceledError;
- (id)posixError:(int)arg1;
- (id)timeoutErrorWithStreamErrorCode:(int)arg1;
- (id)resourceTimeoutError;
- (id)startTimeoutError;
- (void)startResourceTimer;
- (_Bool)_needSendingMetrics;
- (void)_didSendMetrics;
- (void)_onqueue_startTimer:(id)arg1 withTimeoutInNanos:(long long)arg2 streamErrorCode:(int)arg3;
- (void)_onqueue_startResourceTimer:(double)arg1;
- (void)set_timeoutIntervalForResource:(double)arg1;
- (void)_onqueue_restartResourceTimer:(double)arg1;
- (void)_onqueue_startResourceTimer;
- (void)_onqueue_startStartTimer;
- (void)_onqueue_startPayloadTransmissionTimer;
- (void)_onqueue_submitConnectionWork:(CDUnknownBlockType)arg1;
- (void)_onqueue_suspendWorkQueue;
- (void)_onqueue_resumeWorkQueue;

@end
