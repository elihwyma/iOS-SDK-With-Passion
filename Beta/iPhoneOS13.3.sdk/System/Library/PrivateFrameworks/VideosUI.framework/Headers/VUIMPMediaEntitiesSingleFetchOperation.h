/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUICore/VUIAsynchronousOperation.h>

@class MPMediaPredicate, NSArray, NSDictionary, NSError, NSMutableSet, VUIMPMediaLibrary, VUIMediaEntityFetchRequest, VUIMediaEntityFetchResponse, VUIMediaEntityKind, VUIMediaEntityType;

__attribute__((visibility("hidden")))
@interface VUIMPMediaEntitiesSingleFetchOperation : VUIAsynchronousOperation

{
    _Bool _processPredicateAfterFetch;
    _Bool _processRangeAfterFetch;
    VUIMediaEntityFetchRequest *_request;
    VUIMediaEntityFetchResponse *_response;
    NSError *_error;
    VUIMPMediaLibrary *_mediaLibrary;
    VUIMediaEntityKind *_mediaEntityKind;
    NSMutableSet *_prefetchProperties;
    MPMediaPredicate *_mediaQueryPredicate;
    NSArray *_mediaQuerySortOrderingProperties;
    NSDictionary *_mediaQuerySortOrderingDirectionMappings;
    NSArray *_postFetchSortDescriptors;
    VUIMediaEntityType *_currentFetchMediaEntityType;
}

@property (retain, nonatomic) VUIMediaEntityFetchRequest *request;
@property (copy, nonatomic) VUIMediaEntityFetchResponse *response;
@property (copy, nonatomic) NSError *error;
@property (retain, nonatomic) VUIMPMediaLibrary *mediaLibrary;
@property (retain, nonatomic) VUIMediaEntityKind *mediaEntityKind;
@property (retain, nonatomic) NSMutableSet *prefetchProperties;
@property (retain, nonatomic) MPMediaPredicate *mediaQueryPredicate;
@property (retain, nonatomic) NSArray *mediaQuerySortOrderingProperties;
@property (retain, nonatomic) NSDictionary *mediaQuerySortOrderingDirectionMappings;
@property (retain, nonatomic) NSArray *postFetchSortDescriptors;
@property (nonatomic) _Bool processPredicateAfterFetch;
@property (nonatomic) _Bool processRangeAfterFetch;
@property (retain, nonatomic) VUIMediaEntityType *currentFetchMediaEntityType;

+ (id)_sortIndexesWithMediaQuerySection:(id)arg1;

- (id)init;
- (id)_mediaQuery;
- (void)executionDidBegin;
- (id)initWithMediaLibrary:(id)arg1 request:(id)arg2;
- (id)_coalesceResponses:(id)arg1;
- (id)_mediaEntityKind;
- (void)_populatePrefetchProperties;
- (void)_processRange;
- (void)_processSortDescriptors;
- (void)_processPredicate;
- (id)_itemsFetchResponseWithMediaQuery:(id)arg1;
- (id)_collectionsFetchResponseWithMediaQuery:(id)arg1;
- (_Bool)_shouldSortUsingMediaQuery;
- (id)_mediaQueryPredicateForPredicate:(id)arg1;
- (id)_mediaQueryPredicateForCompoundPredicate:(id)arg1;
- (id)_mediaQueryPropertyPredicateForComparisonPredicate:(id)arg1;
- (id)_keyPathMediaQueryPropertyPredicateWithKeyPathExpression:(id)arg1 operatorType:(unsigned long long)arg2 constantExpression:(id)arg3;
- (id)_bitTestMediaQueryPropertyPredicateWithKeyPathBitTestExpression:(id)arg1 operatorType:(unsigned long long)arg2 constantExpression:(id)arg3;
- (id)_mediaEntityPropertyDescriptorForFilteringWithKeyPath:(id)arg1;
- (id)_baseMediaQuery;
- (void)_addEntityLimitToMediaQuery:(id)arg1;
- (void)_addPredicateToMediaQuery:(id)arg1;
- (void)_addSortingPropertiesToMediaQuery:(id)arg1;
- (void)_addPrefetchPropertiesToMediaQuery:(id)arg1;
- (_Bool)_isSortingBeingPerformedByMediaQuery;
- (id)_mediaEntities:(id)arg1 subarrayWithRange:(struct _NSRange)arg2;
- (id)_fetchResponseWithMediaEntities:(id)arg1 mediaQuerySections:(id)arg2;
- (id)_processFetchedMediaEntities:(id)arg1;

@end
