/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class FBDisplayLayoutElement, UIApplicationSceneDeactivationAssertion, UIWindow;

@interface SBCoverSheetSceneManager : NSObject

{
    UIWindow *_coverSheetWindow;
    FBDisplayLayoutElement *_displayLayoutElement;
    UIApplicationSceneDeactivationAssertion *_notificationCenterAssertion;
    UIApplicationSceneDeactivationAssertion *_systemAnimationAssertion;
}

@property (retain, nonatomic) FBDisplayLayoutElement *displayLayoutElement;
@property (retain, nonatomic) UIApplicationSceneDeactivationAssertion *notificationCenterAssertion;
@property (retain, nonatomic) UIApplicationSceneDeactivationAssertion *systemAnimationAssertion;
@property (weak, nonatomic) UIWindow *coverSheetWindow;

- (id)initWithCoverSheetWindow:(id)arg1;
- (void)updateSceneManagerForPresented:(_Bool)arg1 suspendUnderLockEnvironment:(_Bool)arg2;
- (void)updateForegroundScenesForCoverSheetAnimationActive:(_Bool)arg1;
- (void)_setSceneBackgrounded:(_Bool)arg1 suspendUnderLockEnvironment:(_Bool)arg2;
- (void)_setDisplayLayoutElementActive:(_Bool)arg1;
- (void)_updateForegroundScenesForNotificationCenter:(_Bool)arg1;

@end
