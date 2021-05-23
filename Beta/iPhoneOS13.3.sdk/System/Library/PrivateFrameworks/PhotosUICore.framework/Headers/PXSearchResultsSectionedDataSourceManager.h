/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, NSTimer, PHCachingImageManager, PLSearchMetadataStore, PSIDatabase, PXSearchActiveSearch, PXSearchResultsSectionedDataSource;

@protocol OS_dispatch_semaphore, PXSearchResultsSectionedDataSourceChangeObserver;

@interface PXSearchResultsSectionedDataSourceManager : NSObject

{
    _Bool _isIndexing;
    PXSearchActiveSearch *_activeSearch;
    PHCachingImageManager *_cachingImageManager;
    PXSearchResultsSectionedDataSource *_searchResultsDataSource;
    id <PXSearchResultsSectionedDataSourceChangeObserver> _delegate;
    NSObject<OS_dispatch_semaphore> *_searchIndexReadySemaphore;
    PLSearchMetadataStore *_searchMetadataStore;
    PSIDatabase *_searchIndex;
    NSTimer *_searchIndexStatusTimer;
}

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *searchIndexReadySemaphore;
@property (retain, nonatomic) PHCachingImageManager *cachingImageManager;
@property (retain, nonatomic) PLSearchMetadataStore *searchMetadataStore;
@property (retain, nonatomic) PSIDatabase *searchIndex;
@property (retain, nonatomic) NSTimer *searchIndexStatusTimer;
@property (retain, nonatomic) PXSearchResultsSectionedDataSource *searchResultsDataSource;
@property (nonatomic) _Bool isIndexing;
@property (retain, nonatomic) PXSearchActiveSearch *activeSearch;
@property (nonatomic, readonly) _Bool resultsReady;
@property (readonly) NSDictionary *debugDictionary;
@property (weak, nonatomic) id <PXSearchResultsSectionedDataSourceChangeObserver> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)mergePendingChanges;
- (void)searchResultsDataSourceHasPendingChanges:(id)arg1 shouldMergePendingChanges:(_Bool)arg2;
- (void)searchResultsDataSource:(id)arg1 didFetchAssetsForSearchResult:(id)arg2 indexPath:(id)arg3;
- (void)searchResultsDataSource:(id)arg1 didChangeThumbnailAssetsForSearchResult:(id)arg2 topAssetsSectionExists:(_Bool)arg3;
- (void)searchResultsDataSource:(id)arg1 didChangeThumbnailAssetsForSearchResult:(id)arg2 atIndexes:(id)arg3;
- (id)initWithSearchSectionedDataSource:(id)arg1;
- (void)prepareDataSourceWithCompletion:(CDUnknownBlockType)arg1;
- (void)verifySearchDataSourceDidLoad;
- (_Bool)queryHasChanged:(id)arg1 maxSuggestionCount:(long long)arg2;
- (void)startMonitoringSearchIndexStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)stopMonitoringSearchIndexStatus;

@end
