/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UITableViewCell.h>

@class NSAttributedString, NSString, UIControl, UILabel, UITextField, UIView;

@protocol UITextFieldDelegate;

__attribute__((visibility("hidden")))
@interface SKUIGiftTextFieldTableViewCell : UITableViewCell

{
    UILabel *_label;
    UITextField *_textField;
    UIView *_topBorderView;
    _Bool _leftToRight;
}

@property (nonatomic) _Bool leftToRight;
@property (copy, nonatomic) NSAttributedString *attributedPlaceholder;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (nonatomic) long long keyboardType;
@property (copy, nonatomic) NSString *label;
@property (nonatomic, readonly) UIControl *textField;
@property (nonatomic) id <UITextFieldDelegate> textFieldDelegate;
@property (copy, nonatomic) NSString *value;

- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
