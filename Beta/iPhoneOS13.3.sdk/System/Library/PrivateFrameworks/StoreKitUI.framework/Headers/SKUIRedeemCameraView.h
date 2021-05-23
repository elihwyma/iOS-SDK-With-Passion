/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class NSString, SKUIClientContext, SKUIITunesPassConfiguration, SKUIRedeemCameraLandingView, SKUIRedeemITunesPassLockup, SKUIRedeemTextField, UIButton, UIImage;

@protocol SKUIRedeemCameraViewDelegate;

__attribute__((visibility("hidden")))
@interface SKUIRedeemCameraView : UIView

{
    SKUIClientContext *_clientContext;
    id <SKUIRedeemCameraViewDelegate> _delegate;
    SKUIRedeemTextField *_inputAccessoryTextField;
    SKUIITunesPassConfiguration *_iTunesPassConfiguration;
    SKUIRedeemITunesPassLockup *_iTunesPassLockup;
    SKUIRedeemCameraLandingView *_landingView;
    UIView *_overlay;
    UIView *_redeemerView;
    UIButton *_termsButton;
    SKUIRedeemTextField *_textField;
    _Bool _displayRedeem;
}

@property (weak, nonatomic) id <SKUIRedeemCameraViewDelegate> delegate;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) SKUIITunesPassConfiguration *ITunesPassConfiguration;
@property (copy, nonatomic) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)start;
- (void)layoutSubviews;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)showKeyboard;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (void)_hideKeyboard;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (id)initWithClientContext:(id)arg1;
- (void)_termsButtonAction:(id)arg1;
- (void)_tapGestureAction:(id)arg1;
- (void)_landingButtonAction:(id)arg1;
- (id)_newTextFieldWithClientContext:(id)arg1 placeholderColor:(id)arg2;
- (void)textFieldTextDidChange:(id)arg1;
- (void)_iTunesPassLearnMoreAction:(id)arg1;
- (_Bool)_isShowingRedeemer;
- (void)_pauseRedeemer;
- (void)_showRedeemer:(_Bool)arg1;
- (void)_resumeRedeemer;

@end
