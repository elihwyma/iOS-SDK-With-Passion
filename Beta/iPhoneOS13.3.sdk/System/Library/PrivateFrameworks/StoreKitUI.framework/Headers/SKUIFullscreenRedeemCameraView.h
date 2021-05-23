/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class NSString, SKUIRedeemTextField, UIImage, _UIBackdropView;

@protocol SKUIRedeemCameraViewDelegate;

__attribute__((visibility("hidden")))
@interface SKUIFullscreenRedeemCameraView : UIView

{
    id <SKUIRedeemCameraViewDelegate> _delegate;
    UIView *_overlay;
    UIView *_redeemerView;
    SKUIRedeemTextField *_textField;
    _UIBackdropView *_textFieldSafeAreaBackdrop;
    struct CGRect _keyboardRect;
    _Bool _enabled;
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
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)showKeyboard;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)_hideKeyboard;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (id)initWithClientContext:(id)arg1;
- (id)_newTextFieldWithClientContext:(id)arg1;
- (void)_tapGestureAction:(id)arg1;
- (void)textFieldTextDidChange:(id)arg1;
- (void)_pauseRedeemer;
- (void)_resumeRedeemer;

@end
