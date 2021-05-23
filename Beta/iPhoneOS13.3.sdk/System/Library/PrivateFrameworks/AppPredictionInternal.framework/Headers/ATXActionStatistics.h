/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface ATXActionStatistics : NSObject

{
    NSMutableDictionary *_statisticsForParameters;
    double _totalLaunches;
    double _totalTimeOfDayCount;
    double _totalThirtyMinuteWindowCount;
    double _totalHourWindowCount;
    double _totalEightHourWindowCount;
    double _totalCoarseTimeOfDayCount;
    double _totalDayOfWeekCount;
    double _totalPartOfWeekCount;
    double _totalLocationCount;
    double _totalMotionTypeCount;
    double _totalPrevLocationCount;
    double _totalTimeAndLocationCount;
    double _totalTimeAndDayCount;
    double _totalDayAndLocationCount;
    double _totalTimeAndDayAndLocationCount;
    double _totalPrevLocationAndMotionTypeCount;
    double _totalPrevLocationAndLocationCount;
    double _totalTimeAndPrevLocationCount;
    double _totalDayAndPrevLocationCount;
    double _totalPartOfWeekAndLocationCount;
    double _totalPartOfWeekAndTimeCount;
    double _totalTimeOfDayOccurrences;
    double _totalDayOfWeekOccurrences;
    double _totalLocationOccurrences;
    double _totalMotionTypeOccurrences;
    double _totalPreviousLocationOccurrences;
    double _totalPartOfWeekOccurrences;
    double _totalTimeAndDayOccurrences;
    double _totalTimeAndLocationOccurrences;
    double _totalDayAndLocationOccurrences;
    double _totalTimeAndDayAndLocationOccurrences;
    double _totalPrevLocationAndLocationOccurrences;
    double _totalPrevLocationAndMotionTypeOccurrences;
    double _totalTimeAndPrevLocationOccurrences;
    double _totalDayAndPrevLocationOccurrences;
    double _totalPartOfWeekAndLocationOccurrences;
    double _totalPartOfWeekAndTimeOccurrences;
    double _totalConfirms;
    double _totalRejects;
    double _totalConfirmsInSpotlight;
    double _totalRejectsInSpotlight;
    double _totalConfirmsInSpotlightWithinMeanWindow;
    double _totalRejectsInSpotlightWithinMeanWindow;
    NSMutableSet *_totalUniqueDaysConfirmedOrRejectedInSpotlightWithinMeanWindow;
    double _totalConfirmsTodayInLockscreen;
    double _totalRejectsTodayInLockscreen;
    double _totalConfirmsInLockscreen;
    double _totalRejectsInLockscreen;
    double _totalCoarseTimePOWLocationCount;
    double _totalCoarseTimePOWLocationOccurrences;
    double _totalConfirmsCoarseTimePOWLocationCount;
    double _totalConfirmsCoarseTimePOWLocationOccurrences;
    double _totalRejectsCoarseTimePOWLocationCount;
    double _totalRejectsCoarseTimePOWLocationOccurrences;
    double _totalSpecificTimeDOWLocationCount;
    double _totalSpecificTimeDOWLocationOccurrences;
    double _totalConfirmsSpecificTimeDOWLocationCount;
    double _totalConfirmsSpecificTimeDOWLocationOccurrences;
    double _totalRejectsSpecificTimeDOWLocationCount;
    double _totalRejectsSpecificTimeDOWLocationOccurrences;
}

- (id)init;
- (void)updateActionStatisticsForSlotResolutionStatistics:(id)arg1 candidateActionPredictions:(id)arg2;

@end
