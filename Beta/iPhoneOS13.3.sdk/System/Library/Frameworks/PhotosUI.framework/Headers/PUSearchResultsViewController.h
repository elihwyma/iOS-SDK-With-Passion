/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIViewController.h>

@class NSIndexPath, NSString, PUSearchResultsFooterView, PXSearchAnalyticsSession, PXSearchLoggingUtility, PXSearchResultsOneUpViewModel, PXSearchResultsSectionedDataSourceManager, PXSearchResultsViewModel, UISearchController, UITableView;

@interface PUSearchResultsViewController : UIViewController

{
    _Bool _hasLimitedScreenSize;
    _Bool _aggdSearchSucceeded;
    _Bool _shouldMergePendingChanges;
    UISearchController *_searchController;
    CDUnknownBlockType _siriSearchCompletionHandler;
    unsigned long long _nextAnalyticsSessionBeginType;
    PUSearchResultsFooterView *_tableFooterView;
    UITableView *_searchResultsTableView;
    NSIndexPath *_selectedTopAssetsResultIndexPath;
    PXSearchResultsViewModel *_viewModel;
    PXSearchLoggingUtility *_suggestionsAggdLogHelper;
    PXSearchResultsOneUpViewModel *_oneUpViewModel;
    PXSearchResultsSectionedDataSourceManager *_dataSourceManager;
    PXSearchAnalyticsSession *_analyticsSession;
    CDUnknownBlockType _ppt_searchTestCompletionHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) PUSearchResultsFooterView *tableFooterView;
@property (retain, nonatomic) UITableView *searchResultsTableView;
@property (retain, nonatomic) NSIndexPath *selectedTopAssetsResultIndexPath;
@property (nonatomic) _Bool hasLimitedScreenSize;
@property (retain, nonatomic) PXSearchResultsViewModel *viewModel;
@property (retain, nonatomic) PXSearchLoggingUtility *suggestionsAggdLogHelper;
@property (retain, nonatomic) PXSearchResultsOneUpViewModel *oneUpViewModel;
@property (retain, nonatomic) PXSearchResultsSectionedDataSourceManager *dataSourceManager;
@property (nonatomic) _Bool aggdSearchSucceeded;
@property (nonatomic) _Bool shouldMergePendingChanges;
@property (retain, nonatomic) PXSearchAnalyticsSession *analyticsSession;
@property (copy, nonatomic) CDUnknownBlockType ppt_searchTestCompletionHandler;
@property (weak, nonatomic) UISearchController *searchController;
@property (copy, nonatomic) CDUnknownBlockType siriSearchCompletionHandler;
@property (nonatomic) unsigned long long nextAnalyticsSessionBeginType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_gridViewControllerSpec;
+ (id)_newSearchResultsControllerWithSpec:(id)arg1 searchResults:(id)arg2 orAlbum:(struct NSObject *)arg3 title:(id)arg4 headerViewTitle:(id)arg5;
+ (id)preQuerySearchResultsLog;

