/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UITableViewCell.h>

@class SKUIBorderView, UIColor;

@interface SKUITableViewCell : UITableViewCell

{
    SKUIBorderView *_bottomBorderView;
    SKUIBorderView *_topBorderView;
    double _titlePaddingLeft;
    struct UIEdgeInsets _textLabelInsets;
    double _borderPaddingLeft;
}

@property (copy, nonatomic) UIColor *bottomBorderColor;
@property (copy, nonatomic) UIColor *topBorderColor;
@property (nonatomic) double borderPaddingLeft;
@property (nonatomic) struct UIEdgeInsets textLabelInsets;

- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_reloadBorderVisibility;

@end
