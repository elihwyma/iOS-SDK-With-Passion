/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewControllerContainerCollectionView.h>

@protocol SKUIScrollingTabBarContentCollectionViewDelegate;

__attribute__((visibility("hidden")))
@interface SKUIScrollingTabBarContentCollectionView : SKUIViewControllerContainerCollectionView

{
    _Bool _performingLayout;
}

@property (nonatomic) id <SKUIScrollingTabBarContentCollectionViewDelegate> delegate;
@property (nonatomic, readonly, getter=isPerformingLayout) _Bool performingLayout;

- (void)layoutSubviews;
- (void)_reuseCell:(id)arg1;

@end
