/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class SBLockScreenManager, SBMainDisplayPolicyAggregator;

@interface SBTodayWidgetXCodeDebuggingUtility : NSObject

{
    SBLockScreenManager *_lockScreenManager;
    SBMainDisplayPolicyAggregator *_policyAggregator;
}

- (id)init;
- (void)launchTodayViewFromCurrentContextWithCompletion:(CDUnknownBlockType)arg1;
- (void)_reallyLaunchTodayViewFromCurrentContextWithCompletion:(CDUnknownBlockType)arg1;

@end
