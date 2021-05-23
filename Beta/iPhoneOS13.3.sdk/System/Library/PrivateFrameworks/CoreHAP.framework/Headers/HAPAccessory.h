/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <HMFoundation/HMFObject.h>

@class HAPAccessoryServer, HMFMACAddress, NSArray, NSNumber, NSObject, NSString;

@protocol HAPAccessoryDelegate, OS_dispatch_queue;

@interface HAPAccessory : HMFObject

{
    _Bool _reachable;
    _Bool _primary;
    _Bool _supportsRelay;
    id <HAPAccessoryDelegate> _delegate;
    HAPAccessoryServer *_server;
    NSString *_identifier;
    NSNumber *_instanceID;
    NSArray *_services;
    NSString *_serverIdentifier;
    long long _linkType;
    HMFMACAddress *_bluetoothClassicMacAddress;
    NSString *_uniqueIdentifier;
    NSString *_name;
    NSString *_model;
    NSString *_manufacturer;
    NSString *_serialNumber;
    NSString *_firmwareVersion;
    NSString *_productData;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (weak, nonatomic) HAPAccessoryServer *server;
@property (nonatomic, getter=isPrimary) _Bool primary;
@property (nonatomic, getter=isReachable) _Bool reachable;
@property (nonatomic) _Bool supportsRelay;
@property (copy, nonatomic) NSNumber *instanceID;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (retain, nonatomic) NSArray *services;
@property (copy, nonatomic) NSString *serverIdentifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *manufacturer;
@property (copy, nonatomic) NSString *serialNumber;
@property (copy, nonatomic) NSString *firmwareVersion;
@property (copy, nonatomic) NSString *productData;
@property (retain) NSObject<OS_dispatch_queue> *workQueue;
@property (weak, nonatomic) id <HAPAccessoryDelegate> delegate;
@property (nonatomic, readonly, getter=isPaired) _Bool paired;
@property (copy, nonatomic, readonly) NSNumber *category;
@property (nonatomic, readonly) long long linkType;
@property (copy) HMFMACAddress *bluetoothClassicMacAddress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)productDataStringFromData:(id)arg1;
+ (_Bool)isAccessoryPairedWithIdentifier:(id)arg1;
+ (id)serverIdentifierWithUniqueIdentifier:(id)arg1;
+ (id)instanceIDForUniqueIdentifier:(id)arg1;
+ (_Bool)isAccessoryPrimaryWithUniqueIdentifier:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (void)invalidate;
- (_Bool)_isReachable;
- (_Bool)mergeObject:(id)arg1;
- (_Bool)shouldMergeObject:(id)arg1;
- (id)initWithServer:(id)arg1 instanceID:(id)arg2;
- (id)initWithServer:(id)arg1 instanceID:(id)arg2 parsedServices:(id)arg3;
- (void)readCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)writeCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)writeCharacteristicValue:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)readValueForCharacteristic:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)characteristicsOfType:(id)arg1;
- (id)servicesOfType:(id)arg1;
- (_Bool)_validateCharacteristicValues;
- (_Bool)_updateAndValidateServices;
- (void)_setReachable:(_Bool)arg1;
- (_Bool)_updateService:(id)arg1;
- (_Bool)_updateForAccessoryInformationService;
- (id)characteristicOfType:(id)arg1 serviceType:(id)arg2;

@end
