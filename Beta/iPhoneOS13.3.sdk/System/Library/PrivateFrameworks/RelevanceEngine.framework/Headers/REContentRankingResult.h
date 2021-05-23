/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@interface REContentRankingResult : NSObject

{
    _Bool _valid;
    int _unknownCount;
    double _positivePolarity;
    double _negativePolarity;
    double _unbiasedPositivePolarity;
    double _unbiasedNegativePolarity;
}

@property (nonatomic) _Bool valid;
@property (nonatomic) double positivePolarity;
@property (nonatomic) double negativePolarity;
@property (nonatomic) int unknownCount;
@property (nonatomic) double unbiasedPositivePolarity;
@property (nonatomic) double unbiasedNegativePolarity;

@end
