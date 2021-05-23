/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class NSString, SKUIRedeemCameraLandingView, SKUIRedeemTextField, UIButton, UIImage, UIScrollView;

@protocol SKUIRedeemCameraViewDelegate;

__attribute__((visibility("hidden")))
@interface SKUIIPadRedeemCameraView : UIView

{
    id <SKUIRedeemCameraViewDelegate> _delegate;
    SKUIRedeemTextField *_inputAccessoryTextField;
    SKUIRedeemCameraLandingView *_landingView;
    UIView *_redeemerView;
    UIScrollView *_scrollView;
    UIButton *_termsButton;
    SKUIRedeemTextField *_textField;
}

@property (weak, nonatomic) id <SKUIRedeemCameraViewDelegate> delegate;
@property (nonatomic) _Bool enabled;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)start;
- (void)layoutSubviews;
- (void)showKeyboard;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)_hideKeyboard;
- (void)keyboardDidChange:(id)arg1;
- (id)initWithClientContext:(id)arg1;
- (void)_termsButtonAction:(id)arg1;
- (void)_landingButtonAction:(id)arg1;
- (id)_newTextFieldWithClientContext:(id)arg1 placeholderColor:(id)arg2;
- (void)textFieldTextDidChange:(id)arg1;
- (double)_adjustVerticalSpacingForHeight:(double)arg1;

@end
