/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class CLKUIAlmanacTransitInfo, CLLocation, NSArray, NSCalendar, NSDate, NSOrderedSet;

@protocol NTKSiderealDataSourceDelegate;

@interface NTKSiderealDataSource : NSObject

{
    float _altitudes[361];
    NSDate *_startOfDayForReferenceDate;
    NSDate *_endOfDayForReferenceDate;
    NSOrderedSet *_daytimeEvents;
    struct NSString *_locationManagerToken;
    NSCalendar *_currentCalendar;
    NSDate *_cachedDate;
    NSDate *_cachedStartOfDay;
    NSDate *_cachedStartOfNextDay;
    _Bool _isConstantSunUpOrDown;
    id <NTKSiderealDataSourceDelegate> _delegate;
    CLKUIAlmanacTransitInfo *_sunriseSunsetInfo;
    NSDate *_referenceDate;
    CLLocation *_referenceLocation;
    NSOrderedSet *_solarEvents;
    NSOrderedSet *_sectors;
    NSArray *_waypoints;
}

@property (retain, nonatomic) NSOrderedSet *solarEvents;
@property (retain, nonatomic) NSOrderedSet *sectors;
@property (retain, nonatomic) NSArray *waypoints;
@property (nonatomic) _Bool isConstantSunUpOrDown;
@property (retain, nonatomic) CLKUIAlmanacTransitInfo *sunriseSunsetInfo;
@property (weak, nonatomic) id <NTKSiderealDataSourceDelegate> delegate;
@property (retain, nonatomic) NSDate *referenceDate;
@property (retain, nonatomic) CLLocation *referenceLocation;

- (id)init;
- (void)_updateData;
- (void)stopLocationUpdates;
- (void)startLocationUpdates;
- (void)updateModelWithDate:(id)arg1;
- (void)updateForTimeZoneChange;
- (CDStruct_869f9c67)altitudeForProgress:(double)arg1;
- (void)_updateWaypoints;
- (id)interpolateBetweenCalendricalMidnights:(double)arg1;
- (double)reverseInterpolateBetweenCalendricalMidnights:(id)arg1;
- (_Bool)isDateInReferenceDate:(id)arg1;
- (void)updateForSignificantTimeChange;
- (void)_loadStartEndDates;
- (void)_notifyDataDidUpdate;
- (void)ensureLocation:(id)arg1;
- (id)_allAvailableSolarEvents;
- (_Bool)date:(id)arg1 isBetweenDate:(id)arg2 andDate:(id)arg3;
- (long long)_startOfDayEventPreceedingFirstSolarEvent:(long long)arg1;
- (long long)_endOfDayEventFollowingSolarEvent:(long long)arg1;
- (double)_solarPercentageToDegree:(double)arg1;
- (CDStruct_c3b9c2ee)_geoLocationForReferenceLocation;
- (void)_updateSolarEvents;
- (void)_updateSolarSectors;
- (void)_updateDayEvents;
- (id)_eventWithType:(long long)arg1 time:(id)arg2;
- (void)_locationManagerUpdatedLocation:(id)arg1 error:(id)arg2;
- (_Bool)_didLocationChangeSignificantlyFromOldLocation:(id)arg1 toNewLocation:(id)arg2;
- (id)daytimeEvents;
- (id)_placeholderSolarEvents;

@end
