/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSMutableArray, WorldClockPreferences;

@interface WorldClockManager : NSObject

{
    _Bool _dirty;
    NSMutableArray *_cities;
    WorldClockPreferences *_defaults;
    NSDate *lastModified;
}

@property (retain, nonatomic) NSDate *lastModified;
@property (nonatomic, readonly) NSArray *cities;

+ (id)sharedManager;
+ (id)sharedManagerWithPreferences:(id)arg1;

- (id)initWithPreferences:(id)arg1;
- (void)addDefaultCitiesIfNeeded;
- (id)worldClockCityFromPersistenceRepresentation:(id)arg1;
- (void)pushCityPropertiesToPreferences;
- (void)_notifyNano;
- (id)worldClockCityFromPersistenceDictionary:(id)arg1;
- (id)worldClockCityFromPersistenceArray:(id)arg1;
- (id)fixUpCityProperties:(id)arg1;
- (void)saveCities;
- (_Bool)canAddCity;
- (void)loadCities;
- (_Bool)checkIfCitiesModified;
- (id)cityWithIdUrl:(id)arg1;
- (unsigned long long)addCity:(id)arg1;
- (void)removeCity:(id)arg1;
- (void)removeCityAtIndex:(unsigned long long)arg1;
- (void)removeAllCities;
- (void)moveCityFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;

@end
