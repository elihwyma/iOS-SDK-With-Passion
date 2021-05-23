/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableSet;

@interface ATXSlotResolutionParametersStatistics : NSObject

{
    int _totalUndecayedOccurrences;
    double _weightedNumOccurrences;
    int _numParameters;
    NSDate *_latestAppSessionStartDate;
    NSMutableSet *_uniqueDaysLaunched;
    NSDate *_earliestOccurrenceTime;
    NSDate *_latestOccurrenceTime;
    double _totalConfirms;
    double _totalRejects;
    double _minutesSinceLastConfirmInSpotlight;
    double _minutesSinceLastExplicitRejectInSpotlight;
    double _minutesSinceLastConfirmInLockscreen;
    double _minutesSinceLastRejectInLockscreen;
    double _minutesSinceLastExplicitRejectInLockscreen;
    double _totalConfirmsInLastHourInSpotlight;
    double _totalRejectsInLastHourInSpotlight;
    double _totalConfirmsInLastTwoHoursInSpotlight;
    double _totalRejectsInLastTwoHoursInSpotlight;
    double _totalConfirmsTodayInSpotlight;
    double _totalRejectsTodayInSpotlight;
    double _totalConfirmsInSpotlight;
    double _totalRejectsInSpotlight;
    double _totalConfirmsTodayInLockscreen;
    double _totalRejectsTodayInLockscreen;
    double _totalConfirmsInLockscreen;
    double _totalRejectsInLockscreen;
    double _totalOccurrences;
    double _totalTimeOfDayOccurrences;
    double _totalDayOfWeekOccurrences;
    double _totalPartOfWeekOccurrences;
    double _totalLocationOccurrences;
    double _totalPreviousLocationOccurrences;
    double _totalMotionTypeOccurrences;
    double _totalTimeAndDayOccurrences;
    double _totalTimeAndLocationOccurrences;
    double _totalDayAndLocationOccurrences;
    double _totalTimeAndDayAndLocationOccurrences;
    double _totalPrevLocationAndMotionTypeOccurrences;
    double _totalPrevLocationAndLocationOccurrences;
    double _totalTimeAndPrevLocationOccurrences;
    double _totalDayAndPrevLocationOccurrences;
    double _totalPartOfWeekAndLocationOccurrences;
    double _totalPartOfWeekAndTimeOccurrences;
    double _timeOfDayCount;
    double _thirtyMinuteWindowCount;
    double _hourWindowCount;
    double _eightHourWindowCount;
    double _coarseTimeOfDayCount;
    double _dayOfWeekCount;
    double _partOfWeekCount;
    double _partOfWeekAndLocationCount;
    double _locationCount;
    double _motionTypeCount;
    double _prevLocationCount;
    double _timeAndLocationCount;
    double _timeAndDayCount;
    double _dayAndLocationCount;
    double _timeAndDayAndLocationCount;
    double _prevLocationAndMotionTypeCount;
    double _prevLocationAndLocationCount;
    double _timeAndPrevLocationCount;
    double _dayAndPrevLocationCount;
    double _partOfWeekAndTimeCount;
    double _confirmsPartOfWeekCountInSpotlight;
    double _confirmsDayCountInSpotlight;
    double _confirmsTimeOfDayCountInSpotlight;
    double _confirmsCoarseTimeOfDayCountInSpotlight;
    double _confirmsPartOfWeekCountInLockscreen;
    double _confirmsDayCountInLockscreen;
    double _confirmsTimeOfDayCountInLockscreen;
    double _confirmsCoarseTimeOfDayCountInLockscreen;
    double _appSessionCountAsDocFreq;
    double _timeOfDayBudgetMean;
    double _timeOfDayBudgetCount;
    double _timeOfDayBudgetSumOfSquaresOfDifferencesFromMean;
    double _todaysTimeOfDayBudget;
    double _timeOfDayBudget;
    double _coarseTimePOWLocationCount;
    double _totalCoarseTimePOWLocationOccurrences;
    double _confirmsCoarseTimePOWLocationCount;
    double _totalConfirmsCoarseTimePOWLocationOccurrences;
    double _rejectsCoarseTimePOWLocationCount;
    double _totalRejectsCoarseTimePOWLocationOccurrences;
    double _specificTimeDOWLocationCount;
    double _totalSpecificTimeDOWLocationOccurrences;
    double _confirmsSpecificTimeDOWLocationCount;
    double _totalConfirmsSpecificTimeDOWLocationOccurrences;
    double _rejectsSpecificTimeDOWLocationCount;
    double _totalRejectsSpecificTimeDOWLocationOccurrences;
}

+ (double)smoothedRatio:(double)arg1 over:(double)arg2;
+ (double)_smoothedCountForTimeOfDay:(long long)arg1 currentTimeOfDay:(long long)arg2;
+ (double)_smoothedCountForCoarseTimeOfDay:(long long)arg1 currentTimeOfDay:(long long)arg2;
+ (double)_smoothedCountForThirtyMinuteWindow:(long long)arg1 currentTimeOfDay:(long long)arg2;
+ (double)_smoothedCountForHourWindow:(long long)arg1 currentTimeOfDay:(long long)arg2;
+ (double)_smoothedCountForEightHourWindow:(long long)arg1 currentTimeOfDay:(long long)arg2;
+ (double)_smoothedBudgetForTimeOfDay:(long long)arg1 currentTimeOfDay:(long long)arg2;

- (id)init;
- (id)description;
- (id)initWithNumParameters:(int)arg1;
- (void)_updateTimeOfDayBudgetStatisticsForNewTimeOfDayBudget:(double)arg1;
- (double)_timeOfDayBudgetStandardDeviation;
- (double)_totalFeedbackEvents;
- (double)_confirmRatio;

@end
