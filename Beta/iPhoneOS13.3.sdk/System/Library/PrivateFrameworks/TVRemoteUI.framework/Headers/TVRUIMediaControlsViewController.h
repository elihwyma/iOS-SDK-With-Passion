/*
 Image: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
 */

#import <UIKit/UIViewController.h>

@class NSString, TVRUIButton, TVRUICaptionsButton;

@protocol TVRUIDevice, TVRUIStyleProvider, _TVRUIEventDelegate;

@interface TVRUIMediaControlsViewController : UIViewController

{
    _Bool _showSkipControls;
    _Bool _showCaptionControl;
    id <_TVRUIEventDelegate> _buttonActionsDelegate;
    TVRUIButton *_skipForwardButton;
    TVRUIButton *_skipBackwardButton;
    TVRUICaptionsButton *_captionsButton;
    id <TVRUIStyleProvider> _styleProvider;
    id <TVRUIDevice> _device;
}

@property (retain, nonatomic) TVRUIButton *skipForwardButton;
@property (retain, nonatomic) TVRUIButton *skipBackwardButton;
@property (retain, nonatomic) TVRUICaptionsButton *captionsButton;
@property (retain, nonatomic) id <TVRUIStyleProvider> styleProvider;
@property (retain, nonatomic) id <TVRUIDevice> device;
@property (weak, nonatomic) id <_TVRUIEventDelegate> buttonActionsDelegate;
@property (nonatomic, getter=isShowingSkipControls) _Bool showSkipControls;
@property (nonatomic, getter=isShowingCaptionControl) _Bool showCaptionControl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (_Bool)_canShowWhileLocked;
- (void)_createButtons;
- (void)_skipForwardTapped:(id)arg1;
- (void)_captionsTapped:(id)arg1;
- (void)_skipBackwardTapped:(id)arg1;
- (void)_sendButtonTapped:(long long)arg1;
- (void)updateCaptionState:(_Bool)arg1;

@end
