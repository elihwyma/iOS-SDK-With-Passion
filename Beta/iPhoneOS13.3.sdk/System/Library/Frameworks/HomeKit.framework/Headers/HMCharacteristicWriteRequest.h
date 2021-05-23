/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/HMCharacteristicRequest.h>

@interface HMCharacteristicWriteRequest : HMCharacteristicRequest

{
    id _value;
}

@property (nonatomic, readonly) id value;

+ (id)writeRequestWithCharacteristic:(id)arg1 value:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCharacteristic:(id)arg1 value:(id)arg2;

@end
