/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@class CTDeviceIdentifier, NSArray;

@interface CTRemoteDevice : NSObject

{
    CTDeviceIdentifier *_deviceID;
    NSArray *_remotePlans;
}

@property (retain, nonatomic) CTDeviceIdentifier *deviceID;
@property (retain, nonatomic) NSArray *remotePlans;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)deviceType;
- (id)deviceName;
- (id)EID;

@end
