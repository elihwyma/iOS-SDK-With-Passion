/*
 Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

#import <Foundation/NSObject.h>

@interface ICSearchRankingQueryUtils : NSObject

+ (id)spotlightPrefixRankingQueryDefinition;
+ (id)spotlightSubstringRankingQueryDefinition;
+ (id)spotlightMixedRankingQueryDefinition;
+ (id)rankingQueryForDescriptor:(id)arg1 searchString:(id)arg2;
+ (id)spotlightPrefixRankingQueryBitDictionary;
+ (id)spotlightSubstringRankingQueryBitDictionary;
+ (id)spotlightMixedRankingQueryBitDictionary;
+ (long long)bitOfRankingQueryDescriptor:(id)arg1 inRankingQueryBitDictionary:(id)arg2;
+ (id)rankingQueriesForSearchString:(id)arg1 withRankingQueryDefinition:(id)arg2;

@end
