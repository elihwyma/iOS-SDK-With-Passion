/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXObservable.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, NSTimer, PXCuratedLibraryFooterViewModel, PXCuratedLibraryItemCountsController, PXCuratedLibraryLayout, PXCuratedLibraryViewModel, PXGView, PXPhotosGlobalFooterView, PXUpdater, UIView;

@protocol PXCuratedLibraryFooterControllerDelegate;

@interface PXCuratedLibraryFooterController : PXObservable <Swift>

{
    double _lastUserScrollTime;
    _Bool _footerDidAutoScroll;
    NSTimer *_footerAutoScrollMinimumIdleTimer;
    PXCuratedLibraryFooterViewModel *_footerViewModel;
    long long _presentedZoomLevel;
    PXPhotosGlobalFooterView *_reusableFooterView;
    _Bool _isUpdatingFooter;
    _Bool _wantsFooterMask;
    _Bool _hasAppeared;
    _Bool _wantsFooter;
    _Bool _isFooterVisible;
    _Bool _hasAppearedOnce;
    _Bool _footerNeedsReveal;
    id <PXCuratedLibraryFooterControllerDelegate> _delegate;
    double _footerMaskVerticalOffset;
    PXGView *_gridView;
    PXCuratedLibraryLayout *_layout;
    PXCuratedLibraryViewModel *_viewModel;
    PXCuratedLibraryItemCountsController *_itemCountsController;
    PXUpdater *_updater;
    PXCuratedLibraryFooterViewModel *_footerViewModelIfLoaded;
    PXPhotosGlobalFooterView *_footerView;
    UIView *_footerMaskView;
}

@property (nonatomic, readonly) PXGView *gridView;
@property (nonatomic, readonly) PXCuratedLibraryLayout *layout;
@property (nonatomic, readonly) PXCuratedLibraryViewModel *viewModel;
@property (nonatomic, readonly) PXCuratedLibraryItemCountsController *itemCountsController;
@property (nonatomic, readonly) PXUpdater *updater;
@property (nonatomic, readonly) _Bool isGridViewVisible;
@property (nonatomic, readonly) _Bool isFooterOnlyPartiallyVisible;
@property (nonatomic, readonly) _Bool isPullingFooter;
@property (nonatomic) _Bool wantsFooter;
@property (nonatomic) _Bool isFooterVisible;
@property (nonatomic) _Bool hasAppearedOnce;
@property (nonatomic) _Bool footerNeedsReveal;
@property (retain, nonatomic) PXCuratedLibraryFooterViewModel *footerViewModelIfLoaded;
@property (retain, nonatomic) PXPhotosGlobalFooterView *footerView;
@property (retain, nonatomic) UIView *footerMaskView;
@property (weak, nonatomic) id <PXCuratedLibraryFooterControllerDelegate> delegate;
@property (nonatomic, readonly) _Bool wantsFooterMask;
@property (nonatomic, readonly) double footerMaskVerticalOffset;
@property (nonatomic, readonly) _Bool hasAppeared;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (long long)_modeForZoomLevel:(long long)arg1;

- (id)init;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)viewDidAppear;
- (void)_setNeedsUpdate;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)didPerformChanges;
- (void)scrollViewControllerWillBeginScrolling:(id)arg1;
- (void)scrollViewControllerDidScroll:(id)arg1;
- (void)scrollViewControllerContentBoundsDidChange:(id)arg1;
- (void)_updateFooter;
- (id)footerViewModel;
- (void)photosGlobalFooterViewDidChangeHeight:(id)arg1;
- (void)photosGlobalFooterView:(id)arg1 presentViewController:(id)arg2;
- (void)_invalidateFooter;
- (struct NSObject *)presentingViewControllerForFooterViewModel:(id)arg1;
- (void)setWantsFooterMask:(_Bool)arg1;
- (void)setFooterMaskVerticalOffset:(double)arg1;
- (id)initWithGridView:(id)arg1 layout:(id)arg2 viewModel:(id)arg3 itemsCountsController:(id)arg4;
- (void)_viewDidStartScrolling;
- (double)footerVisibleAmountIncludingSafeAreaInsets:(_Bool)arg1;
- (_Bool)_shouldShowFooterForGridViewState;
- (_Bool)_shouldShowFooterForPresentedZoomLevel;
- (_Bool)_shouldRevealPhotosFooterView;
- (void)_conditionallyRevealPhotosFooterViewWithLastUserScrollTime:(double)arg1;
- (void)_conditionallyRevealPhotosFooterView;
- (void)_footerHasImportantInformationDidChange;
- (void)_invalidateWantsFooter;
- (void)_updateWantsFooter;
- (void)_invalidateFooterMode;
- (void)_updateFooterMode;
- (void)_resetFooterViewModel;
- (void)_invalidateIsFooterVisible;
- (void)_updateIsFooterVisible;
- (void)_invalidateFooterMaskViewFrame;
- (void)_updateFooterMaskViewFrame;

@end
