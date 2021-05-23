/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <HMFoundation/HMFObject.h>

@class CBCharacteristic, HAPCharacteristicMetadata, HAPService, HMFUnfairLock, NSDate, NSNumber, NSString;

@interface HAPCharacteristic : HMFObject

{
    HMFUnfairLock *_lock;
    _Bool _eventNotificationsEnabled;
    _Bool _shouldValidateValueAfterReading;
    NSDate *_valueUpdatedTime;
    id _value;
    NSNumber *_stateNumber;
    NSString *_type;
    NSNumber *_instanceID;
    HAPService *_service;
    unsigned long long _properties;
    HAPCharacteristicMetadata *_metadata;
    HAPCharacteristicMetadata *_accessoryMetadata;
}

@property (retain, nonatomic, setter=setCBCharacteristic:) CBCharacteristic *cbCharacteristic;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSNumber *instanceID;
@property (weak, nonatomic) HAPService *service;
@property (nonatomic) unsigned long long properties;
@property (nonatomic) _Bool eventNotificationsEnabled;
@property (copy, nonatomic) HAPCharacteristicMetadata *metadata;
@property (nonatomic, readonly) HAPCharacteristicMetadata *accessoryMetadata;
@property (retain, nonatomic) NSDate *valueUpdatedTime;
@property (nonatomic) _Bool shouldValidateValueAfterReading;
@property (copy, nonatomic, setter=setValue:) id value;
@property (nonatomic, readonly) NSNumber *stateNumber;
@property (nonatomic, readonly) _Bool supportsAdditionalAuthorizationData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isEqual:(id)arg1;
- (_Bool)mergeObject:(id)arg1;
- (_Bool)shouldMergeObject:(id)arg1;
- (void)setStateNumber:(id)arg1;
- (id)validateValue:(id)arg1 outValue:(id *)arg2;
- (id)initWithType:(id)arg1 instanceID:(id)arg2 value:(id)arg3 stateNumber:(id)arg4 properties:(unsigned long long)arg5 eventNotificationsEnabled:(_Bool)arg6 metadata:(id)arg7;
- (id)propertiesDescription;
- (_Bool)isEqualToCharacteristic:(id)arg1;
- (void)_updateMetadata:(id)arg1 withProvidedMetadata:(id)arg2;
- (id)_generateValidMetadata:(id)arg1;

@end
