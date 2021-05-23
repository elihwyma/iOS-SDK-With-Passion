/*
 Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface PRSRankingCosineComponents : NSObject

{
    NSArray *_termFrequencies;
    NSArray *_termFrequenciesWeighted;
    NSArray *_inverseDocFrequencies;
    NSArray *_termInverseDoc;
    NSArray *_termInverseDocWeighted;
    unsigned long long _fieldLength;
}

@property (retain, nonatomic) NSArray *termFrequencies;
@property (retain, nonatomic) NSArray *termFrequenciesWeighted;
@property (retain, nonatomic) NSArray *inverseDocFrequencies;
@property (retain, nonatomic) NSArray *termInverseDoc;
@property (retain, nonatomic) NSArray *termInverseDocWeighted;
@property (nonatomic) unsigned long long fieldLength;

@end
