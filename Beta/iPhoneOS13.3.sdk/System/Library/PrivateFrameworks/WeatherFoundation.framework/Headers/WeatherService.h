/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <NSObject.h>

@class NSArray, NSMapTable, NSMutableArray, NSString, WFQueryDispatcher, WFTemperatureUnitProvider, WFWeatherStoreService;

@protocol OS_dispatch_queue;

@interface WeatherService : NSObject

{
    WFTemperatureUnitProvider *_temperatureUnitProvider;
    NSMutableArray *_clients;
    NSObject<OS_dispatch_queue> *_clientQueue;
    WFWeatherStoreService *_internalService;
    WFQueryDispatcher *_queryDispatcher;
    NSMapTable *_clientDictionary;
}

@property (retain) WFWeatherStoreService *internalService;
@property (retain) WFQueryDispatcher *queryDispatcher;
@property (retain) NSMapTable *clientDictionary;
@property (nonatomic, readonly) NSArray *clients;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) WFTemperatureUnitProvider *temperatureUnitProvider;

+ (id)sharedService;

- (id)init;
- (id)initWithStore:(id)arg1;
- (void)cancelTaskWithIdentifier:(id)arg1;
- (void)addClient:(id)arg1;
- (void)removeClient:(id)arg1;
- (void)performMigrationWithCompletion:(CDUnknownBlockType)arg1;
- (void)airQualityForLocation:(id)arg1 locale:(id)arg2 options:(id)arg3 taskIdentifier:(id)arg4;
- (void)queryDispatcherDidReceiveResponse:(id)arg1 identifier:(id)arg2;
- (id)clientForPid:(int)arg1;
- (void)forecastForLocation:(id)arg1 locale:(id)arg2 atDate:(id)arg3 options:(id)arg4 taskIdentifier:(id)arg5;
- (void)hourlyForecastForLocation:(id)arg1 locale:(id)arg2 taskIdentifier:(id)arg3;
- (void)dailyForecastForLocation:(id)arg1 locale:(id)arg2 taskIdentifier:(id)arg3;
- (void)forecast:(unsigned long long)arg1 forLocation:(id)arg2 locale:(id)arg3 taskIdentifier:(id)arg4;
- (void)locationForString:(id)arg1 taskIdentifier:(id)arg2;
- (void)locationForCoordinate:(struct CLLocationCoordinate2D)arg1 taskIdentifier:(id)arg2;
- (void)locationForSearchCompletion:(id)arg1 taskIdentifier:(id)arg2;
- (void)temperatureUnitWithIdentifier:(id)arg1;
- (void)replaceTemperatureUnitWith:(int)arg1 identifier:(id)arg2;
- (void)reachabilityConfigurationForIdentifier:(id)arg1;
- (void)invalidateCache:(id)arg1;
- (void)addClient:(id)arg1 forPid:(int)arg2;
- (void)fetchFavoriteLocationsWithTaskIdentifier:(id)arg1;

@end
