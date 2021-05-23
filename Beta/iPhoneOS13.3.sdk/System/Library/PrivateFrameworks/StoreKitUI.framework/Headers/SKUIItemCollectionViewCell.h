/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUICollectionViewCell.h>

@class NSString, SKUIItemCellLayout;

@interface SKUIItemCollectionViewCell : SKUICollectionViewCell

{
    _Bool _layoutNeedsLayout;
}

@property (nonatomic, readonly) SKUIItemCellLayout *layout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)prepareForReuse;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)applyLayoutAttributes:(id)arg1;
- (void)configureForItem:(id)arg1 clientContext:(id)arg2;
- (void)setCellLayoutNeedsLayout;

@end
