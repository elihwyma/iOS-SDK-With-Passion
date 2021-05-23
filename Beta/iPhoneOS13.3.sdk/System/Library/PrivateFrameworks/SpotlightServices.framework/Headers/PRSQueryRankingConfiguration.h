/*
 Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE, NSArray, NSOrderedSet;

@interface PRSQueryRankingConfiguration : NSObject

{
    _Bool _allowAnonymousDataCollection;
    NSOrderedSet *_requiredAttributes;
    NSArray *_rankingQueries;
    unsigned long long _strongRankingQueryCount;
    unsigned long long _dominantRankingQueryCount;
    unsigned long long _dominatedRankingQueryCount;
    unsigned long long _rankingBitCount;
    MISSING_TYPE *_fuzzyMatchMask;
    MISSING_TYPE *_fuzzyMatchCheck;
}

@property (retain) NSOrderedSet *requiredAttributes;
@property (retain) NSArray *rankingQueries;
@property unsigned long long strongRankingQueryCount;
@property unsigned long long dominantRankingQueryCount;
@property unsigned long long dominatedRankingQueryCount;
@property unsigned long long rankingBitCount;
@property _Bool allowAnonymousDataCollection;
@property MISSING_TYPE *fuzzyMatchMask;
@property MISSING_TYPE *fuzzyMatchCheck;

+ (void)updateMailVIP:(id)arg1 phoneFavorites:(id)arg2 meEmailAddresses:(id)arg3;

@end
