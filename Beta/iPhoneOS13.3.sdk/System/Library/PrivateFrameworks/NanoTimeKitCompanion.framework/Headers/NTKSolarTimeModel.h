/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class CLLocation, GEOAlmanac, NSDate;

@interface NTKSolarTimeModel : NSObject

{
    _Bool _usePlaceholderData;
    _Bool _dependentValuesNeedUpdate;
    CLLocation *_referenceLocation;
    NSDate *_referenceDate;
    NSDate *_startDateForReferenceDate;
    NSDate *_endDateForReferenceDate;
    NSDate *_localSolarMidnightDate;
    double _effectiveSolarDayLength;
    GEOAlmanac *_sunriseSunsetSolarAlmanac;
    GEOAlmanac *_dawnDuskSolarAlmanac;
}

@property (retain, nonatomic) NSDate *referenceDate;
@property (retain, nonatomic) NSDate *startDateForReferenceDate;
@property (retain, nonatomic) NSDate *endDateForReferenceDate;
@property (retain, nonatomic) NSDate *localSolarMidnightDate;
@property (nonatomic) double effectiveSolarDayLength;
@property (nonatomic) _Bool dependentValuesNeedUpdate;
@property (retain, nonatomic) GEOAlmanac *sunriseSunsetSolarAlmanac;
@property (retain, nonatomic) GEOAlmanac *dawnDuskSolarAlmanac;
@property (retain, nonatomic) CLLocation *referenceLocation;
@property (nonatomic) _Bool usePlaceholderData;

- (id)init;
- (_Bool)includesDate:(id)arg1;
- (double)percentageThroughPeriodForDate:(id)arg1;
- (id)dateForPercentageThroughPeriod:(double)arg1;
- (id)ntkCacheableKey;
- (id)initWithReferenceDate:(id)arg1 referenceLocation:(id)arg2;
- (void)_updateDependentValues;
- (double)percentageThroughPeriodInCurrentSolarDayForDate:(id)arg1;
- (id)normalizeDateIntervalForDate:(id)arg1;
- (double)percentageThroughPeriodForIdealizedTimeInCurrentSolarDay;
- (void)updateModelWithDate:(id)arg1;
- (void)updateForTimeZoneChange;

@end
