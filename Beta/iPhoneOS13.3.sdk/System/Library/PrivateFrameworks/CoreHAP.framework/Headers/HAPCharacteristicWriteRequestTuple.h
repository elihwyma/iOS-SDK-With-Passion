/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <HMFoundation/HMFObject.h>

@class HAPCharacteristic, NSData, NSNumber;

@interface HAPCharacteristicWriteRequestTuple : HMFObject

{
    _Bool _timedWrite;
    _Bool _includeResponseValue;
    HAPCharacteristic *_characteristic;
    id _value;
    NSData *_authorizationData;
    unsigned long long _writeType;
    NSNumber *_enableEvents;
}

@property (retain, nonatomic) HAPCharacteristic *characteristic;
@property (retain, nonatomic) id value;
@property (retain, nonatomic) NSData *authorizationData;
@property (nonatomic) _Bool timedWrite;
@property (nonatomic) unsigned long long writeType;
@property (nonatomic) _Bool includeResponseValue;
@property (retain, nonatomic) NSNumber *enableEvents;

+ (id)writeRequestTupleForCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3 timedWrite:(_Bool)arg4 responseValue:(_Bool)arg5 type:(unsigned long long)arg6;

@end
