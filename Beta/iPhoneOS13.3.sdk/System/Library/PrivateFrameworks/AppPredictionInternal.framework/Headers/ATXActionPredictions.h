/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@interface ATXActionPredictions : NSObject

+ (id)predictionsWithCandidateBundleIdentifiers:(id)arg1 candidateActiontypes:(id)arg2 consumerSubType:(unsigned char)arg3 firstStageScoreLogger:(id)arg4 secondStageScoreLogger:(id)arg5 thirdStageScoreLogger:(id)arg6 multiStageScoreLogger:(id)arg7;
+ (id)_predictionWithCandidateBundleIdentifiers:(id)arg1 candidateActiontypes:(id)arg2 consumerSubType:(unsigned char)arg3 firstStageScoreLogger:(id)arg4 secondStageScoreLogger:(id)arg5 thirdStageScoreLogger:(id)arg6 multiStageScoreLogger:(id)arg7;
+ (id)actionsFromActions:(id)arg1 byMovingActionsWithBundleIdentifiers:(id)arg2 toRemainingPredictionItems:(vector_5be31511 *)arg3;
+ (void)fetchDataAndUpdateContentAttributeSetForActions:(id)arg1;
+ (id)showInSpotlightActionsForActionPredictions:(id)arg1 withThreshold:(double)arg2 predictionItems:(vector_5be31511 *)arg3;
+ (id)scoredActionsWithoutLog:(id)arg1;
+ (void)penalizeMultipleActionsPerAppAndKeepSorted:(id)arg1;
+ (id)sortStageScores:(id)arg1;

- (id)init;

@end
