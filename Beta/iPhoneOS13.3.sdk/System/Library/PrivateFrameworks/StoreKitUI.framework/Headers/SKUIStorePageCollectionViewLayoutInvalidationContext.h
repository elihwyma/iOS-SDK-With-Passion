/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UICollectionViewFlowLayoutInvalidationContext.h>

__attribute__((visibility("hidden")))
@interface SKUIStorePageCollectionViewLayoutInvalidationContext : UICollectionViewFlowLayoutInvalidationContext

{
    _Bool _invalidateItemPinningLayoutInformation;
    _Bool _invalidatePinnedBackdropViewStyle;
}

@property (nonatomic) _Bool invalidateItemPinningLayoutInformation;
@property (nonatomic) _Bool invalidatePinnedBackdropViewStyle;

@end
