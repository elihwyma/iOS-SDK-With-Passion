/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class _CDAutoSuConfig;

@protocol _DKKnowledgeQuerying;

@interface _CDSleepForAutoSu : NSObject

{
    _Bool _enableCaching;
    id <_DKKnowledgeQuerying> _knowledgeStore;
    _CDAutoSuConfig *_autoSuConfig;
}

@property (retain, nonatomic) id <_DKKnowledgeQuerying> knowledgeStore;
@property (retain) _CDAutoSuConfig *autoSuConfig;
@property _Bool enableCaching;

+ (id)defaultTuningConfiguration;
+ (id)readConfigurationFromDefaults;
+ (id)sanitizeTuningConfiguration:(id)arg1;
+ (id)tuningDictionary;

- (id)init;
- (id)defaultTimesWhenPredictionUnavailable:(id)arg1 withConfig:(id)arg2;
- (id)defaultTimesWhenPredictionUnavailable:(id)arg1;
- (id)getUnlockAndSoftwareUpdateTimesWithConfig:(id)arg1 referenceDate:(id)arg2;
- (id)predictedSleepDictionaryForDate:(id)arg1 usingKnowledge:(id)arg2;
- (id)predictedSleepDictionaryForDate:(id)arg1;
- (id)makeDictionaryForEventStreamWhenPredictionTemporarilyUnavailable:(id)arg1;
- (id)predictForDate:(id)arg1 fromState:(id)arg2 withConfig:(id)arg3;
- (id)retrieveSleepProbabilities:(id)arg1;
- (id)proposeTimesFromRelativeOffsetsForDate:(id)arg1 lastUnlock:(int)arg2 suStart:(int)arg3 suEnd:(int)arg4 unrestrictedSleepEnd:(int)arg5 config:(id)arg6;
- (id)predicitLastUnlockForDay:(id)arg1;
- (id)initWithKnowledgeStore:(id)arg1;
- (id)getUnlockAndSoftwareUpdateTimes;
- (id)predictForDate:(id)arg1 fromState:(id)arg2;
- (id)predictNextDateForLastUnlockAttemptOfTheDay;

@end
