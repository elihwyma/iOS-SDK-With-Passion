/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UICollectionViewController.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSMapTable, NSMutableSet, NSObject, NSString, NSTimer, PXContentUnavailablePlaceholderManager, PXContentUnavailableView, PXGadgetAnchorHelper, PXGadgetCollectionViewLayout, PXGadgetDataSource, PXGadgetDataSourceManager, PXGadgetNavigationHelper, PXGadgetSpecManager, PXUpdater, UIColor, UIContextMenuInteraction, UIView, UIViewController;

@protocol OS_os_log, PXGadget, PXGadgetDelegate, PXGadgetTransition;

@interface PXGadgetUIViewController : UICollectionViewController <Swift>

{
    NSMutableSet *_registeredCellReuseIdentifiers;
    NSMapTable *_cellsToGadgets;
    _Bool _isInteractionPreviewCancelled;
    _Bool _currentlyVisible;
    _Bool _loadingGadgets;
    _Bool _gadgetAnimating;
    _Bool _batchUpdating;
    _Bool _isContentVisible;
    _Bool _shouldPreventPlaceholder;
    struct PXGadgetUpdateFlags _updateFlags;
    PXGadgetDataSourceManager *_dataSourceManager;
    PXGadgetNavigationHelper *_navigationHelper;
    PXGadgetAnchorHelper *_anchorHelper;
    unsigned long long _numberOfInitialGadgetsToLoad;
    UIColor *_backgroundColor;
    UIContextMenuInteraction *_contextMenuInteraction;
    id <PXGadget> _interactionPreviewGadget;
    UIViewController *_interactionPreviewViewController;
    UIView *_interactionPreviewView;
    PXUpdater *_updater;
    PXGadgetDataSource *_dataSource;
    PXGadgetSpecManager *_specManager;
    id <PXGadget> _selectedGadget;
    NSTimer *_gadgetSeenTimer;
    NSMutableSet *_seenGadgetIdentifiers;
    NSMutableSet *_cellsWantingVisibleRectUpdates;
    PXContentUnavailableView *_placeholderView;
    PXContentUnavailablePlaceholderManager *_placeholderManager;
}

@property (retain, nonatomic) UIContextMenuInteraction *contextMenuInteraction;
@property (retain, nonatomic) id <PXGadget> interactionPreviewGadget;
@property (retain, nonatomic) UIViewController *interactionPreviewViewController;
@property (retain, nonatomic) UIView *interactionPreviewView;
@property (nonatomic) _Bool isInteractionPreviewCancelled;
@property (nonatomic, readonly) PXUpdater *updater;
@property (retain, nonatomic) PXGadgetDataSource *dataSource;
@property (nonatomic, getter=isCurrentlyVisible) _Bool currentlyVisible;
@property (nonatomic, getter=isLoadingGadgets) _Bool loadingGadgets;
@property (nonatomic, getter=isGadgetAnimating) _Bool gadgetAnimating;
@property (nonatomic, getter=isBatchUpdating) _Bool batchUpdating;
@property (retain, nonatomic) PXGadgetSpecManager *specManager;
@property (retain, nonatomic) id <PXGadget> selectedGadget;
@property (nonatomic) struct PXGadgetUpdateFlags updateFlags;
@property (retain, nonatomic) NSTimer *gadgetSeenTimer;
@property (retain, nonatomic) NSMutableSet *seenGadgetIdentifiers;
@property (nonatomic, setter=setContentVisible:) _Bool isContentVisible;
@property (nonatomic, readonly) NSObject<OS_os_log> *gadgetViewControllerLog;
@property (retain, nonatomic) NSMutableSet *cellsWantingVisibleRectUpdates;
@property (retain, nonatomic) PXContentUnavailableView *placeholderView;
@property (nonatomic, readonly) struct CGRect visibleBounds;
@property (retain, nonatomic) PXContentUnavailablePlaceholderManager *placeholderManager;
@property (nonatomic, readonly) _Bool shouldPreventPlaceholder;
@property (nonatomic, readonly) PXGadgetDataSourceManager *dataSourceManager;
@property (nonatomic, readonly) PXGadgetNavigationHelper *navigationHelper;
@property (nonatomic, readonly) PXGadgetAnchorHelper *anchorHelper;
@property (nonatomic) unsigned long long numberOfInitialGadgetsToLoad;
@property (copy, nonatomic) UIColor *backgroundColor;
@property (nonatomic, readonly) PXGadgetCollectionViewLayout *layout;
@property (nonatomic, readonly) _Bool isScrolling;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) struct UIEdgeInsets insetsForSectionHeaders;
@property (nonatomic, readonly) id <PXGadgetTransition> gadgetTransition;
@property (nonatomic, readonly) PXGadgetNavigationHelper *rootNavigationHelper;
@property (weak, nonatomic) id <PXGadgetDelegate> nextGadgetResponder;

