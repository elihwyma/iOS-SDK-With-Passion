/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@interface ATXActionPredictionsHelpers : NSObject

+ (id)processCandidateActionPredictions:(id)arg1 limit:(int)arg2 predictionItemsToKeep:(vector_5be31511 *)arg3;
+ (void)keepRandomPredictionItems:(id)arg1 limit:(unsigned long long)arg2 predictionItemsToKeep:(vector_5be31511 *)arg3;
+ (void)sortPredictions:(id)arg1;
+ (id)sortedPredictions:(id)arg1;
+ (id)limitTheNumberOfPredictions:(id)arg1 withLimit:(int)arg2;
+ (void)applyJointLogProbabilityToActionPredictions:(id)arg1 withAppActionTypePredictionScore:(double)arg2;
+ (void)applyNormalizationToPredictions:(id)arg1;
+ (void)applyLogOfLinearProbabilityTransformationToPredictions:(id)arg1;
+ (void)applyLogSoftmaxToPredictions:(id)arg1;

@end
