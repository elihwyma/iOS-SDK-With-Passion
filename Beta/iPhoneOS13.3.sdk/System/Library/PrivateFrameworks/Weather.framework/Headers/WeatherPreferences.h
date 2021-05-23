/*
 Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

#import <NSObject.h>

@class City, NSArray, NSDate, NSString, WeatherCloudPreferences;

@protocol SynchronizedDefaultsDelegate, WeatherPreferencesPersistence;

@interface WeatherPreferences : NSObject

{
    NSString *_UUID;
    NSString *_serviceHost;
    _Bool _serviceDebugging;
    NSArray *_lastUbiquitousWrittenDefaults;
    id <WeatherPreferencesPersistence> _persistence;
    NSString *_cacheDirectoryPath;
    _Bool _logUnitsAndLocale;
    _Bool _userGroupPrefsLockedWhenInit;
    id <SynchronizedDefaultsDelegate> _syncDelegate;
    WeatherCloudPreferences *_cloudPreferences;
}

@property (nonatomic) _Bool userGroupPrefsLockedWhenInit;
@property (readonly) int userTemperatureUnit;
@property (retain) WeatherCloudPreferences *cloudPreferences;
@property (weak, nonatomic) id <SynchronizedDefaultsDelegate> syncDelegate;
@property (nonatomic, getter=isLocalWeatherEnabled, setter=setLocalWeatherEnabled:) _Bool isLocalWeatherEnabled;
@property (nonatomic, readonly) City *localWeatherCity;
@property (weak, nonatomic, readonly) NSDate *lastUpdated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedPreferences;
+ (id)userDefaultsPersistence;
+ (id)preferencesWithPersistence:(id)arg1;
+ (id)readInternalDefaultValueForKey:(id)arg1;
+ (id)serviceDebuggingPath;
+ (_Bool)performUpgradeOfPersistence:(id)arg1 fileManager:(id)arg2 error:(id *)arg3;

- (id)init;
- (id)UUID;
- (id)_cacheDirectoryPath;
- (id)initWithPersistence:(id)arg1;
- (void)resetLocale;
- (id)loadSavedCities;
- (id)readDefaultValueForKey:(id)arg1;
- (void)writeDefaultValue:(id)arg1 forKey:(id)arg2;
- (void)synchronizeStateToDisk;
- (void)saveToDiskWithLocalWeatherCity:(id)arg1;
- (void)saveToDiskWithCities:(id)arg1;
- (void)saveToDiskWithCities:(id)arg1 activeCity:(unsigned long long)arg2;
- (id)_defaultCities;
- (_Bool)areCitiesDefault:(id)arg1;
- (void)setCelsius:(_Bool)arg1;
- (void)setupUbiquitousStoreIfNeeded;
- (void)setDefaultSelectedCityID:(id)arg1;
- (void)synchronizeStateToDiskDoNotify:(_Bool)arg1;
- (_Bool)_defaultsCurrent;
- (id)cityFromPreferencesDictionary:(id)arg1;
- (id)preferencesDictionaryForCity:(id)arg1;
- (_Bool)_defaultsAreValid;
- (id)citiesByConsolidatingDuplicates:(id)arg1 originalOrder:(id)arg2;
- (int)loadActiveCity;
- (void)setActiveCity:(unsigned long long)arg1;
- (id)citiesByConsolidatingDuplicatesInBucket:(id)arg1;
- (void)saveToUbiquitousStore;
- (id)readInternalDefaultValueForKey:(id)arg1;
- (void)temperatureUnitObserver:(id)arg1 didChangeTemperatureUnitTo:(int)arg2;
- (_Bool)ensureValidSelectedCityID;
- (void)adjustPrefsForLocalWeatherEnabled:(_Bool)arg1;
- (void)registerTemperatureUnits;
- (_Bool)readTemperatureUnits;
- (_Bool)isCelsius;
- (void)saveToDiskWithCity:(id)arg1 forActiveIndex:(unsigned long long)arg2;
- (void)setDefaultCities:(id)arg1;
- (int)loadDefaultSelectedCity;
- (id)loadDefaultSelectedCityID;
- (void)setDefaultSelectedCity:(unsigned long long)arg1;
- (void)forceSyncCloudPreferences;
- (id)serviceHost;
- (id)twcLogoURL;
- (id)twcLogoURL:(id)arg1;
- (_Bool)serviceDebugging;
- (void)_clearCachedObjects;

@end
