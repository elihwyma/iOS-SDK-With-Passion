/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSSet;

@interface REMLPrediction : NSObject

{
    NSMutableSet *_explanations;
    float _mean;
    float _variance;
    float _probability;
    float _pessimistic;
    float _bias;
}

@property (nonatomic) float bias;
@property (nonatomic, readonly) NSSet *explanations;
@property (nonatomic, readonly) float mean;
@property (nonatomic, readonly) float variance;
@property (nonatomic, readonly) float probability;
@property (nonatomic, readonly) float pessimistic;

+ (id)predictionWithProbability:(float)arg1 mean:(float)arg2 variance:(float)arg3 pessimistic:(float)arg4;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addExplanation:(id)arg1;
- (id)explanationDescription;

@end
