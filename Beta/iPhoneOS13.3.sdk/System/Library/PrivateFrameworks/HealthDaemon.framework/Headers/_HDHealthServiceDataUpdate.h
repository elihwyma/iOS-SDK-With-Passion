/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDHealthServiceCharacteristic, HKDevice, NSError;

@interface _HDHealthServiceDataUpdate : NSObject

{
    unsigned long long _sessionIdentifier;
    HDHealthServiceCharacteristic *_characteristic;
    HKDevice *_device;
    NSError *_error;
}

@property (nonatomic, readonly) unsigned long long sessionIdentifier;
@property (nonatomic, readonly) HDHealthServiceCharacteristic *characteristic;
@property (nonatomic, readonly) HKDevice *device;
@property (nonatomic, readonly) NSError *error;

- (id)initWithSessionIdentifier:(unsigned long long)arg1 characteristic:(id)arg2 device:(id)arg3 error:(id)arg4;

@end
