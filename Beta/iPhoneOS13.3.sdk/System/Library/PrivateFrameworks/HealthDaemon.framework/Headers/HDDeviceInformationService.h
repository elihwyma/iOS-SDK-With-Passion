/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDHealthService.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject, NSString;

@protocol OS_dispatch_queue;

@interface HDDeviceInformationService : HDHealthService

{
    _Bool _fetchLimitedCharacteristics;
    _Bool _deviceInformationHasBeenLoaded;
    NSMutableDictionary *_characteristics;
    NSMutableDictionary *_propertyValues;
    NSMutableSet *_propertiesLeftToFetch;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_pendingDeviceInformationLoadedBlocks;
}

@property (retain, nonatomic) NSMutableDictionary *characteristics;
@property (retain, nonatomic) NSMutableDictionary *propertyValues;
@property (retain, nonatomic) NSMutableSet *propertiesLeftToFetch;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) _Bool deviceInformationHasBeenLoaded;
@property (retain, nonatomic) NSMutableArray *pendingDeviceInformationLoadedBlocks;
@property (readonly) NSString *manufacturerName;
@property (readonly) NSString *modelNumber;
@property (readonly) NSString *serialNumber;
@property (readonly) NSString *hardwareRevision;
@property (readonly) NSString *firmwareRevision;
@property (readonly) NSString *softwareRevision;
@property (nonatomic) _Bool fetchLimitedCharacteristics;

+ (long long)serviceType;
+ (id)serviceUUID;
+ (id)implementedProperties;

- (id)initWithServiceManager:(id)arg1 peripheral:(id)arg2 advertisementData:(id)arg3 profile:(id)arg4;
- (void)_startDeviceInformationLoadingTimeoutTimer;
- (id)_propertyValueForPropertyName:(id)arg1;
- (void)_queue_setDeviceInformationHasBeenLoaded;
- (void)_queue_readProperty:(id)arg1;
- (void)_queue_peripheral:(id)arg1 didDiscoverCharacteristic:(id)arg2;
- (void)_queue_peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;
- (id)_propertyValueForCharacteristic:(id)arg1;
- (void)performWhenDeviceInformationHasBeenLoaded:(CDUnknownBlockType)arg1;
- (void)readProperty:(id)arg1;
- (void)peripheral:(id)arg1 didDiscoverCharacteristic:(id)arg2;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 updateTime:(id)arg3 error:(id)arg4;

@end
