/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <CoreHAP/HAPAccessory.h>

@class HAPCharacteristic, NSString;

@interface HAPBridgedAccessory : HAPAccessory

{
    HAPCharacteristic *_reachabilityCharacteristic;
}

@property (weak, nonatomic) HAPCharacteristic *reachabilityCharacteristic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)shortDescription;
- (void)setReachable:(_Bool)arg1;
- (_Bool)mergeObject:(id)arg1;
- (_Bool)shouldMergeObject:(id)arg1;
- (_Bool)isPrimary;
- (void)accessoryServer:(id)arg1 didUpdateValueForCharacteristic:(id)arg2;
- (id)accessoryServerDidRequestCharacteristicsToRegisterForNotifications:(id)arg1;
- (id)initWithServer:(id)arg1 instanceID:(id)arg2 parsedServices:(id)arg3;
- (_Bool)__parseServices;
- (_Bool)__isReachable;
- (_Bool)__parseBridgeService:(id)arg1;
- (_Bool)mergeWithAccessory:(id)arg1;

@end
