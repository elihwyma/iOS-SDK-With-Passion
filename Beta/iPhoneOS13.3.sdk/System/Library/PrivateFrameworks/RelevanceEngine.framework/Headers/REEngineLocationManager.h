/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RERelevanceEngineSubsystem.h>

@class CLLocation, RELocationManager, REObserverStore;

@interface REEngineLocationManager : RERelevanceEngineSubsystem

{
    RELocationManager *_locationManager;
    RELocationManager *_simulatedLocationManager;
    REObserverStore *_observers;
    _Bool _monitoringLocation;
    CLLocation *_currentLocation;
    CLLocation *_location;
}

@property (retain) CLLocation *location;
@property (retain, nonatomic) CLLocation *currentLocation;
@property (nonatomic, readonly) _Bool monitoringLocation;
@property (nonatomic, readonly) RELocationManager *locationManager;

- (void)dealloc;
- (void)pause;
- (void)resume;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)initWithRelevanceEngine:(id)arg1 locationManager:(id)arg2;
- (void)_beginTraining;
- (void)_endTraining;
- (void)_updateLocationStatus;
- (_Bool)_wantsLocation;
- (id)_currentLocationManager;
- (void)_beginMonitoringLocationForManager:(id)arg1;
- (void)_stopMonitoringLocationForManager:(id)arg1;
- (void)_handleLocationUpdate:(id)arg1;

@end
