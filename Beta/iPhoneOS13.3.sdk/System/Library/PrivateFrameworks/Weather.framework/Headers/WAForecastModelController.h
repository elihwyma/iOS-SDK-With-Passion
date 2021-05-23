/*
 Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

#import <NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSOperationQueue, NSString, WFServiceConnection, WFWeatherStoreService;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface WAForecastModelController : NSObject

{
    NSOperationQueue *_forecastOperationQueue;
    NSObject<OS_dispatch_queue> *_incomingRequestQueue;
    NSObject<OS_dispatch_queue> *_completionHandlerQueue;
    NSMutableSet *_updatingCities;
    NSMutableDictionary *_completionHandlersForCity;
    WFServiceConnection *_connection;
    struct ct_green_tea_logger_s *_greenTeaLogger;
    NSString *_trackingParameter;
    WFWeatherStoreService *_store;
}

@property (retain) NSOperationQueue *forecastOperationQueue;
@property (retain) NSObject<OS_dispatch_queue> *incomingRequestQueue;
@property (retain) NSObject<OS_dispatch_queue> *completionHandlerQueue;
@property (retain) NSMutableSet *updatingCities;
@property (retain) NSMutableDictionary *completionHandlersForCity;
@property (retain, nonatomic) WFServiceConnection *connection;
@property (nonatomic) struct ct_green_tea_logger_s *greenTeaLogger;
@property (copy) NSString *trackingParameter;
@property (readonly) WFWeatherStoreService *store;

- (id)init;
- (void)dealloc;
- (_Bool)isCityBeingUpdated:(id)arg1;
- (void)cancelAllFetchRequests;
- (_Bool)fetchForecastForCity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)fetchForecastForCities:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_queue_executeFetchForCity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_commaSeparatedUpdatingCitiesNames;
- (void)_handleForecastOperationCompletion:(id)arg1;

@end
