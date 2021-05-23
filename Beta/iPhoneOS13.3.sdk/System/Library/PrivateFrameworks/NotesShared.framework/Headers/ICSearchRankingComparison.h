/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface ICSearchRankingComparison : NSObject

{
    NSMutableArray *_rankingValues;
}

@property (retain, nonatomic) NSMutableArray *rankingValues;
@property (nonatomic) unsigned long long preSubBitFieldsRankingResult;
@property (nonatomic) unsigned long long preSubRecencyRankingResult;
@property (nonatomic) unsigned long long preSubBucketRankingResult;

- (id)init;
- (id)description;
- (_Bool)applyOffsetWithSelectedPosition:(unsigned long long)arg1;
- (void)logStrength;
- (_Bool)allRanksHigherThan:(unsigned long long)arg1;
- (void)logComparisonForSelectedPosition:(unsigned long long)arg1 totalResultCountInSection:(unsigned long long)arg2;

@end
