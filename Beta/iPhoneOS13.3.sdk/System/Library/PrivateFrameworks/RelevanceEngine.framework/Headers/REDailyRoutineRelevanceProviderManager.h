/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RERelevanceProviderManager.h>

@class NSString;

@interface REDailyRoutineRelevanceProviderManager : RERelevanceProviderManager

{
    _Bool _inMorningRoutine;
    _Bool _inEveningRoutine;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool isInMorningRoutine;
@property (nonatomic, readonly) _Bool isInEveningRoutine;

+ (id)_features;
+ (Class)_relevanceProviderClass;
+ (_Bool)_wantsSeperateRelevanceQueue;

- (void)pause;
- (void)resume;
- (void)_prepareForUpdate;
- (id)_valueForProvider:(id)arg1 feature:(id)arg2;
- (id)_valueForProvider:(id)arg1 context:(id)arg2 feature:(id)arg3;
- (void)dailyRoutinePredictorDidUpdatedPredictedRoutines:(id)arg1;
- (void)dailyRoutinePredictorDidBeginMorningRoutine:(id)arg1;
- (void)dailyRoutinePredictorDidEndMorningRoutine:(id)arg1;
- (void)dailyRoutinePredictorDidBeginEveningRoutine:(id)arg1;
- (void)dailyRoutinePredictorDidEndEveningRoutine:(id)arg1;
- (_Bool)_isInRoutine:(unsigned long long)arg1 forDate:(id)arg2;
- (void)_updateRoutines;

@end
