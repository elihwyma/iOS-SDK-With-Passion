/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <SpringBoardUI/Swift-Protocol.h>

@class SBLockScreenPluginAction, UIViewController;

@protocol SBLockScreenPluginAgent, SBLockScreenPluginAppearance, SBLockScreenPluginViewController;

@protocol SBLockScreenPluginController <Swift>

@property (weak, nonatomic) id <SBLockScreenPluginAgent> pluginAgent;
@property (nonatomic, readonly) long long pluginPriority;
@property (nonatomic, readonly) UIViewController<SBLockScreenPluginViewController> *pluginViewController;
@property (nonatomic, readonly) id <SBLockScreenPluginAppearance> pluginAppearance;
@property (retain, nonatomic, readonly) SBLockScreenPluginAction *pluginUnlockAction;

@end
