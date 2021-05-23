/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIApplication.h>

@class FBDisplayLayoutTransition;

@interface UISystemShellApplication : UIApplication

{
    FBDisplayLayoutTransition *_interfaceOrientationTransition;
    id _didFinishLaunchingObserver;
}

+ (_Bool)registerAsSystemApp;
+ (_Bool)rendersLocally;

- (id)init;
- (_Bool)isSuspended;
- (_Bool)isFrontBoard;
- (_Bool)canOpenURL:(id)arg1;
- (_Bool)isSuspendedEventsOnly;
- (_Bool)isSuspendedUnderLock;
- (_Bool)_saveSnapshotWithName:(id)arg1;
- (_Bool)_openURL:(id)arg1;
- (_Bool)handleDoubleHeightStatusBarTapWithStyleOverride:(int)arg1;
- (void)resetIdleTimerAndUndim;
- (void)noteActiveInterfaceOrientationWillChangeToOrientation:(long long)arg1;
- (void)noteActiveInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithSettings:(id)arg2 fromOrientation:(long long)arg3;
- (long long)startupInterfaceOrientation;
- (long long)_interfaceOrientationRotationDirectionFromOrientation:(long long)arg1 toOrientation:(long long)arg2;

@end
