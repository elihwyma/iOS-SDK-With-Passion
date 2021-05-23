/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <HMFoundation/HMFObject.h>

@class HAPCharacteristic, NSDate, NSError, NSNumber;

@interface HAPCharacteristicResponseTuple : HMFObject

{
    HAPCharacteristic *_characteristic;
    id _value;
    NSNumber *_stateNumber;
    NSDate *_valueUpdatedTime;
    NSError *_error;
}

@property (retain, nonatomic) HAPCharacteristic *characteristic;
@property (retain, nonatomic) id value;
@property (retain, nonatomic) NSNumber *stateNumber;
@property (retain, nonatomic) NSDate *valueUpdatedTime;
@property (retain, nonatomic) NSError *error;

+ (id)responseTupleForCharacteristic:(id)arg1 error:(id)arg2;

@end
