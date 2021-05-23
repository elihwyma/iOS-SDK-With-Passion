/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UITableViewCell.h>

@class NSString, UITextField;

@protocol SKUIRedeemIdTableViewCellDelegate;

__attribute__((visibility("hidden")))
@interface SKUIRedeemIdTableViewCell : UITableViewCell

{
    id <SKUIRedeemIdTableViewCellDelegate> _delegate;
    UITextField *_textField;
}

@property (retain, nonatomic) UITextField *textField;
@property (weak, nonatomic) id <SKUIRedeemIdTableViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)layoutSubviews;
- (_Bool)becomeFirstResponder;
- (_Bool)resignFirstResponder;
- (void)setReturnKeyType:(long long)arg1;
- (void)setKeyboardType:(long long)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (void)setPlaceholderText:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)_initializeTextField;
- (void)setAutoCapitalizationType:(long long)arg1;

@end
