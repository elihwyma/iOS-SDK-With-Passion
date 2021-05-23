/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIItemCollectionViewCell.h>

@class SKUILockupItemCellLayout;

__attribute__((visibility("hidden")))
@interface SKUILockupItemCollectionViewCell : SKUIItemCollectionViewCell

{
    SKUILockupItemCellLayout *_layout;
}

@property (nonatomic, readonly) SKUILockupItemCellLayout *layout;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)configureForItem:(id)arg1 clientContext:(id)arg2;

@end
