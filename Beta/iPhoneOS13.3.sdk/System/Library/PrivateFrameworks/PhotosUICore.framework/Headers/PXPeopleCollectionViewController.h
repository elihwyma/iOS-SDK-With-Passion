/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UICollectionViewController.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSArray, NSDictionary, NSIndexPath, NSMutableDictionary, NSString, PXPeopleDragAndDropCollectionViewLayout, PXPeopleMeViewController, PXPeopleProgressFooterView, PXPeopleProgressManager, PXPeopleSectionedDataSource, PXPeopleSwipeSelectionManager, UIBarButtonItem, UILongPressGestureRecognizer, UITapGestureRecognizer;

@protocol UIViewControllerAnimatedTransitioning;

@interface PXPeopleCollectionViewController : UICollectionViewController <Swift>

{
    _Bool _ignoreChangeUpdates;
    _Bool _needToCheckProgress;
    _Bool _shouldShowProgressFooter;
    _Bool _shouldShowMeHeader;
    _Bool _pendingChanges;
    _Bool _progressFooterAvailable;
    _Bool _ppt_shouldRunPPTCode;
    UILongPressGestureRecognizer *_dragRecognizer;
    unsigned long long _mode;
    UIBarButtonItem *_removeToolbarItem;
    UIBarButtonItem *_favoriteToolbarItem;
    UIBarButtonItem *_mergeToolbarItem;
    UIBarButtonItem *_selectItem;
    UIBarButtonItem *_debugMenuItem;
    PXPeopleProgressManager *_progressManager;
    PXPeopleProgressFooterView *_progressFooterView;
    PXPeopleMeViewController *_meViewController;
    UITapGestureRecognizer *_statusDebugRecognizer;
    NSDictionary *_contactByPersonLocalIdentifier;
    PXPeopleSwipeSelectionManager *_swipeSelectionManager;
    PXPeopleSectionedDataSource *_dataSource;
    NSIndexPath *_sourceDragIndexPath;
    NSIndexPath *_targetIndexPath;
    id <UIViewControllerAnimatedTransitioning> _transitionAnimator;
    NSArray *_transitionIndices;
    long long _ppt_numCellsLeft;
    NSMutableDictionary *_ppt_seenPeople;
    CDUnknownBlockType _ppt_cellsLoadedCompletionBlock;
    unsigned long long _ppt_sampledCountOfEmptyCells;
    unsigned long long _ppt_sampledCountOfFrames;
    struct CGPoint _lastDragPoint;
    struct CGRect _ppt_visibleCollectionViewRect;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSDictionary *ppt_scrollingInformation;
@property (nonatomic, readonly) unsigned long long ppt_countOfEmptyCells;
@property _Bool ignoreChangeUpdates;
@property (retain, nonatomic) UILongPressGestureRecognizer *dragRecognizer;
@property (nonatomic) unsigned long long mode;
@property (retain, nonatomic) UIBarButtonItem *removeToolbarItem;
@property (retain, nonatomic) UIBarButtonItem *favoriteToolbarItem;
@property (retain, nonatomic) UIBarButtonItem *mergeToolbarItem;
@property (retain, nonatomic) UIBarButtonItem *selectItem;
@property (retain, nonatomic) UIBarButtonItem *debugMenuItem;
@property (retain, nonatomic) PXPeopleProgressManager *progressManager;
@property _Bool needToCheckProgress;
@property (retain, nonatomic) PXPeopleProgressFooterView *progressFooterView;
@property (nonatomic) _Bool shouldShowProgressFooter;
@property (nonatomic) _Bool shouldShowMeHeader;
@property (retain, nonatomic) PXPeopleMeViewController *meViewController;
@property (nonatomic, readonly) PXPeopleDragAndDropCollectionViewLayout *dragAndDropCollectionViewLayout;
@property (retain, nonatomic) UITapGestureRecognizer *statusDebugRecognizer;
@property (retain, nonatomic) NSDictionary *contactByPersonLocalIdentifier;
@property (retain, nonatomic) PXPeopleSwipeSelectionManager *swipeSelectionManager;
@property (nonatomic, readonly) PXPeopleSectionedDataSource *dataSource;
@property (retain, nonatomic) NSIndexPath *sourceDragIndexPath;
@property (retain, nonatomic) NSIndexPath *targetIndexPath;
@property (nonatomic) struct CGPoint lastDragPoint;
@property (nonatomic) _Bool pendingChanges;
@property (nonatomic, getter=isProgressFooterAvailable) _Bool progressFooterAvailable;
@property (retain) id <UIViewControllerAnimatedTransitioning> transitionAnimator;
@property (copy, nonatomic) NSArray *transitionIndices;
@property (nonatomic) long long ppt_numCellsLeft;
@property (retain, nonatomic) NSMutableDictionary *ppt_seenPeople;
@property (nonatomic) _Bool ppt_shouldRunPPTCode;
@property (copy, nonatomic) CDUnknownBlockType ppt_cellsLoadedCompletionBlock;
@property (nonatomic) unsigned long long ppt_sampledCountOfEmptyCells;
@property (nonatomic) unsigned long long ppt_sampledCountOfFrames;
@property (nonatomic) struct CGRect ppt_visibleCollectionViewRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)commonInit;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 targetIndexPathForMoveFromItemAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (long long)_horizontalSizeClass;
- (long long)_verticalSizeClass;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (id)initWithDataSource:(id)arg1 progressManager:(id)arg2;
- (void)_progressChanged:(id)arg1;
- (id)swipeSelectionManager:(id)arg1 indexPathSetFromIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (id)swipeSelectionManager:(id)arg1 itemIndexPathAtLocation:(struct CGPoint)arg2;
- (id)initialSelectedIndexPathsForSwipeSelectionManager:(id)arg1;
- (void)swipeSelectionManager:(id)arg1 didSelectIndexPaths:(id)arg2;
- (void)peopleCollectionViewCellDidToggleFavoriteState:(id)arg1;
- (void)collectionView:(id)arg1 didBeginMergeWithDragIndexPath:(id)arg2 targetIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didCancelMergeWithDragIndexPath:(id)arg2 targetIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didMergeDragIndexPath:(id)arg2 targetIndexPath:(id)arg3;
- (void)peopleSectionedDataSourceMembersChangedNonIncrementally:(id)arg1;
- (void)peopleSectionedDataSource:(id)arg1 didApplyIncrementalChanges:(id)arg2;
- (id)selectionModeTitle;
- (void)_updateMeHeaderVisibilityIfNeeded:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateVisibleCellsForSelectionMode:(unsigned long long)arg1;
- (_Bool)_favoritesEmpty;
- (unsigned long long)_fixedColumnCountForIndexPath:(id)arg1;
- (id)_changeMemberAtIndex:(id)arg1 toPersonType:(long long)arg2;
- (double)_currentLineSpacing;
- (double)_currentItemSpacing;
- (struct CGSize)_itemSizeForItemAtIndexPath:(id)arg1;
- (double)_topInsetForSection:(unsigned long long)arg1;
- (double)_bottomInsetForSection:(unsigned long long)arg1;
- (void)showDetailsForMemberAtIndexPath:(id)arg1;
- (id)_detailViewControllerAtIndexPath:(id)arg1;
- (void)_presentAllPeopleViewControllerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_selectAction:(id)arg1;
- (id)_toolBarItemsForMode:(unsigned long long)arg1;
- (id)_rightBarItemsForMode:(unsigned long long)arg1;
- (long long)_changeTypeForIndexPaths:(id)arg1;
- (_Bool)_indexPathsContainMixedSections:(id)arg1;
- (id)_bestTargetIndexPathGivenMergeIndexPaths:(id)arg1;
- (void)_updateToolbarItemsForIndexPaths:(id)arg1;
- (void)updateNavTitleForIndexes:(id)arg1;
- (void)_changeSelectedIndexesToPersonType:(long long)arg1;
- (void)_showFavoritingBootstrapForPersonIfApplicable:(id)arg1;
- (void)_applyChangeDetailsArrayOnCollectionView:(id)arg1;
- (void)_handleToolbarRemoveAction:(id)arg1;
- (void)_handleToolbarFavoriteAction:(id)arg1;
- (void)_handleToolbarMergeAction:(id)arg1;
- (void)collectionViewDidLayout:(id)arg1;
- (void)_resetHomeIfNeeded;
- (void)_startProgressMonitoring;
- (void)_stopProgressMonitoring;
- (id)_originalTargetIndexPathFromDragIndexPath:(id)arg1 targetIndexPath:(id)arg2;
- (void)_animateCellAtIndexPathToDefaultState:(id)arg1;
- (void)_performMerge:(_Bool)arg1 targetPerson:(id)arg2 dragPerson:(id)arg3;
- (void)statusDebugRecognizerTapped:(id)arg1;
- (void)collectionViewDidEndDrag:(id)arg1;
- (void)collectionViewDidEndInteractiveMode:(id)arg1;
- (void)handleMoveFromIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)handleReorderingGesture:(id)arg1;
- (id)ppt_indexPathOfPersonWithMostAssets;
- (long long)ppt_numOfCellsLoadingImages;
- (id)ppt_bestPersonForBootstrap;
- (id)ppt_randomPerson;
- (_Bool)ppt_namePerson:(id)arg1;
- (void)ppt_changeIndexPaths:(id)arg1 toType:(long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)ppt_indexPathsForPeopleThatCanChangeToType:(long long)arg1;

@end
