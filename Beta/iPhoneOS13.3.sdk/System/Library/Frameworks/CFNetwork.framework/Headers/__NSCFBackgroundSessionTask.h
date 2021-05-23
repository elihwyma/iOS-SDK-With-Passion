/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <CFNetwork/__NSCFURLSessionTask.h>

#import <CFNetwork/Swift-Protocol.h>

@class NSError, NSString;

@interface __NSCFBackgroundSessionTask : __NSCFURLSessionTask <Swift>

{
    _Bool _sentCancel;
    _Bool _sentDidFinish;
    NSError *_immediateError;
}

@property (retain) NSError *immediateError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)_onSessionQueue_disavow;
- (id)initWithOriginalRequest:(id)arg1 ident:(unsigned long long)arg2 taskGroup:(id)arg3;
- (void)_onqueue_cancel;
- (void)_onqueue_suspend;
- (void)_onqueue_resume;
- (void)_onqueue_adjustPoolPriority;
- (void)_onqueue_adjustLoadingPoolPriority;
- (void)_onqueue_didReceiveChallenge:(id)arg1 request:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_onqueue_didFinishCollectingMetrics:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_onqueue_didFinishWithError:(id)arg1;
- (void)_onqueue_willSendRequestForEstablishedConnection:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_onqueue_connectionWaitingWithReason:(long long)arg1;
- (void)_onqueue_didSendBodyBytes:(long long)arg1 totalBytesSent:(long long)arg2 totalBytesExpectedToSend:(long long)arg3;
- (void)_onqueue_adjustPriorityHint:(float)arg1;
- (void)_onqueue_adjustBytesPerSecondLimit:(long long)arg1;
- (void)setTaskDescription:(id)arg1;
- (id)_timingData;
- (id)initWithBackgroundTask:(id)arg1;
- (void)_onqueue_didReceiveResponse:(id)arg1;
- (void)_onqueue_connectionWaitingWithError:(id)arg1;
- (void)_onqueue_didResume;
- (id)initWithTaskInfo:(id)arg1 taskGroup:(id)arg2 ident:(unsigned long long)arg3;
- (id)_onqueue_additionalBackgroundProperties;
- (void)_onqueue_adjustExpectedProgressTarget:(unsigned long long)arg1;
- (void)set_discretionaryOverride:(long long)arg1;

@end
