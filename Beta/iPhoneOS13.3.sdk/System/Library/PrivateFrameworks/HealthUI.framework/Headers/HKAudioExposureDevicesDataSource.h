/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKHealthStore, HKObserverSet, HKQuery, NSDictionary, NSSet;

@interface HKAudioExposureDevicesDataSource : NSObject

{
    _Bool _ready;
    unsigned long long _deviceType;
    NSSet *_devices;
    NSDictionary *_devicesByName;
    HKHealthStore *_healthStore;
    HKObserverSet *_observers;
    HKQuery *_query;
}

@property (nonatomic, getter=isReady) _Bool ready;
@property (nonatomic) unsigned long long deviceType;
@property (copy, nonatomic) NSSet *devices;
@property (copy, nonatomic) NSDictionary *devicesByName;
@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) HKObserverSet *observers;
@property (retain, nonatomic) HKQuery *query;
@property (nonatomic, readonly) long long deviceCount;

- (void)startQuery;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)initWithDeviceType:(unsigned long long)arg1 healthStore:(id)arg2;
- (id)_makeDeviceQueryForDeviceType;
- (void)_cleanUp;
- (void)_notify_dataSourceIsReady;
- (id)_localizedNameForDevice:(id)arg1;
- (id)_sampleTypeForDeviceType;
- (void)cancelQuery;

@end
