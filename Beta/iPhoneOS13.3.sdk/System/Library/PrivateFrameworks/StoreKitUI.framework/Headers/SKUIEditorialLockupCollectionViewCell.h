/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIItemCollectionViewCell.h>

@class SKUIEditorialLockupCellLayout;

__attribute__((visibility("hidden")))
@interface SKUIEditorialLockupCollectionViewCell : SKUIItemCollectionViewCell

{
    SKUIEditorialLockupCellLayout *_layout;
}

@property (nonatomic, readonly) SKUIEditorialLockupCellLayout *layout;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)configureForItem:(id)arg1 clientContext:(id)arg2;

@end
