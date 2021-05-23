/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSEnumerator, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, TSKSearch;

@protocol TSKDocumentRootProvider, TSKFindReplaceDelegate, TSKSearchTargetProvider, TSKSearchable;

@interface TSKFindReplaceController : NSObject

{
    _Bool _onlySearchesAnnotations;
    NSEnumerator *_currentModelEnumerator;
    id <TSKSearchable> _currentSearchable;
    TSKSearch *_currentSearch;
    double _currentSearchStartTime;
    _Bool _commentsIncludedInAnnotationSearch;
    NSMutableSet *_annotationDisplayStringTypes;
    _Bool _countSearchHits;
    unsigned long long _searchResultsCount;
    id <TSKFindReplaceDelegate> _findReplaceDelegate;
    id <TSKSearchTargetProvider> _searchTargetProvider;
    id <TSKDocumentRootProvider> _documentRootProvider;
    NSString *_searchString;
    unsigned long long _searchOptions;
    CDUnknownBlockType _searchResultComparator;
    NSMutableArray *_layoutSearchResults;
    NSMutableDictionary *_layoutSearchCountForRootIndexMap;
    CDUnknownBlockType _progressBlock;
    struct _NSRange _currentRootSearchTargetRange;
}

@property (nonatomic) struct _NSRange currentRootSearchTargetRange;
@property (retain, nonatomic) NSMutableArray *layoutSearchResults;
@property (retain, nonatomic) NSMutableDictionary *layoutSearchCountForRootIndexMap;
@property (copy, nonatomic) CDUnknownBlockType progressBlock;
@property (retain, nonatomic) NSMutableSet *annotationDisplayStringTypes;
@property (nonatomic, readonly) id <TSKFindReplaceDelegate> findReplaceDelegate;
@property (nonatomic, readonly) id <TSKSearchTargetProvider> searchTargetProvider;
@property (nonatomic) id <TSKDocumentRootProvider> documentRootProvider;
@property (nonatomic, readonly) unsigned long long searchResultsCount;
@property (copy, nonatomic) NSString *searchString;
@property (nonatomic) unsigned long long searchOptions;
@property (nonatomic) _Bool commentsIncludedInAnnotationSearch;
@property (nonatomic) _Bool countSearchHits;
@property (copy, nonatomic) CDUnknownBlockType searchResultComparator;

+ (void)_assertSearchTargetImplementsProperMethods:(id)arg1;
+ (void)_recursiveSearchWithSearchTarget:(id)arg1 forString:(id)arg2 options:(unsigned long long)arg3 hitBlock:(CDUnknownBlockType)arg4;
+ (void)_recursiveSearchWithSearchTarget:(id)arg1 forAnnotationsWithHitBlock:(CDUnknownBlockType)arg2;
+ (_Bool)searchReference:(id)arg1 isBeforeSearchReference:(id)arg2 orEqual:(_Bool)arg3 inDirection:(unsigned long long)arg4 comparator:(CDUnknownBlockType)arg5;
+ (_Bool)searchReference:(id)arg1 isAfterSearchReference:(id)arg2 orEqual:(_Bool)arg3 inDirection:(unsigned long long)arg4 comparator:(CDUnknownBlockType)arg5;
+ (_Bool)p_searchReference:(id)arg1 comparedWithSearchReference:(id)arg2 orEqual:(_Bool)arg3 inDirection:(unsigned long long)arg4 before:(_Bool)arg5 comparator:(CDUnknownBlockType)arg6;

- (void)dealloc;
- (id)documentRoot;
- (void)p_stopCountingHits;
- (id)initWithDocumentRootProvider:(id)arg1 delegate:(id)arg2 targetProvider:(id)arg3 onlySearchesAnnotations:(_Bool)arg4;
- (void)p_startCountingHits;
- (void)invalidateSearchResults;
- (_Bool)p_searchCriteriaIsValid;
- (_Bool)p_shouldCountAnnotation:(id)arg1;
- (void)p_continueCountingHits;
- (void)sortLayoutSearchResultsArray:(id)arg1;
- (unsigned long long)_nextRootSearchTargetFromIndex:(unsigned long long)arg1 inDirection:(unsigned long long)arg2 wrapped:(_Bool *)arg3;
- (void)_buildLayoutSearchResultsForRootSearchTargetsInRange:(struct _NSRange)arg1 resultsArray:(id)arg2;
- (void)p_buildSearchResultsIfNecessary;
- (void)p_buildVisibleSearchResultsIfNecessary;
- (unsigned long long)_resultCountInRootObjectRange:(struct _NSRange)arg1;
- (void)_nextSearchTargetWithMatchInDirection:(unsigned long long)arg1;
- (id)_firstResultInDirection:(unsigned long long)arg1;
- (id)_lastResultInDirection:(unsigned long long)arg1;
- (id)initWithDocumentRootProvider:(id)arg1 delegate:(id)arg2;
- (id)initWithDocumentRootProvider:(id)arg1 delegate:(id)arg2 onlySearchesAnnotations:(_Bool)arg3;
- (void)setSearchProgressBlock:(CDUnknownBlockType)arg1;
- (id)searchReferencesToHighlightInVisibleRootObjectRange:(struct _NSRange)arg1;
- (id)firstVisibleResultInRect:(struct CGRect)arg1;
- (id)annotationSearchReferenceForAnnotation:(id)arg1;
- (unsigned long long)indexOfVisibleSearchReference:(id)arg1;
- (id)searchReferenceAfterReference:(id)arg1 inDirection:(unsigned long long)arg2;

@end
