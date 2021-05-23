/*
 Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

#import <NSObject.h>

@class NSString, WeatherPreferences;

@protocol SynchronizedDefaultsDelegate, WeatherPreferencesPersistence;

__attribute__((visibility("hidden")))
@interface WeatherCloudPreferences : NSObject

{
    id <SynchronizedDefaultsDelegate> _syncDelegate;
    id <WeatherPreferencesPersistence> _cloudStore;
    WeatherPreferences *_localPreferences;
}

@property (retain) id <WeatherPreferencesPersistence> cloudStore;
@property (retain) WeatherPreferences *localPreferences;
@property (weak, nonatomic) id <SynchronizedDefaultsDelegate> syncDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)forceSync;
- (void)_synchronize:(_Bool)arg1;
- (id)initWithLocalPreferences:(id)arg1 persistence:(id)arg2;
- (void)purgeLegacyCloudCities;
- (void)cloudCitiesChangedExternally:(id)arg1;
- (id)reconcileCloudCities:(id)arg1 withLocal:(id)arg2 isInitialSync:(_Bool)arg3;
- (_Bool)areCloudCities:(id)arg1 equalToLocalCities:(id)arg2;
- (void)updateLocalStoreWithRemoteChanges:(id)arg1;
- (void)saveCitiesToCloud:(id)arg1;
- (id)citiesByEnforcingSizeLimitOnResults:(id)arg1;
- (id)prepareLocalCitiesForReconciliation:(id)arg1 isInitialSync:(_Bool)arg2;
- (id)cloudRepresentationFromCities:(id)arg1;
- (_Bool)shouldWriteCitiesToCloud:(id)arg1;
- (void)setCloudStoreCities:(id)arg1;
- (void)cloudPersistenceDidSynchronize:(id)arg1;
- (id)initWithLocalPreferences:(id)arg1;

@end
