/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSString;

@interface ATXSlotResolutionStatistics : NSObject

{
    NSString *_actionKey;
    NSMutableDictionary *_statisticsForParameters;
    NSMutableDictionary *_statisticsForSlotSet;
    double _totalLaunches;
    int _slotCount;
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
    NSMutableSet *_totalUniqueDaysLaunched;
    double _totalConfirmsForAllSlots;
    double _totalRejectsForAllSlots;
    double _totalConfirmsInSpotlightForAllSlots;
    double _totalRejectsInSpotlightForAllSlots;
    double _totalConfirmsInSpotlightWithinMeanWindowForAllSlots;
    double _totalRejectsInSpotlightWithinMeanWindowForAllSlots;
    NSMutableSet *_totalUniqueDaysConfirmedOrRejectedInSpotlightWithinMeanWindowForAllSlots;
    double _totalConfirmsTodayInLockscreenForAllSlots;
    double _totalRejectsTodayInLockscreenForAllSlots;
    double _totalConfirmsInLockscreenForAllSlots;
    double _totalRejectsInLockscreenForAllSlots;
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
    int _totalConfirmRatioCount;
    double _totalConfirmRatioMean;
    double _totalConfirmRatioSumOfSquaresOfDifferencesFromMean;
}

- (id)init;
- (id)initWithActionKey:(id)arg1;
- (void)_updateConfirmRatioStatisticsForNewConfirmRatio:(double)arg1;
- (double)_totalConfirmRatioStandardDeviation;

@end
