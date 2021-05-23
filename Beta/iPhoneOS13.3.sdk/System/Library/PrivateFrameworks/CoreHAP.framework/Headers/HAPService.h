/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <HMFoundation/HMFObject.h>

@class CBService, HAPAccessory, NSArray, NSNumber, NSString;

@interface HAPService : HMFObject

{
    NSString *_type;
    NSNumber *_instanceID;
    HAPAccessory *_accessory;
    NSArray *_characteristics;
    NSArray *_linkedServices;
    unsigned long long _serviceProperties;
}

@property (retain, nonatomic, setter=setCBService:) CBService *cbService;
@property (retain, nonatomic) NSArray *linkedServices;
@property (nonatomic) unsigned long long serviceProperties;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSNumber *instanceID;
@property (weak, nonatomic) HAPAccessory *accessory;
@property (retain, nonatomic) NSArray *characteristics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isEqual:(id)arg1;
- (_Bool)mergeObject:(id)arg1;
- (_Bool)shouldMergeObject:(id)arg1;
- (_Bool)isEqualToService:(id)arg1;
- (id)initWithType:(id)arg1 instanceID:(id)arg2 parsedCharacteristics:(id)arg3 serviceProperties:(unsigned long long)arg4 linkedServices:(id)arg5;
- (_Bool)_updateAndValidateCharacteristics;
- (id)propertiesDescription;
- (_Bool)_validateServiceCharacteristics;
- (_Bool)_updateCharacteristic:(id)arg1;
- (_Bool)_validateMandatoryCharacteristics;
- (id)initWithType:(id)arg1 instanceID:(id)arg2;
- (id)characteristicsOfType:(id)arg1;

@end
