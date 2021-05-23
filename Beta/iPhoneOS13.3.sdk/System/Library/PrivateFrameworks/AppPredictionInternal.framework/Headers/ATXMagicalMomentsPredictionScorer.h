/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSArray, NSCountedSet, NSMutableDictionary, NSMutableOrderedSet, NSString;

@interface ATXMagicalMomentsPredictionScorer : NSObject

{
    NSArray *_correlatedEvents;
    NSCountedSet *_relevantAppLaunches;
    unsigned long long _totalRelevantLaunchesForAllBundleIds;
    NSCountedSet *_globalAppLaunches;
    NSMutableDictionary *_relevanceWeightsByIdentifier;
    NSString *_topScoringIdentifier;
    NSMutableOrderedSet *_dateSetForDecay;
    NSMutableDictionary *_cumulativeScoresWithDecayedWeightsByIdentifier;
    double _totalScaledCumulativeScoresForAllBundleIds;
    NSMutableDictionary *_finalPredictionConfidences;
}

- (id)startOfDayForDate:(id)arg1;
- (id)initWithCorrelatedEvents:(id)arg1 andGlobalAppLaunchCountedSet:(id)arg2;
- (void)computeRelevanceScoresForAllRelevantBundleIds;
- (void)getRelevantAppLaunchCountsAndDateSetFromCorrelationData;
- (_Bool)subExpertHasObservedEnoughLaunchesForOneAppToMakePredictions;
- (_Bool)subExpertHasObservedEnoughLaunchesForMultipleAppsToMakePredictions;
- (_Bool)subExpertHasWitnessedEnoughRelevantAppLaunches;
- (_Bool)subExpertCanMakeHighConfidencePredictions;
- (_Bool)subExpertCanMakeHighConfidencePredictionsForBundleIdGivenRelevantLaunchCount:(unsigned long long)arg1 globalLaunchCount:(unsigned long long)arg2;
- (id)relevanceScoreWithRelevantLaunchCount:(unsigned long long)arg1 globalLaunchCount:(unsigned long long)arg2;
- (id)generatePredictions;
- (void)computeTimeDecayedCumulativeScores;
- (double)scalingFactorFromTopPrediction;
- (void)scaleAllScoresWithTopScoringFactor;
- (void)computeModelConfidences;
- (id)getPredictionsFromFinalConfidences;
- (unsigned long long)minimumNumberOfDaysOfObservationsRequiredForSubExpertToMakePredictions;
- (unsigned long long)minimumNumberOfRelevantObservationsOfBundleIdForMMScoring;
- (unsigned long long)minimumNumberOfGlobalObservationsOfBundleIdForMMScoring;
- (double)minimumRelevanceWeightForMMScoring;
- (double)maximumRelevanceWeightForMMScoring;
- (id)dateSetForDecay;
- (id)relevantAppLaunches;
- (unsigned long long)totalRelevantLaunchesForAllBundleIds;
- (id)relevanceWeightsByIdentifier;
- (id)cumulativeScoresWithDecayedWeightsByIdentifier;
- (id)topScoringIdentifier;

@end
