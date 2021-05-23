/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UITableViewCell.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface SKUICategoryTableViewCell : UITableViewCell

{
    UIView *_separatorView;
    struct CGSize _expectedImageSize;
    _Bool _layoutNeedsLayout;
}

@property (nonatomic) struct CGSize expectedImageSize;

- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
