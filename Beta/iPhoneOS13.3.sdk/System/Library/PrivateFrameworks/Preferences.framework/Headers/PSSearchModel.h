/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Foundation/NSObject.h>

#import <Preferences/Swift-Protocol.h>

@class NSArray, NSMapTable, NSMutableArray, NSMutableSet, NSOperationQueue, NSString, PSSearchOperation, PSSearchResults;

@protocol OS_dispatch_queue, PSSearchModelDataSource;

@interface PSSearchModel : NSObject <Swift>

{
    NSMutableSet *_delegates;
    NSMapTable *_specifierDataSources;
    NSMutableArray *_rootEntries;
    NSMutableSet *_entriesBeingIndexed;
    NSMutableSet *_indexingEntriesWithLoadedDataSources;
    NSMutableSet *_removedEntriesStillIndexing;
    NSMutableArray *_deferredSpecifierUpdates;
    PSSearchResults *_currentResults;
    NSString *_queryForCurrentResults;
    NSMutableSet *_entriesPendingSearch;
    NSMutableSet *_removedEntriesStillSearching;
    NSObject<OS_dispatch_queue> *_searchStateAccessQueue;
    _Bool _hasLoadedRootEntries;
    _Bool _hasStartedIndexing;
    NSOperationQueue *_indexOperationQueue;
    NSOperationQueue *_searchOperationQueue;
    _Bool _indexing;
    _Bool _waitUntilFinished;
    _Bool _showSectionInDetailText;
    id <PSSearchModelDataSource> _dataSource;
    NSString *_currentQuery;
    PSSearchOperation *_activeSearchOperation;
}

@property (copy) NSString *currentQuery;
@property (retain) PSSearchOperation *activeSearchOperation;
@property (nonatomic) _Bool showSectionInDetailText;
@property (nonatomic, readonly) NSArray *rootEntries;
@property (weak, nonatomic) id <PSSearchModelDataSource> dataSource;
@property (readonly) PSSearchResults *currentResults;
@property (nonatomic, readonly, getter=isLoadingResults) _Bool loadingResults;
@property (nonatomic, readonly, getter=isIndexing) _Bool indexing;
@property (nonatomic, readonly) _Bool hasCompletedIndexing;
@property (nonatomic) _Bool waitUntilFinished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long observerType;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)addDelegate:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (id)recursiveDescription;
- (void)preheat;
- (void)dataSource:(id)arg1 performUpdates:(id)arg2;
- (void)invalidateSpecifiersForDataSource:(id)arg1;
- (id)_rootSpecifiers;
- (void)_beginIndexingIfNecessary;
- (void)_addSearchEntries:(id)arg1 parent:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)removeRootSpecifier:(id)arg1;
- (void)addRootSpecifier:(id)arg1;
- (void)_removeSearchEntries:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_beginSearchingEntriesForCurrentQuery:(id)arg1 newSearch:(_Bool)arg2;
- (void)_updatedEntry:(id)arg1 withChildren:(id)arg2;
- (void)_removeSearchEntries:(id)arg1 usingBlock:(CDUnknownBlockType)arg2 forReload:(_Bool)arg3;
- (void)_enumerateDelegatesUsingBlock:(CDUnknownBlockType)arg1;
- (void)_loadChildrenForEntry:(id)arg1;
- (void)_reloadSearchEntries:(id)arg1;
- (void)_performSpecifierUpdates:(id)arg1 forSearchEntries:(id)arg2;
- (void)_performDeferredUpdatesForEntry:(id)arg1;
- (void)_addSpecifierDataSource:(id)arg1 forSearchEntry:(id)arg2;
- (void)_finishedIndexingEntry:(id)arg1;
- (void)_cancelAllSearchOperations;
- (void)_updateWithNewSearchResults:(id)arg1 forQuery:(id)arg2 newSearch:(_Bool)arg3;
- (CDUnknownBlockType)_defaultSearchResultsSectionComparator;
- (id)_searchEntriesForSpecifierDataSource:(id)arg1;
- (void)searchIndexOperation:(id)arg1 didFindSpecifierDataSource:(id)arg2;
- (void)searchIndexOperationDidFinish:(id)arg1 searchEntries:(id)arg2;
- (void)searchIndexOperationDidCancel:(id)arg1;
- (void)searchOperationDidBegin:(id)arg1;
- (id)searchOperation:(id)arg1 filteredEntriesForEntries:(id)arg2;
- (void)searchOperation:(id)arg1 configureSearchResults:(id)arg2;
- (void)searchOperationDidFinish:(id)arg1 withResults:(id)arg2;
- (void)searchOperationDidCancel:(id)arg1;
- (void)reloadRootSpecifier:(id)arg1;
- (void)searchForQuery:(id)arg1;

@end
