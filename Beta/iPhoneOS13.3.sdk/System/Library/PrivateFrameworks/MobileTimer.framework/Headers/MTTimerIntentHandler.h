/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@protocol MTTimerManagerIntentSupport, MTTimerManagerProviding;

@interface MTTimerIntentHandler : NSObject

{
    id <MTTimerManagerProviding> _timerManagerProvider;
    id <MTTimerManagerIntentSupport> _timerManager;
}

@property (retain, nonatomic) id <MTTimerManagerIntentSupport> timerManager;
@property (weak, nonatomic) id <MTTimerManagerProviding> timerManagerProvider;

- (id)_timerManager;
- (void)_genericallyResolveTargetTimer:(id)arg1 multiple:(_Bool)arg2 allowedTimerStatesForFollowup:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_matchTimersFromIntentsTimer:(id)arg1 excludeStoppedTimers:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_onlyUnnamedTimerInTimers:(id)arg1 forTargetTimer:(id)arg2 allowMultiple:(_Bool)arg3;
- (id)_alternateTimersForTargetTimerState:(long long)arg1 type:(long long)arg2 inTimers:(id)arg3 allowedTimerStates:(id)arg4;
- (_Bool)_isDefaultTimer:(id)arg1;

@end
