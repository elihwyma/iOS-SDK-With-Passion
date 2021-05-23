/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSString, SKUIViewControllerContainerCollectionViewCell, UIScrollView, UIViewController;

@protocol SKUIScrollingTabBarControllerItemContextDelegate;

__attribute__((visibility("hidden")))
@interface SKUIScrollingTabBarControllerItemContext : NSObject

{
    _Bool _adjustingNestedPagingScrollViewContentOffset;
    struct UIEdgeInsets _appliedContentInsetsAdjustment;
    CDStruct_17994511 _desiredContentInsetAdjustmentDescriptor;
    UIScrollView *_insetAdjustedContentScrollView;
    double _lastSeenContentWidth;
    CDStruct_19149c72 _lastSentAppearanceStatus;
    UIScrollView *_observedNestedPagingScrollView;
    unsigned long long _originalAutoresizingMask;
    _Bool _readyForDisplay;
    BOOL _viewControllerIsNavigationController;
    SKUIViewControllerContainerCollectionViewCell *_collectionViewCell;
    id <SKUIScrollingTabBarControllerItemContextDelegate> _delegate;
    unsigned long long _lastSelectedPageIndex;
    UIViewController *_viewController;
}

@property (retain, nonatomic) SKUIViewControllerContainerCollectionViewCell *collectionViewCell;
@property (weak, nonatomic) id <SKUIScrollingTabBarControllerItemContextDelegate> delegate;
@property (nonatomic) unsigned long long lastSelectedPageIndex;
@property (nonatomic, readonly) UIScrollView *nestedPagingScrollView;
@property (nonatomic, readonly) double nestedPagingScrollViewContentWidth;
@property (nonatomic, readonly) UIViewController *viewController;
@property (nonatomic, readonly) _Bool viewControllerIsNavigationController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithViewController:(id)arg1;
- (void)applyNewContentInsetDescriptor:(CDStruct_17994511)arg1;
- (void)prepareViewControllerForDisplayWithSize:(struct CGSize)arg1;
- (void)notifyOfUpdatedAppearanceStatus:(CDStruct_19149c72)arg1;
- (id)viewControllerInNestedPagingScrollViewAtPageIndex:(unsigned long long)arg1;
- (void)prepareViewControllerForTearDown;
- (void)updateNestedPagingScrollViewContentOffset:(struct CGPoint)arg1;
- (void)updateForPossibleNestedPagingScrollViewChange;
- (void)_applyNewContentInset:(struct UIEdgeInsets)arg1 withOldContentInset:(struct UIEdgeInsets)arg2 toContentScrollView:(id)arg3;
- (void)observedNavigationStackDidChange:(id)arg1;
- (void)_notifyDelegateOfUpdatedContentWidthInObservedNestedPagingScrollView;
- (id)_nestedPagedScrollingConformingViewControllerForcingViewLoading:(_Bool)arg1;
- (void)_updateAppliedContentInsetsAdjustment;
- (id)_appearanceStatusObserver;
- (void)_prepareViewControllerForDisplayWithViewFrame:(struct CGRect)arg1 updateContentOffset:(_Bool)arg2 contentOffset:(struct CGPoint)arg3;
- (void)_prepareViewControllerForTearDown;

@end
