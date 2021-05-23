/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewControllerContainerCollectionView.h>

@protocol SKUIScrollingSegmentedControllerCollectionViewDelegate;

__attribute__((visibility("hidden")))
@interface SKUIScrollingSegmentedControllerCollectionView : SKUIViewControllerContainerCollectionView

{
    _Bool _performingLayout;
}

@property (nonatomic) id <SKUIScrollingSegmentedControllerCollectionViewDelegate> delegate;
@property (nonatomic, readonly, getter=isPerformingLayout) _Bool performingLayout;

- (void)layoutSubviews;

@end
