/*
 Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

#import <CoreBluetooth/CBAttribute.h>

@class CBPeripheral, CBService, NSArray, NSData, NSNumber;

@interface CBCharacteristic : CBAttribute

{
    _Bool _isBroadcasted;
    _Bool _isNotifying;
    CBService *_service;
    unsigned long long _properties;
    NSData *_value;
    NSArray *_descriptors;
    unsigned long long _valueTimestamp;
    CBPeripheral *_peripheral;
    NSNumber *_handle;
    NSNumber *_valueHandle;
}

@property (nonatomic) CBService *service;
@property (nonatomic) unsigned long long properties;
@property (retain) NSData *value;
@property (retain) NSArray *descriptors;
@property _Bool isNotifying;
@property (nonatomic, readonly) unsigned long long valueTimestamp;
@property (nonatomic, readonly) CBPeripheral *peripheral;
@property (nonatomic, readonly) NSNumber *handle;
@property (nonatomic, readonly) NSNumber *valueHandle;
@property (readonly) _Bool isBroadcasted;

- (id)description;
- (void)invalidate;
- (id)initWithService:(id)arg1 dictionary:(id)arg2;
- (id)handleValueUpdated:(id)arg1;
- (id)handleValueWritten:(id)arg1;
- (id)handleValueBroadcasted:(id)arg1;
- (id)handleValueNotifying:(id)arg1;
- (id)handleDescriptorsDiscovered:(id)arg1;

@end
