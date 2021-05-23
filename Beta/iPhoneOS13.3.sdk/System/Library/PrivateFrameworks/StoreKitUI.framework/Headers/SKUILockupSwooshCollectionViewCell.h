/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIItemCollectionViewCell.h>

@class SKUILockupSwooshCellLayout;

__attribute__((visibility("hidden")))
@interface SKUILockupSwooshCollectionViewCell : SKUIItemCollectionViewCell

{
    SKUILockupSwooshCellLayout *_layout;
}

@property (nonatomic, readonly) SKUILockupSwooshCellLayout *layout;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)configureForItem:(id)arg1 clientContext:(id)arg2;

@end
