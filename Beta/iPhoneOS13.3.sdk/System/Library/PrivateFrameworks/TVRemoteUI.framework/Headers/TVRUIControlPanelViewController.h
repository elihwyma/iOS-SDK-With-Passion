/*
 Image: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
 */

#import <UIKit/UIViewController.h>

@class NSString, UIView, _TVRSiriHaptic, _TVRUIButtonPanelView;

@protocol TVRUIDevice, TVRUIStyleProvider, _TVRUIEventDelegate;

@interface TVRUIControlPanelViewController : UIViewController

{
    id <_TVRUIEventDelegate> _buttonActionsDelegate;
    _TVRUIButtonPanelView *_touchpadButtonPanel;
    _TVRUIButtonPanelView *_genericButtonPanel;
    _TVRUIButtonPanelView *_panelWithKeyboardButton;
    id <TVRUIDevice> _remoteDevice;
    id <TVRUIStyleProvider> _styleProvider;
    _TVRSiriHaptic *_siriHaptic;
    UIView *_backgroundView;
}

@property (retain, nonatomic) _TVRUIButtonPanelView *touchpadButtonPanel;
@property (retain, nonatomic) _TVRUIButtonPanelView *genericButtonPanel;
@property (retain, nonatomic) _TVRUIButtonPanelView *panelWithKeyboardButton;
@property (retain, nonatomic) id <TVRUIDevice> remoteDevice;
@property (retain, nonatomic) id <TVRUIStyleProvider> styleProvider;
@property (retain, nonatomic) _TVRSiriHaptic *siriHaptic;
@property (retain, nonatomic) UIView *backgroundView;
@property (weak, nonatomic) id <_TVRUIEventDelegate> buttonActionsDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (_Bool)_canShowWhileLocked;
- (void)setDevice:(id)arg1;
- (void)disableSearchButton;
- (void)enableSearchButton;
- (void)transitonToViewForDeviceType:(long long)arg1;
- (void)enableControls;
- (void)disableControls;
- (void)showKeyboardButton;
- (void)hideKeyboardButton;
- (void)_createTouchpadButtonPanel;
- (void)_transitionToPanelView:(id)arg1;
- (id)_createViewWithPrimaryButtonType:(long long)arg1 leftButtonTypes:(id)arg2 rightButtonTypes:(id)arg3;
- (void)_createButtonPanelWithKeyboard;
- (void)_transitionToButtonPanelAndCreateIfNeeded;
- (void)_transitionToTouchpadPanelAndCreateIfNeeded;
- (void)_createGenericControlButtonPanel;

@end
