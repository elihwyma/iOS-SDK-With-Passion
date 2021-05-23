/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIControl.h>

@class NSMutableArray, NSString, SKUIGiftConfiguration, UITextField, UIView;

__attribute__((visibility("hidden")))
@interface SKUIGiftAmountControl : UIControl

{
    NSMutableArray *_amountButtons;
    UIView *_customAmountBackgroundView;
    UITextField *_customAmountField;
    SKUIGiftConfiguration *_giftConfiguration;
    long long _selectedAmount;
    long long _trackingAmount;
}

@property (nonatomic, readonly) long long selectedAmount;
@property (nonatomic, readonly) NSString *selectedAmountString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_dynamicUserInterfaceTraitDidChange;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (id)initWithGiftConfiguration:(id)arg1;
- (void)_textFieldDidBeginEditing:(id)arg1;
- (void)_textFieldDidChange:(id)arg1;
- (void)_textFieldDidEndEditing:(id)arg1;
- (void)_updateButtonsWithTouch:(id)arg1;
- (void)_reloadSelectedButton;

@end