+ (Class)gadgetSpecClass;

- (void)dealloc;
- (void)setLayout:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)collectionView:(id)arg1 performDropWithCoordinator:(id)arg2;
- (id)collectionView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 canHandleDropSesson:(id)arg2;
- (void)contextMenuInteractionDidEnd:(id)arg1;
- (void)contextMenuInteraction:(id)arg1 willCommitWithAnimator:(id)arg2;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)updateIfNeeded;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_updatePlaceholder;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)reloadContent;
- (struct NSObject *)gadgetViewControllerHostingGadget:(id)arg1;
- (void)gadget:(id)arg1 animateChanges:(CDUnknownBlockType)arg2;
- (void)gadget:(id)arg1 didChange:(unsigned long long)arg2;
- (_Bool)gadget:(id)arg1 transitionToViewController:(struct NSObject *)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)presentGadgetViewController:(struct NSObject *)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissGadgetViewController:(struct NSObject *)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)rootGadgetControllerWillAppear;
- (void)rootGadgetControllerDidDisappear;
- (void)configureSectionHeader:(id)arg1;
- (long long)scrollAnimationIdentifier;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (id)debugURLsForDiagnostics;
- (void)gadgetControllerFinishedUpdatingDataSourceWithChange:(id)arg1;
- (_Bool)pu_scrollToInitialPositionAnimated:(_Bool)arg1;
- (_Bool)px_canPerformZoomTransitionWithDetailViewController:(id)arg1;
- (id)px_endPointForTransition:(id)arg1;
- (_Bool)navigateToGadget:(id)arg1 animated:(_Bool)arg2;
- (id)gadgetDataSourceForNavigationHelper:(id)arg1;
- (_Bool)navigationHelperCanCurrentlyNavigate:(id)arg1;
- (void)navigationHelperDidNotFindValidGadget:(id)arg1;
- (void)contentUnavailablePlaceholderManagerDidChange:(id)arg1;
- (id)sortedVisibleIndexPathsForAnchorHelper:(id)arg1;
- (_Bool)anchorHelper:(id)arg1 indexPathIsFullyVisible:(id)arg2;
- (id)initWithLayout:(id)arg1 dataSourceManager:(id)arg2;
- (void)_initializeDataSource;
- (void)_initializeHelpers;
- (_Bool)isRootGadgetViewController;
- (id)gadgetAtLocation:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (void)_addContextMenuInteraction;
- (void)_removeContextMenuInteraction;
- (void)_updaterNeedsUpdate;
- (id)_gadgetAtIndexPath:(id)arg1;
- (id)_indexPathForGadget:(id)arg1;
- (void)_configureHeader:(id)arg1 withGadget:(id)arg2;
- (void)_handleGadgetsSeen;
- (void)_clearTimerToHandleGadgetsSeen;
- (void)_setTimerToHandleGadgetsSeen;
- (void)_notifyGadgetsThatGadgetControllerHasAppeared;
- (void)_notifyGadgetsThatGadgetControllerHasDisappeared;
- (void)_updateHeaderForGadget:(id)arg1 atIndexPath:(id)arg2;
- (void)_updateVisibleGadgetHeaders;
- (void)_notifyPresentedGadgetsOfVisibilityChange;
- (void)_scrollViewDidEndScrolling;
- (void)_updateGadgetVisibleRects;
- (void)_updateVisibleRectForGadget:(id)arg1 inCell:(id)arg2 collectionView:(id)arg3;
- (void)visibleBoundsDidChange;
- (_Bool)_isUsingDeprecatedViewLoadingForGadget:(id)arg1;
- (id)_gadgetForCollectionViewCell:(id)arg1;
- (void)_setGadget:(id)arg1 forCollectionViewCell:(id)arg2;
- (void)_dataSourceManagerDidChange;
- (void)_gadgetSpecDidChange;
- (void)_invalidatePlaceholder;

@end
