/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@interface ATXDirichletDistribution : NSObject

{
    double kGlobalScoreMultiplier;
    double kBlendedScoreNormalizationConstant;
}

+ (id)sharedInstance;

- (id)init;
- (id)sampleProbabilitiesFromDirichletWithNormalizedParameters:(id)arg1 andNormalizationConstant:(double)arg2;
- (id)getBlendedLocalAndGlobalScoresWithLocalCounts:(id)arg1 andGlobalScores:(id)arg2 withSamplingEnabled:(_Bool)arg3;

@end
