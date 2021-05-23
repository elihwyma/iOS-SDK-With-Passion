/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface PHAWorkerHealthMonitor : NSObject

{
    struct os_unfair_lock_s _lock;
    double _maxScoreRecentnessInterval;
    NSMutableDictionary *_scoresByWorkerType;
    NSMutableDictionary *_cachedAverageScoresByWorkerType;
    NSMutableDictionary *_lastTrimDateByWorkerType;
}

@property (nonatomic, readonly) NSMutableDictionary *scoresByWorkerType;
@property (nonatomic, readonly) NSMutableDictionary *cachedAverageScoresByWorkerType;
@property (nonatomic, readonly) NSMutableDictionary *lastTrimDateByWorkerType;
@property (nonatomic) double maxScoreRecentnessInterval;

- (id)init;
- (void)reset;
- (id)statusAsDictionary;
- (id)_scoresForWorkerType:(short)arg1;
- (_Bool)_needsTrimScoresForWorkerType:(short)arg1;
- (void)_trimScoresForWorkerType:(short)arg1;
- (float)_calculateAverageScoreForWorkerType:(short)arg1;
- (float)_averageScoreForWorkerType:(short)arg1;
- (_Bool)_isHealthyForWorkerType:(short)arg1;
- (float)averageScoreForWorkerType:(short)arg1;
- (void)recordResultsFromWorkerJob:(id)arg1;
- (_Bool)isHealthyForWorkerType:(short)arg1;

@end
