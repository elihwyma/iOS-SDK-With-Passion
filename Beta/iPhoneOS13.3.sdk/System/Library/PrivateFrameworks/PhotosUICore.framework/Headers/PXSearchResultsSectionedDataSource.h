/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSCalendar, NSDateComponents, NSDateIntervalFormatter, NSDictionary, NSString, PHFetchResult, PLPhotoLibrary, PLSearchIndexDateFormatter, PLSearchProcessor, PSIDatabase, PSIQuery;

@protocol OS_dispatch_queue, PXSearchResultsSectionedDataSourceChangeObserver;

@interface PXSearchResultsSectionedDataSource : NSObject

{
    _Bool _resultsReady;
    _Bool _ignorePastResults;
    _Atomic _Bool _didMerge;
    _Bool _wordEmbeddingsRequested;
    id <PXSearchResultsSectionedDataSourceChangeObserver> _changeObserver;
    CDUnknownBlockType _topAssetFilter;
    NSArray *_results;
    NSArray *_uncommittedResults;
    unsigned long long _sectionFetchIndex;
    unsigned long long _maxGroupedResultsCount;
    unsigned long long _queryTag;
    unsigned long long _uncommittedMaxGroupedResultsCount;
    unsigned long long _unprocessedSearchResultsCount;
    PLPhotoLibrary *_photoLibrary;
    PLSearchIndexDateFormatter *_dateFormatter;
    NSDateIntervalFormatter *_dateIntervalFormatter;
    PLSearchProcessor *_searchProcessor;
    PSIDatabase *_searchIndex;
    PSIQuery *_query;
    NSObject<OS_dispatch_queue> *_queue;
    PHFetchResult *_homePersons;
    NSArray *_suggestions;
    NSArray *_uncommittedSuggestions;
    NSDictionary *_sceneAncestryInformation;
    NSCalendar *_calendar;
    NSDateComponents *_dateRangeFormattingComponents;
}

@property (nonatomic) _Bool ignorePastResults;
@property (retain, nonatomic) NSArray *results;
@property (retain, nonatomic) NSArray *uncommittedResults;
@property (nonatomic) unsigned long long sectionFetchIndex;
@property (nonatomic) unsigned long long maxGroupedResultsCount;
@property (nonatomic) unsigned long long queryTag;
@property (nonatomic) unsigned long long uncommittedMaxGroupedResultsCount;
@property (nonatomic) unsigned long long unprocessedSearchResultsCount;
@property (retain, nonatomic) PLPhotoLibrary *photoLibrary;
@property (retain, nonatomic) PLSearchIndexDateFormatter *dateFormatter;
@property (retain, nonatomic) NSDateIntervalFormatter *dateIntervalFormatter;
@property (retain, nonatomic) PLSearchProcessor *searchProcessor;
@property (retain, nonatomic) PSIDatabase *searchIndex;
@property (retain, nonatomic) PSIQuery *query;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) _Atomic _Bool didMerge;
@property (retain, nonatomic) PHFetchResult *homePersons;
@property (retain, nonatomic) NSArray *suggestions;
@property (retain, nonatomic) NSArray *uncommittedSuggestions;
@property (retain) NSDictionary *sceneAncestryInformation;
@property (retain, nonatomic) NSCalendar *calendar;
@property (retain, nonatomic) NSDateComponents *dateRangeFormattingComponents;
@property (nonatomic) _Bool wordEmbeddingsRequested;
@property (weak, nonatomic) id <PXSearchResultsSectionedDataSourceChangeObserver> changeObserver;
@property (nonatomic) _Bool resultsReady;
@property (readonly) NSDictionary *debugDictionary;
@property (copy, nonatomic) CDUnknownBlockType topAssetFilter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)topAssetsSectionForSearchResultsValue:(id)arg1;
+ (id)postQuerySearchResultsLog;

- (void)cancel;
- (long long)numberOfSections;
- (id)titleForHeaderInSection:(long long)arg1;
- (id)initForUnitTests;
- (_Bool)hasPendingChanges;
- (void)didChangeThumbnailAssetsForSearchResult:(id)arg1;
- (void)didChangeThumbnailAssetsForSearchResult:(id)arg1 atIndexes:(id)arg2;
- (_Bool)searchIsFinished:(id)arg1;
- (id)stringWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)initWithSearchIndex:(id)arg1 photoLibrary:(id)arg2;
- (_Bool)isSectionExpandable:(long long)arg1;
- (_Bool)isSectionExpanded:(long long)arg1;
- (void)expandSection:(long long)arg1;
- (void)collapseSection:(long long)arg1;
- (long long)numberOfVisibleSearchResultsInSection:(long long)arg1;
- (long long)numberOfSearchResultsInSection:(long long)arg1;
- (id)searchResultAtIndexPath:(id)arg1;
- (id)allSearchResultsForSection:(long long)arg1;
- (_Bool)isTopAssetsSection:(long long)arg1;
- (void)setSearchString:(id)arg1 representedObjects:(id)arg2 maxSuggestionCount:(unsigned long long)arg3 priorityAssetUUID:(id)arg4;
- (_Bool)_shouldCancel:(unsigned long long)arg1;
- (void)_inqBackgroundProcessAssetResults:(id)arg1 collectionResults:(id)arg2 topAssetsResult:(id)arg3 topCollectionResults:(id)arg4 withTag:(unsigned long long)arg5 searchString:(id)arg6 representedObjects:(id)arg7 maxSuggestionCount:(unsigned long long)arg8 priorityAssetUUID:(id)arg9;
- (id)_fetchObjectsWithEntityName:(id)arg1 uuids:(id)arg2;
- (void)_asyncFetchAssetsWithQueryTag:(unsigned long long)arg1;
- (void)mergePendingChanges;
- (void)_inqCancel;
- (id)wordEmbeddingSubstitutions;
- (id)selectedWordEmbeddingTextAtIndex:(unsigned long long)arg1;
- (id)_wordEmbeddingSubstitutionsWantsSubstitutedString:(_Bool)arg1;
- (id)tapToRadarAttachments;
- (void)_suggestionsDidFinish:(id)arg1;
- (void)_updateResultsWithMergeTargetPerson:(id)arg1 sourcePerson:(id)arg2 tombstonedCandidatesLocalIdentifiers:(id)arg3;

@end
