/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIViewController.h>

@class SKUIScrollingSegmentedController, SKUIScrollingTabBarController, SKUIStackedBar, _UIBackdropView;

@interface UIViewController (SKUIExtensions)

@property (nonatomic, readonly) SKUIStackedBar *SKUIStackedBar;
@property (nonatomic) double SKUIStackedBarSplit;
@property (nonatomic, readonly) SKUIScrollingTabBarController *scrollingTabBarController;
@property (nonatomic, readonly) SKUIScrollingSegmentedController *scrollingSegmentedController;
@property (nonatomic, readonly) _UIBackdropView *SKUIPinnedHeaderView;

- (id)_SKUIView;
- (id)registerForPreviewingFromSourceView:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)unregisterForPreviewing:(id)arg1;
- (void)setNeedsNestedPagingScrollViewUpdate;
- (void)setNeedsScrollingSegmentContentScrollViewUpdate;
- (void)setNeedsNavigationBarAppearanceUpdate;

@end
