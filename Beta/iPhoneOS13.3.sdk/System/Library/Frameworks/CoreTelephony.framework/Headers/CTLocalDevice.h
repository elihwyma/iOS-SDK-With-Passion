/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@class CTDeviceIdentifier, NSArray;

@interface CTLocalDevice : NSObject

{
    CTDeviceIdentifier *_deviceID;
    NSArray *_installedPlans;
}

@property (retain, nonatomic) CTDeviceIdentifier *deviceID;
@property (retain, nonatomic) NSArray *installedPlans;

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
