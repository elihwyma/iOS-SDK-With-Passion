/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UIDelayedAction, UIInputSwitcherView;

__attribute__((visibility("hidden")))
@interface UIInputSwitcher : NSObject

{
    UIDelayedAction *m_keyHoldDelay;
    UIDelayedAction *m_showSwitcherDelay;
    UIDelayedAction *m_hideSwitcherDelay;
    int m_state;
    UIInputSwitcherView *m_switcherView;
    double m_lastGlobeKeyUpTime;
    NSString *_newMode;
    _Bool _isGlobeKeyDown;
    NSString *_loadedIdentifier;
}

@property (copy, nonatomic) NSString *loadedIdentifier;
@property (nonatomic) _Bool isGlobeKeyDown;

+ (id)sharedInstance;
+ (id)activeInstance;

- (id)init;
- (void)dealloc;
- (_Bool)isVisible;
- (void)clearShowSwitcherTimer;
- (void)clearHideSwitcherTimer;
- (void)hideSwitcher;
- (void)cancelShowSwitcherTimer;
- (void)_showSwitcherViewAsHUD;
- (void)touchHideSwitcherTimer;
- (void)handleRotate:(id)arg1;
- (void)showSwitcherShouldAutoHide:(_Bool)arg1;
- (void)showSwitcherWithAutoHide;
- (void)showSwitcherWithoutAutoHide;
- (_Bool)handleSwitchCommand:(_Bool)arg1 withHUD:(_Bool)arg2 withDelay:(_Bool)arg3;
- (id)inputModeIdentifierWithNextFlag:(_Bool)arg1;
- (_Bool)switchMode:(id)arg1 withHUD:(_Bool)arg2 withDelay:(_Bool)arg3;
- (void)touchShowSwitcherTimer;
- (_Bool)isVisibleOrHiding;
- (void)touchKeyHoldTimer;
- (void)clearKeyHoldTimer;
- (void)updateHardwareLayout;
- (void)hideSwitcherIfNeeded;
- (_Bool)handleSwitchCommand:(_Bool)arg1;
- (_Bool)handleSwitchingKeyEvent:(id)arg1;
- (_Bool)handleModifiersChangedEvent:(id)arg1;

@end
