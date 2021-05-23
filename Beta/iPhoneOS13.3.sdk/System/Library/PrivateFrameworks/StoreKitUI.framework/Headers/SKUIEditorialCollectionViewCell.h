/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUICollectionViewCell.h>

@class NSString, SKUIEditorialCellLayout;

__attribute__((visibility("hidden")))
@interface SKUIEditorialCollectionViewCell : SKUICollectionViewCell

{
    SKUIEditorialCellLayout *_layout;
    _Bool _layoutNeedsLayout;
}

@property (nonatomic, readonly) SKUIEditorialCellLayout *layout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)prepareForReuse;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)applyLayoutAttributes:(id)arg1;
- (void)setCellLayoutNeedsLayout;

@end
