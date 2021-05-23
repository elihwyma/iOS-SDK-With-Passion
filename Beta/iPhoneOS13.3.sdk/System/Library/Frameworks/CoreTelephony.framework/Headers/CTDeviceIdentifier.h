/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CTDeviceIdentifier : NSObject

{
    NSString *_deviceName;
    unsigned long long _deviceType;
    NSString *_EID;
}

@property (retain, nonatomic) NSString *deviceName;
@property (nonatomic) unsigned long long deviceType;
@property (retain, nonatomic) NSString *EID;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceType:(unsigned long long)arg1 EID:(id)arg2;

@end
