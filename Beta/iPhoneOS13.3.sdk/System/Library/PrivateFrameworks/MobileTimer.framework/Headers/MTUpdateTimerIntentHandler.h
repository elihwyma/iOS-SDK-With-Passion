/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <MobileTimer/MTTimerIntentHandler.h>

@interface MTUpdateTimerIntentHandler : MTTimerIntentHandler

- (id)_timerFromIntentTargetTimer:(id)arg1 defaultState:(long long)arg2;
- (void)_updateTimer:(id)arg1 dryRun:(_Bool)arg2 allowMultiple:(_Bool)arg3 excludeStoppedTimers:(_Bool)arg4 filterBlock:(CDUnknownBlockType)arg5 updateBlock:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7;
- (void)_updateTimer:(id)arg1 dryRun:(_Bool)arg2 updateBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;

@end
