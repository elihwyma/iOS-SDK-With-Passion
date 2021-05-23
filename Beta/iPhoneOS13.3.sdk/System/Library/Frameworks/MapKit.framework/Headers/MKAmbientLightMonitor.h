/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSHashTable;

@interface MKAmbientLightMonitor : NSObject

{
    NSHashTable *_observers;
    _Bool _monitoring;
    long long _ambientLightLevel;
    _Bool _debugLogLux;
    struct __IOHIDEventSystemClient *_client;
    struct deque<double, std::__1::allocator<double>> _runningStatBuffer;
    double _runningStatSum;
    double _lightLevelNoneThreshold;
    double _lightLevelLowThreshold;
    double _lightLevelMediumThreshold;
    unsigned int _runningStatSize;
}

@property (nonatomic, readonly, getter=isMonitoring) _Bool monitoring;
@property (nonatomic, readonly) long long ambientLightLevel;
@property (nonatomic) _Bool debugLogLux;

+ (id)sharedAmbientLightMonitor;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id).cxx_construct;
- (void)_stopMonitoring;
- (void)handleIOHIDEvent:(struct __IOHIDEvent *)arg1;
- (void)_updateThresholds;
- (void)_startMonitoring;
- (double)_addSampleAndComputeMean:(const double *)arg1;
- (void)startMonitoringWithObserver:(id)arg1;
- (void)stopMonitoringWithObserver:(id)arg1;

@end
