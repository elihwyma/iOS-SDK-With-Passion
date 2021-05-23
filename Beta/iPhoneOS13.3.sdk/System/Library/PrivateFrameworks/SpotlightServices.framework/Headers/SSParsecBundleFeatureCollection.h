/*
 Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

#import <Foundation/NSObject.h>

@class NSNumber;

@interface SSParsecBundleFeatureCollection : NSObject

{
    NSNumber *_numResults;
    NSNumber *_maxScore;
    NSNumber *_originalOrderAbsRank;
    NSNumber *_originalOrderRelRank;
    NSNumber *_maxCEPAbsRank;
    NSNumber *_maxCEPRelRank;
    NSNumber *_cep;
    NSNumber *_cepMaxRatio;
    NSNumber *_cepAllMaxRatio;
    NSNumber *_blockIdValue;
    NSNumber *_maxScoreAbsRank;
    NSNumber *_maxScoreRelRank;
}

@property (retain, nonatomic) NSNumber *numResults;
@property (retain, nonatomic) NSNumber *maxScore;
@property (retain, nonatomic) NSNumber *originalOrderAbsRank;
@property (retain, nonatomic) NSNumber *originalOrderRelRank;
@property (retain, nonatomic) NSNumber *maxCEPAbsRank;
@property (retain, nonatomic) NSNumber *maxCEPRelRank;
@property (retain, nonatomic) NSNumber *cep;
@property (retain, nonatomic) NSNumber *cepMaxRatio;
@property (retain, nonatomic) NSNumber *cepAllMaxRatio;
@property (retain, nonatomic) NSNumber *blockIdValue;
@property (retain, nonatomic) NSNumber *maxScoreAbsRank;
@property (retain, nonatomic) NSNumber *maxScoreRelRank;

- (id)description;

@end
