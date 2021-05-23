/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <MobileTimer/MTTimerIntentHandler.h>

@class NSString;

@interface MTDeleteTimerIntentHandler : MTTimerIntentHandler

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)handleDeleteTimer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)confirmDeleteTimer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resolveTargetTimerForDeleteTimer:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resolveDeleteMultipleForDeleteTimer:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)_timerFromIntentTargetTimer:(id)arg1 defaultState:(long long)arg2;
- (id)_responseToDeleteTimerIntent:(id)arg1 withDeletedTimers:(id)arg2 error:(id)arg3 dryRun:(_Bool)arg4;
- (void)_deleteTimer:(id)arg1 multiple:(_Bool)arg2 dryRun:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;

@end
