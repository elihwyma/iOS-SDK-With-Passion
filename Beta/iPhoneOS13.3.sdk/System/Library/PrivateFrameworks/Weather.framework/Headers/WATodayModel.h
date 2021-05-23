/*
 Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

#import <NSObject.h>

@class NSDate, NSHashTable, NSOperationQueue, WAForecastModel, WFServiceConnection;

@interface WATodayModel : NSObject

{
    NSHashTable *_observers;
    NSOperationQueue *_modelOperationQueue;
    _Bool _hasPendingUpdates;
    WAForecastModel *_forecastModel;
    NSDate *_lastUpdateDate;
    WFServiceConnection *_connection;
    struct ct_green_tea_logger_s *_greenTeaLogger;
}

@property (retain, nonatomic) WFServiceConnection *connection;
@property (nonatomic) struct ct_green_tea_logger_s *greenTeaLogger;
@property (nonatomic) _Bool hasPendingUpdates;
@property (retain, nonatomic) WAForecastModel *forecastModel;
@property (retain, nonatomic) NSDate *lastUpdateDate;

+ (id)autoupdatingLocationModelWithPreferences:(id)arg1 effectiveBundleIdentifier:(id)arg2;
+ (id)modelWithLocation:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)location;
- (id)initWithLocation:(id)arg1;
- (void)_locationUpdateCompleted:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_executeLocationUpdateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_forecastUpdateCompleted:(id)arg1 forecastModel:(id)arg2 error:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_executeForecastRetrievalForLocation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_willDeliverForecastModel:(id)arg1;
- (void)_fireTodayModelForecastWasUpdated:(id)arg1;
- (void)_persistStateWithModel:(id)arg1;
- (void)performDelayedUpdatesForObserver:(id)arg1;
- (_Bool)executeModelUpdateWithCompletion:(CDUnknownBlockType)arg1;
- (void)checkIfNeedsToUpdate;
- (_Bool)hasCrossedHourlyBoundary;
- (void)clearLocationUpdateState;
- (void)_fireTodayModelWantsUpdate;

@end
