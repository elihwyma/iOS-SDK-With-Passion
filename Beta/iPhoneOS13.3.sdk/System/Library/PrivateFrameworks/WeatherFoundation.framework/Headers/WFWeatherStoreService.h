/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <NSObject.h>

@class NSMutableDictionary, NSString, WFNetworkRetryManager, WFWeatherStoreCache, WFWeatherStoreServiceConfiguration;

@protocol OS_dispatch_queue;

@interface WFWeatherStoreService : NSObject

{
    struct os_unfair_lock_s _retryLock;
    WFWeatherStoreServiceConfiguration *_configuration;
    CDUnknownBlockType _forecastRequestStartingCallback;
    CDUnknownBlockType _locationGeocodeForCoordinateRequestStartingCallback;
    NSObject<OS_dispatch_queue> *_incomingRequestQueue;
    NSObject<OS_dispatch_queue> *_parseQueue;
    NSObject<OS_dispatch_queue> *_mapQueue;
    NSMutableDictionary *_UUIDToCallbackMap;
    NSMutableDictionary *_UUIDToURLMap;
    NSMutableDictionary *_URLToTaskMap;
    NSMutableDictionary *_URLToCallbackMap;
    WFWeatherStoreCache *_cache;
    WFNetworkRetryManager *_retryManager;
}

@property (retain) NSObject<OS_dispatch_queue> *incomingRequestQueue;
@property (retain) NSObject<OS_dispatch_queue> *parseQueue;
@property (retain) NSObject<OS_dispatch_queue> *mapQueue;
@property struct os_unfair_lock_s retryLock;
@property (retain) NSMutableDictionary *UUIDToCallbackMap;
@property (retain) NSMutableDictionary *UUIDToURLMap;
@property (retain) NSMutableDictionary *URLToTaskMap;
@property (retain) NSMutableDictionary *URLToCallbackMap;
@property (copy, nonatomic) WFWeatherStoreServiceConfiguration *configuration;
@property (retain) WFWeatherStoreCache *cache;
@property (retain, nonatomic) WFNetworkRetryManager *retryManager;
@property (copy, nonatomic) CDUnknownBlockType forecastRequestStartingCallback;
@property (copy, nonatomic) CDUnknownBlockType locationGeocodeForCoordinateRequestStartingCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (void)cancelTaskWithIdentifier:(id)arg1;
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;
- (void)forecastForLocation:(id)arg1 locale:(id)arg2 atDate:(id)arg3 requestIdentifier:(id)arg4 options:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)hourlyForecastForLocation:(id)arg1 locale:(id)arg2 requestIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)dailyForecastForLocation:(id)arg1 locale:(id)arg2 requestIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)forecast:(unsigned long long)arg1 forLocation:(id)arg2 locale:(id)arg3 requestIdentifier:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)airQualityForLocation:(id)arg1 locale:(id)arg2 requestIdentifier:(id)arg3 options:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)invalidateCacheWithIdentifier:(id)arg1;
- (void)_cancelWithRequestIdentifier:(id)arg1;
- (void)_forecastConditionsForTypes:(unsigned long long)arg1 location:(id)arg2 locale:(id)arg3 date:(id)arg4 requestIdentifier:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)_cachedHourlyForecastedConditionsForLocation:(id)arg1 date:(id)arg2;
- (id)_cachedDailyForecastedConditionsForLocation:(id)arg1 date:(id)arg2;
- (id)_cachedAirQualityConditionsForLocation:(id)arg1 date:(id)arg2;
- (id)apiVersionForSettings:(id)arg1;
- (_Bool)_cacheParsedForecastData:(id)arg1 types:(unsigned long long)arg2 location:(id)arg3 date:(id)arg4 requestIdentifier:(id)arg5;
- (void)_submitRequest:(id)arg1 withIdentifier:(id)arg2 forLocation:(id)arg3 forecastTypes:(unsigned long long)arg4 configuration:(id)arg5 locale:(id)arg6 date:(id)arg7 apiVersion:(id)arg8 completionHandler:(CDUnknownBlockType)arg9;
- (id)_cachedCurrentObservationsForLocation:(id)arg1 date:(id)arg2;
- (id)_cachedDailyPollenForecastedConditionsForLocation:(id)arg1 date:(id)arg2;
- (id)_cachedHistoricalObservationsForLast24hForLocation:(id)arg1 date:(id)arg2;
- (void)_enumerateForecastTypesIn:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)_cachedData:(unsigned long long)arg1 forLocation:(id)arg2 date:(id)arg3;
- (void)_cacheObject:(id)arg1 type:(unsigned long long)arg2 date:(id)arg3 forLocation:(id)arg4;
- (_Bool)_isConnectivityAvailableForWeatherHost:(id *)arg1;
- (id)_taskForURL:(id)arg1;
- (void)requestSuccessForAPIVersion:(id)arg1;
- (void)requestFailureForAPIVersion:(id)arg1 error:(id)arg2;
- (void)_executeCallbacksForURL:(id)arg1 parsedForecastData:(id)arg2 error:(id)arg3;
- (void)_setTask:(id)arg1 requestIdentifier:(id)arg2 callback:(CDUnknownBlockType)arg3 forURL:(id)arg4;
- (void)_addCallback:(CDUnknownBlockType)arg1 requestIdentifier:(id)arg2 forURL:(id)arg3;
- (void)_cleanupCallbacksAndTasksForURL:(id)arg1;
- (void)completeErroneousForecastRequestWithHandler:(CDUnknownBlockType)arg1 requestIdentifier:(id)arg2 error:(id)arg3;

@end
