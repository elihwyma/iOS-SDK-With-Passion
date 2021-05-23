/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUITableViewCell.h>

@class NSString, SKUIItemCellLayout;

@interface SKUIItemTableViewCell : SKUITableViewCell

{
    _Bool _layoutNeedsLayout;
}

@property (nonatomic, readonly) SKUIItemCellLayout *layout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)prepareForReuse;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setCellLayoutNeedsLayout;
- (void)configureForItem:(id)arg1 clientContext:(id)arg2 rowIndex:(long long)arg3;
- (void)configureForItem:(id)arg1 rowIndex:(long long)arg2;

@end
