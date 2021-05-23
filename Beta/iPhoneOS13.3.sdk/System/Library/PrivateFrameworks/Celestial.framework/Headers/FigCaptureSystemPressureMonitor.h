/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface FigCaptureSystemPressureMonitor : NSObject

{
    CDUnknownBlockType _systemPressureLevelChangedHandler;
    NSObject<OS_dispatch_queue> *_systemPressureLevelChangedHandlerQueue;
    int _thermalPressureNotificationToken;
    int _systemPressureLevelByThermalPressureLevel[5];
    int _currentSystemPressureFromThermalPressure;
    int _peakPowerNotificationToken;
    int _systemPressureLevelByPeakPowerLevel[5];
    int _currentSystemPressureFromPeakPower;
    struct {
        float min;
        float max;
    } _systemPressureLevelByProjectorTemperature[5];
    int _currentSystemPressureFromProjectorTemperature;
    NSObject<OS_dispatch_source> *_pearlPollTimer;
    CDStruct_1b6d18a9 _pollingTimerStopTime;
}

@property (copy) CDUnknownBlockType systemPressureLevelChangedHandler;
@property (readonly) int systemPressureLevelFromPearlProjector;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (void)_registerForThermalNotifications;
- (void)_registerForPeakPowerNotifications;
- (void)_releasePearlProjectorPollingResources;
- (void)_updateSystemPressureForThermalPressureAndCallChangeHandler:(_Bool)arg1;
- (void)_updateSystemPressureForPeakPowerAndCallChangeHandler:(_Bool)arg1;
- (void)_callChangeHandler;
- (void)_updateWithPearlProjectorTemperature:(float)arg1;
- (void)callSystemPressureLevelChangedHandler;
- (void)updateWithPearlProjectorTemperature:(float)arg1;
- (void)startMonitoringPearlProjectorTemperatureUntilNominal;

@end
