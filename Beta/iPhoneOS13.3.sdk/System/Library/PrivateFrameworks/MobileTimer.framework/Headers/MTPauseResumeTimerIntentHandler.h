/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <MobileTimer/MTUpdateTimerIntentHandler.h>

@class NSString;

@interface MTPauseResumeTimerIntentHandler : MTUpdateTimerIntentHandler

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)handlePauseTimer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)confirmPauseTimer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resolveTargetTimerForPauseTimer:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resolvePauseMultipleForPauseTimer:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)handleResumeTimer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)confirmResumeTimer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resolveTargetTimerForResumeTimer:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resolveResumeMultipleForResumeTimer:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_handlePauseTimer:(id)arg1 dryRun:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_responseToPauseTimerIntent:(id)arg1 withPausedTimers:(id)arg2 error:(id)arg3 dryRun:(_Bool)arg4;
- (void)_handleResumeTimer:(id)arg1 dryRun:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_responseToResumeTimerIntent:(id)arg1 withResumedTimers:(id)arg2 error:(id)arg3 dryRun:(_Bool)arg4;

@end
