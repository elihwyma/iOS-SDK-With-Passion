/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UICollectionViewController.h>

@class GKColorPalette, GKLoadableContentStateMachine, GKPlaceholderView, GKSearchBar, GKSwipeToEditStateMachine, NSMapTable, NSObject, NSString, NSUUID, UIActivityIndicatorView, UICollectionViewLayout, UINavigationController;

@protocol OS_dispatch_queue, UICollectionViewDataSource;

@interface GKCollectionViewController : UICollectionViewController

{
    _Bool _skipLoadAfterViewDidLoad;
    _Bool _shouldSlideInContents;
    _Bool _showSupplementaryViewsWhileLoading;
    _Bool _readyToDisplayData;
    _Bool _active;
    _Bool _hasViewFactories;
    _Bool _didSlideIn;
    GKColorPalette *_colorPalette;
    id <UICollectionViewDataSource> _dataSource;
    GKPlaceholderView *_placeholderView;
    UINavigationController *_placeholderNavigationController;
    GKSearchBar *_activeSearchBar;
    NSString *_currentSearchText;
    GKLoadableContentStateMachine *_loadingMachine;
    UICollectionViewLayout *_defaultLayout;
    UIActivityIndicatorView *_loadingIndicatorView;
    long long _gkFocusBubbleType;
    long long _previousOrientation;
    long long _appearCount;
    NSMapTable *_reusableViewsIHaveSeen;
    NSObject<OS_dispatch_queue> *_batchUpdateQueue;
    long long _batchUpdateCount;
    NSUUID *_currentUpdateID;
    GKSwipeToEditStateMachine *_swipeStateMachine;
}

@property (nonatomic) _Bool skipLoadAfterViewDidLoad;
@property (retain, nonatomic) GKLoadableContentStateMachine *loadingMachine;
@property (retain, nonatomic) UICollectionViewLayout *defaultLayout;
@property (retain, nonatomic) UIActivityIndicatorView *loadingIndicatorView;
@property (nonatomic) long long gkFocusBubbleType;
@property (nonatomic) long long previousOrientation;
@property _Bool active;
@property _Bool hasViewFactories;
@property _Bool didSlideIn;
@property long long appearCount;
@property (retain, nonatomic) NSMapTable *reusableViewsIHaveSeen;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *batchUpdateQueue;
@property long long batchUpdateCount;
@property (retain) NSUUID *currentUpdateID;
@property (retain, nonatomic) GKSwipeToEditStateMachine *swipeStateMachine;
@property (retain, nonatomic) id <UICollectionViewDataSource> dataSource;
@property (retain, nonatomic) GKColorPalette *colorPalette;
@property (nonatomic) _Bool shouldSlideInContents;
@property (nonatomic) _Bool showSupplementaryViewsWhileLoading;
@property (nonatomic, readonly) NSString *loadingState;
@property (nonatomic, readonly) _Bool readyToDisplayData;
@property (retain, nonatomic) GKPlaceholderView *placeholderView;
@property (retain, nonatomic) UINavigationController *placeholderNavigationController;
@property (retain, nonatomic) GKSearchBar *activeSearchBar;
@property (retain, nonatomic) NSString *currentSearchText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)_shouldForwardViewWillTransitionToSize;
+ (id)_initializeSafeCategoryFromValidationManager;

