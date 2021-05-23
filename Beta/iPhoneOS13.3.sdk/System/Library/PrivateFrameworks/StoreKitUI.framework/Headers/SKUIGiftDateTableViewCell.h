/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UITableViewCell.h>

@class NSString, UIImageView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface SKUIGiftDateTableViewCell : UITableViewCell

{
    UIView *_bottomBorderView;
    _Bool _checked;
    UIImageView *_checkmarkView;
    UILabel *_dateLabel;
    UILabel *_labelLabel;
    UILabel *_placeholderLabel;
    UIView *_topBorderView;
    _Bool _leftToRight;
}

@property (nonatomic) _Bool leftToRight;
@property (nonatomic, getter=isChecked) _Bool checked;
@property (copy, nonatomic) NSString *dateString;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *placeholder;

- (void)layoutSubviews;
- (id)_newLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)_labelColor;

@end
