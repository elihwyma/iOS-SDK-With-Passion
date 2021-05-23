/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <MobileTimer/MTUpdateTimerIntentHandler.h>

@class NSString;

@interface MTResetTimerIntentHandler : MTUpdateTimerIntentHandler

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)handleResetTimer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)confirmResetTimer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resolveTargetTimerForResetTimer:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)_responseToResetTimerIntent:(id)arg1 withResetTimers:(id)arg2 error:(id)arg3 dryRun:(_Bool)arg4;
- (void)_handleResetTimer:(id)arg1 dryRun:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;

@end
