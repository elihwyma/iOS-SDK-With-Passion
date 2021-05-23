/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <HMFoundation/HMFObject.h>

@class HAPCharacteristic;

@interface HAPCharacteristicConfigurationRequestTuple : HMFObject

{
    _Bool _broadcastEnable;
    HAPCharacteristic *_characteristic;
    unsigned long long _broadcastInterval;
}

@property (retain, nonatomic) HAPCharacteristic *characteristic;
@property (nonatomic) _Bool broadcastEnable;
@property (nonatomic) unsigned long long broadcastInterval;

+ (id)configurationTupleForCharacteristic:(id)arg1 broadcastEnable:(_Bool)arg2 broadcastInterval:(unsigned long long)arg3;

@end
