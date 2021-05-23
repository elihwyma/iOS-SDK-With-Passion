/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <HMFoundation/HMFObject.h>

@class NSDate, NSNumber, NSString;

@interface HAPCharacteristicEvent : HMFObject

{
    NSString *_serverIdentifier;
    NSNumber *_accessoryInstanceID;
    NSNumber *_serviceInstanceID;
    NSNumber *_characteristicInstanceID;
    id _value;
    NSDate *_updateTime;
    NSNumber *_stateNumber;
}

@property (copy, nonatomic, readonly) NSString *serverIdentifier;
@property (copy, nonatomic, readonly) NSNumber *accessoryInstanceID;
@property (copy, nonatomic, readonly) NSNumber *serviceInstanceID;
@property (copy, nonatomic, readonly) NSNumber *characteristicInstanceID;
@property (copy, nonatomic, readonly) id value;
@property (nonatomic, readonly) NSDate *updateTime;
@property (nonatomic, readonly) NSNumber *stateNumber;

+ (id)eventWithCharacteristic:(id)arg1;

- (id)init;
- (id)initWithCharacteristic:(id)arg1;

@end