- (id)init;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (struct CGSize)imageSize;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)tableView:(id)arg1 prefetchRowsAtIndexPaths:(id)arg2;
- (void)tableView:(id)arg1 cancelPrefetchingForRowsAtIndexPaths:(id)arg2;
- (id)dateRangeFormatter;
- (id)oneUpPresentationInitialAssetReference:(id)arg1;
- (id)oneUpPresentation:(id)arg1 regionOfInterestForAssetReference:(id)arg2;
- (void)oneUpPresentation:(id)arg1 scrollAssetReferenceToVisible:(id)arg2;
- (long long)oneUpPresentationActionContext:(id)arg1;
- (id)oneUpPresentationDataSourceManager:(id)arg1;
- (id)oneUpPresentationMediaProvider:(id)arg1;
- (long long)oneUpPresentationOrigin:(id)arg1;
- (id)_activeSearch;
- (void)searchResultsDataSourceHasPendingChanges:(id)arg1 shouldMergePendingChanges:(_Bool)arg2;
- (void)searchResultsDataSource:(id)arg1 didFetchAssetsForSearchResult:(id)arg2 indexPath:(id)arg3;
- (void)searchResultsDataSource:(id)arg1 didChangeThumbnailAssetsForSearchResult:(id)arg2 topAssetsSectionExists:(_Bool)arg3;
- (void)searchResultsDataSource:(id)arg1 didChangeThumbnailAssetsForSearchResult:(id)arg2 atIndexes:(id)arg3;
- (void)_preferredContentSizeChanged:(id)arg1;
- (unsigned long long)maximumNumberWordEmbeddingRows;
- (unsigned long long)maximumNumberOfThumbnailsPerRow;
- (struct CGSize)imageViewSize;
- (id)_configureWordEmbeddingsCellInTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)_configureWordEmbeddingsTitleCellInTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)_configureTopResultsCellInTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)_configureSuggestionsCellInTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)_configureSearchResultsCellInTableView:(id)arg1 atIndexPath:(id)arg2;
- (_Bool)_shouldApplyReadabilityInset;
- (id)_cellFromIdentifier:(id)arg1 inTableView:(id)arg2;
- (id)_regionOfInterestForAsset:(id)arg1;
- (void)_showOneUpWithAssetCollection:(id)arg1 withInitialAsset:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)_selectSearchResult:(id)arg1;
- (void)_pushDetailViewForPhotosWithUUIDs:(id)arg1 title:(id)arg2;
- (void)_presentAlertControllerFromButton:(id)arg1;
- (void)_pushGridForPhotosWithUUIDs:(id)arg1 title:(id)arg2 searchCategories:(unsigned long long)arg3 headerViewTitle:(id)arg4;
- (void)_pushGridForAlbumWithUUID:(id)arg1;
- (void)_pushViewForMemoryWithUUID:(id)arg1;
- (void)_pushViewForCollectionWithUUID:(id)arg1 collectionClass:(Class)arg2;
- (void)_pushPersonDetailViewForPerson:(id)arg1;
- (void)didSelectTapToRadarButton:(id)arg1;
- (void)updateTableFooterViewFrame;
- (void)prepareDataSource;
- (void)_setupResultsTableView;
- (void)_updateIndexingProgressViewVisibility:(_Bool)arg1;
- (void)wordEmbeddingTapped:(id)arg1;
- (void)didSelectSectionShowAllButton:(id)arg1;
- (void)_expandTableViewSection:(unsigned long long)arg1;
- (void)updateSearchResultsTable;
- (void)updateSearchResultsTableAtIndexPath:(id)arg1;
- (void)updateSearchResultsTableTopAssetsSectionWithResult:(id)arg1;
- (void)shouldShowSearchResultsController:(_Bool)arg1;
- (void)_registerNotificationsForAnalytics;
- (void)_unregisterNotificationsForAnalytics;
- (void)_notifyAnalyticsSearchChanged;
- (void)_notifyAnalyticsInteractedWithCurrentSearch;
- (void)_notifyAnalyticsOneUpTopAssets;
- (void)_notifyAnalyticsSearchResult:(id)arg1;
- (void)_endAnalyticsSession;
- (double)_availableContentWidth;
- (double)_marginWidthTotal;
- (double)_collectiveInterItemSpacing;
- (unsigned long long)maximumNumberSuggestionRows;
- (_Bool)_rowShouldAllowTapForIndexPath:(id)arg1;
- (void)_selectSuggestionAtIndexPath:(id)arg1;
- (id)_thumbnailAssetsForIndexPaths:(id)arg1;
- (double)topAssetThumbnailInterItemSpacing;
- (void)topResultCell:(id)arg1 didSelectAssetIndex:(unsigned long long)arg2 inRect:(struct CGRect)arg3 withNumberOfImages:(unsigned long long)arg4;
- (struct CGSize)topAssetThumbnailViewSize;
- (double)topAssetGridCustomWidthMargin;
- (void)ppt_expandAllSections;

@end