- (void)dealloc;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)collectionView;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewLayoutMarginsDidChange;
- (void)setNeedsReload;
- (void)invalidateSearch;
- (void)updateMetrics;
- (_Bool)hasLoaded;
- (id)defaultColorPalette;
- (void)stateWillChange;
- (void)stateDidChange;
- (void)didEnterLoadingState;
- (void)didExitLoadingState;
- (void)didEnterNoContentState;
- (void)didEnterErrorState;
- (void)segmentedSectionDataSource:(id)arg1 inSection:(unsigned long long)arg2 didSelectDataSourceWithIndex:(long long)arg3;
- (void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3;
- (void)dataSource:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2;
- (void)dataSource:(id)arg1 didRemoveItemsAtIndexPaths:(id)arg2;
- (void)dataSource:(id)arg1 didRefreshItemsAtIndexPaths:(id)arg2;
- (void)dataSource:(id)arg1 didMoveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)dataSource:(id)arg1 didInsertSections:(id)arg2;
- (void)dataSource:(id)arg1 didRemoveSections:(id)arg2;
- (void)dataSource:(id)arg1 didRefreshSections:(id)arg2;
- (void)dataSource:(id)arg1 didMoveSection:(long long)arg2 toSection:(long long)arg3;
- (void)dataSourceDidReloadData:(id)arg1;
- (void)dataSource:(id)arg1 performBatchUpdate:(CDUnknownBlockType)arg2 complete:(CDUnknownBlockType)arg3;
- (id)_gkRecursiveDescription;
- (void)swipeToDeleteCell:(id)arg1;
- (void)willDismissActionSheetFromCell:(id)arg1;
- (void)configureDataSource;
- (id)gkDataSource;
- (void)didEnterLoadedState;
- (void)didExitLoadedState;
- (void)_gkSetContentsNeedUpdateWithHandler:(CDUnknownBlockType)arg1;
- (_Bool)_gkShouldRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (void)_gkRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (void)viewDidDisappearAnimated:(_Bool)arg1 bubbleFlow:(_Bool)arg2;
- (void)didEnterRefreshingState;
- (void)didExitRefreshingState;
- (void)showCollectionView;
- (void)configureViewFactories;
- (void)loadDataWithCompletionHandlerAndError:(CDUnknownBlockType)arg1;
- (void)_systemContentSizeSettingDidChange:(id)arg1;
- (void)updateLayoutGuideOffsets;
- (void)clearSelectionHighlight;
- (void)startLoadingIndicator;
- (void)stopLoadingIndicatorWithoutAnimation;
- (void)hidePlaceholderAnimated:(_Bool)arg1;
- (void)updateDynamicColumnCountsForViewSize:(struct CGSize)arg1;
- (void)clearButtonPressed:(id)arg1;
- (id)currentSearchTerms;
- (void)_finishUpdates:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_applyUpdates:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_loadDataWithCompletionHandlerAndError:(CDUnknownBlockType)arg1;
- (id)footerViewAboveShowMoreViewAtIndexPath:(id)arg1;
- (double)showMoreTextMarginAtIndexPath:(id)arg1;
- (void)stopLoadingIndicator;
- (void)showPlaceholderWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 animated:(_Bool)arg4 block:(CDUnknownBlockType)arg5;
- (void)slideInContents;
- (void)_reallyStartLoadingIndicator;
- (void)setIsReadyToDisplayData:(_Bool)arg1;
- (void)didBecomeReadyToDisplayData;
- (void)didDisplayData;
- (void)addPlaceholderViewToView:(id)arg1;
- (void)dataSource:(id)arg1 didUpdatePlaceholderVisibility:(_Bool)arg2;
- (void)dataSourceDidMoveSectionsWithItems:(id)arg1;
- (void)updateSelectionHighlight;
- (id)nearestSelectableIndexPath:(id)arg1;
- (void)didTouchShowMore:(id)arg1;
- (void)applyShowMoreLayoutAttributesForShowMoreView:(id)arg1 atIndexPath:(id)arg2;
- (void)stateDidChangeFromNoContentStateToLoadingState;
- (void)stateDidChangeFromErrorStateToLoadingState;
- (void)stateDidChangeFromLoadedStateToLoadingState;
- (void)stateDidChangeFromNilToLoadingState;
- (void)didExitNoContentState;
- (void)didExitErrorState;
- (void)completeWhenReadyToDisplayData:(CDUnknownBlockType)arg1;
- (void)shutActionPaneAnimated:(_Bool)arg1;

@end
