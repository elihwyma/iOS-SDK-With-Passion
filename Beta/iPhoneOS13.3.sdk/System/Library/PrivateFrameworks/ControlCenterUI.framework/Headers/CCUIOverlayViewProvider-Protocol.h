/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

#import <ControlCenterUI/Swift-Protocol.h>

@class CCUIHeaderPocketView, CCUIModuleCollectionView, CCUIStatusLabelViewController, MISSING_TYPE, MTMaterialView, UIScrollView, UIStatusBar, UIView;

@protocol CCUIOverlayViewProvider <Swift>

@property (nonatomic, readonly) MTMaterialView *overlayBackgroundView;
@property (nonatomic, readonly) UIScrollView *overlayScrollView;
@property (nonatomic, readonly) UIView *overlayContainerView;
@property (nonatomic, readonly) CCUIModuleCollectionView *overlayModuleCollectionView;
@property (nonatomic, readonly) CCUIStatusLabelViewController *overlayStatusLabelViewController;
@property (nonatomic, readonly) CCUIHeaderPocketView *overlayHeaderView;
@property (nonatomic, readonly) UIStatusBar *overlayLeadingStatusBar;

- (MISSING_TYPE *)setOverlayStatusBarHidden: /* Error: Ran out of types for this method. */;

@end
