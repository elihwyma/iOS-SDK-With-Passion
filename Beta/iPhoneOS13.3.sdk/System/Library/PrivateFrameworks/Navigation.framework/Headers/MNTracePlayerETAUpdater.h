/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Navigation/MNSessionUpdateManager.h>

@class NSTimer;

__attribute__((visibility("hidden")))
@interface MNTracePlayerETAUpdater : MNSessionUpdateManager

{
    NSTimer *_delayTimer;
}

- (void)dealloc;
- (void)_handleDelayTimerWithUpdateRow:(id)arg1;
- (void)playETAUpdate:(id)arg1;
- (void)startUpdateRequestsForRoutes:(id)arg1 andNavigationType:(int)arg2;
- (void)resumeUpdateRequests;

@end
