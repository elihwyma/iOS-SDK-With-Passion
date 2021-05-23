/*
 Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

#import <Foundation/NSObject.h>

@interface PRSRankingSpanCalculator : NSObject

{
    _Bool _pathExists;
    float _unordered;
    float _ordered;
    float _firstTermPosition;
    float _normCount;
    float _pairDist;
}

@property (nonatomic) float unordered;
@property (nonatomic) float ordered;
@property (nonatomic) float firstTermPosition;
@property (nonatomic) float normCount;
@property (nonatomic) float pairDist;
@property (nonatomic) _Bool pathExists;

+ (_Bool)doesOrderedSpanExistWithStartingIndex:(unsigned long long)arg1 nextArray:(id)arg2 arrayOfIndexArrays:(id)arg3 level:(unsigned long long)arg4 currentOrderedSpan:(long long *)arg5;
+ (void)minimumAnyOrderSpanWithStartingIndex:(long long)arg1 nextArray:(id)arg2 arrayOfIndexArrays:(id)arg3 level:(unsigned long long)arg4 currentAnyOrderSpan:(long long)arg5 minimumSpan:(long long *)arg6 minimumDistancePair:(long long *)arg7 currentMinimumIndex:(long long)arg8 currentMaximumIndex:(long long)arg9;

- (id)description;
- (void)reset;
- (void)resetSpans;
- (void)updateWithTermPositions:(id)arg1 queryTermCount:(unsigned long long)arg2 tokenCount:(unsigned long long)arg3;

@end
