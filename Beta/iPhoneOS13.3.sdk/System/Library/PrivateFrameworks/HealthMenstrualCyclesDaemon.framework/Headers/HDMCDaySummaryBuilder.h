/*
 Image: /System/Library/PrivateFrameworks/HealthMenstrualCyclesDaemon.framework/HealthMenstrualCyclesDaemon
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface HDMCDaySummaryBuilder : NSObject

{
    NSMutableArray *_menstrualFlowSamples;
    NSMutableArray *_intermenstrualBleedingSamples;
    NSMutableArray *_symptomsSamples;
    NSMutableArray *_sexualActivitySamples;
    NSMutableArray *_ovulationTestResultSamples;
    NSMutableArray *_cervicalMucusQualitySamples;
    NSMutableArray *_basalBodyTemperatureSamples;
    long long _dayIndex;
}

@property (nonatomic, readonly) long long dayIndex;

- (unsigned long long)_symptoms;
- (long long)_ovulationTestResult;
- (_Bool)_intermenstrualBleeding;
- (long long)_sexualActivity;
- (long long)_cervicalMucusQuality;
- (id)_basalBodyTemperature;
- (id)createDaySummaryWithDevice:(id)arg1 calendarCache:(id)arg2;
- (id)initWithDayIndex:(long long)arg1;
- (void)addCycleTrackingSample:(id)arg1;
- (long long)_menstrualFlowWithCalendarCache:(id)arg1 modificationDay:(long long *)arg2 startOfCycleFromCycleTracking:(id *)arg3;

@end
