/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@interface PLQueryHandler : NSObject

+ (id)constructQueryFromData:(id)arg1;
+ (id)dataFromQuery:(id)arg1;
+ (id)infoFromQuery:(id)arg1;
+ (id)queryFromInfo:(id)arg1;
+ (id)_infoFromSingleQuery:(id)arg1;
+ (id)_getTargetDateWithUnit:(int)arg1 dateValue:(id)arg2;
+ (id)_getTargetDateForTheLastDays:(long long)arg1 weeks:(long long)arg2 months:(long long)arg3 years:(long long)arg4 seconds:(long long)arg5 targetDate:(id)arg6;
+ (id)_convertQueryKeyTypeToString:(int)arg1;
+ (id)_convertQueryValueForAssetType:(int)arg1;
+ (id)_getConvertedQueryKey:(id)arg1;
+ (_Bool)_isTextComparator:(int)arg1;
+ (int)_convertComparatorToNumericComparator:(int)arg1;
+ (id)_getConvertedKeys:(id)arg1;
+ (unsigned long long)_comparatorToOperatorType:(int)arg1;
+ (id)_expressionForStringValue:(id)arg1 inLibrary:(id)arg2;
+ (_Bool)_needToNegateQueryForComparator:(int)arg1;
+ (id)_predicateForEmptyQuery:(id)arg1 inLibrary:(id)arg2;
+ (id)_predicateFromSearchIndexForText:(id)arg1 comparator:(int)arg2 inLibrary:(id)arg3;
+ (id)_predicateForTextQuery:(id)arg1 inLibrary:(id)arg2;
+ (id)_predicateForRangeQuery:(id)arg1 inLibrary:(id)arg2 changeDetectionCriteria:(id)arg3;
+ (_Bool)_needEqualityForDoubleQuery:(int)arg1;
+ (id)_equalityPredicateForDoubleQuery:(id)arg1 withValue:(double)arg2 comparator:(int)arg3 inLibrary:(id)arg4;
+ (id)_predicateForDoubleQuery:(id)arg1 inLibrary:(id)arg2;
+ (id)_personNameQueryKeyPaths;
+ (id)_personMatchesPredicateForCriteria:(id)arg1;
+ (id)_invertedPersonMatchesPredicateForCriteria:(id)arg1;
+ (id)_predicateForPersonQuery:(id)arg1 inLibrary:(id)arg2 changeDetectionCriteria:(id)arg3;
+ (id)_predicateForIsReferencedQuery:(id)arg1 inLibrary:(id)arg2;
+ (id)_predicateForLoopingQuery:(id)arg1 inLibrary:(id)arg2;
+ (id)_predicateFromAlbumKind:(int)arg1 negate:(_Bool)arg2;
+ (id)_predicateForTaggedWithGPSQuery:(id)arg1 inLibrary:(id)arg2;
+ (id)_predicateForNotAbleToUploadQuery;
+ (_Bool)hasMatchingFetchingAlbumForSingleQuery:(id)arg1 outKind:(int *)arg2;
+ (id)_predicateForSingleQuery:(id)arg1 inLibrary:(id)arg2 changeDetectionCriteria:(id)arg3;
+ (id)_smartAlbumAssetTypeFilter;
+ (id)predicateForQuery:(id)arg1 inLibrary:(id)arg2 changeDetectionCriteria:(id)arg3;
+ (id)_predicateForQuery:(id)arg1 inLibrary:(id)arg2 changeDetectionCriteria:(id)arg3;
+ (_Bool)_containsKey:(int)arg1 inQuery:(id)arg2;
+ (_Bool)includeHiddenAssets:(id)arg1;
+ (_Bool)fixUserQueryDataInQuery:(id)arg1;
+ (_Bool)_findAndReplaceLatitudeLongitudeKeyInQuery:(id)arg1;

@end
