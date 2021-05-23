/*
 Image: /System/Library/PrivateFrameworks/HealthMenstrualCyclesDaemon.framework/HealthMenstrualCyclesDaemon
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSNumber;

__attribute__((visibility("hidden")))
@interface HDMCDailyMetric : NSObject

{
    _Bool _improveHealthAndActivityAllowed;
    NSDictionary *_eventPayload;
    NSNumber *_onboardingCompleted;
    NSNumber *_weeksSinceOnboarded;
    NSNumber *_hasCompatiblePairedAppleWatch;
    NSNumber *_age;
    NSNumber *_biologicalSex;
    NSNumber *_numberOfCyclesSinceLastDayOfLogging;
    NSNumber *_numberOfCyclesSinceLastDayOfLoggingInCycleTracking;
    NSNumber *_cycleLengthVariationLowerPercentile;
    NSNumber *_cycleLengthVariationUpperPercentile;
    NSNumber *_periodPredictionEnabled;
    NSNumber *_periodNotificationEnabled;
    NSNumber *_fertilityPredictionEnabled;
    NSNumber *_fertilityNotificationEnabled;
    NSNumber *_logSymptomsEnabled;
    NSNumber *_logSpottingEnabled;
    NSNumber *_logSexualActivityEnabled;
    NSNumber *_logCervicalMucusQualityEnabled;
    NSNumber *_logBasalBodyTemperatureEnabled;
    NSNumber *_logOvulationTestResultEnabled;
}

@property (copy, nonatomic) NSDictionary *eventPayload;
@property (nonatomic, getter=isImproveHealthAndActivityAllowed) _Bool improveHealthAndActivityAllowed;
@property (retain, nonatomic, getter=isOnboardingCompleted) NSNumber *onboardingCompleted;
@property (retain, nonatomic) NSNumber *weeksSinceOnboarded;
@property (retain, nonatomic) NSNumber *hasCompatiblePairedAppleWatch;
@property (retain, nonatomic) NSNumber *age;
@property (retain, nonatomic) NSNumber *biologicalSex;
@property (retain, nonatomic) NSNumber *numberOfCyclesSinceLastDayOfLogging;
@property (retain, nonatomic) NSNumber *numberOfCyclesSinceLastDayOfLoggingInCycleTracking;
@property (retain, nonatomic) NSNumber *cycleLengthVariationLowerPercentile;
@property (retain, nonatomic) NSNumber *cycleLengthVariationUpperPercentile;
@property (retain, nonatomic) NSNumber *periodPredictionEnabled;
@property (retain, nonatomic) NSNumber *periodNotificationEnabled;
@property (retain, nonatomic) NSNumber *fertilityPredictionEnabled;
@property (retain, nonatomic) NSNumber *fertilityNotificationEnabled;
@property (retain, nonatomic) NSNumber *logSymptomsEnabled;
@property (retain, nonatomic) NSNumber *logSpottingEnabled;
@property (retain, nonatomic) NSNumber *logSexualActivityEnabled;
@property (retain, nonatomic) NSNumber *logCervicalMucusQualityEnabled;
@property (retain, nonatomic) NSNumber *logBasalBodyTemperatureEnabled;
@property (retain, nonatomic) NSNumber *logOvulationTestResultEnabled;

+ (id)eventName;

- (id)initWithImproveHealthAndActivityAllowed:(_Bool)arg1;
- (id)_biologicalSexString;

@end
