/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface SFCompanionService : NSObject

{
    NSString *_deviceName;
    NSString *_deviceID;
    NSString *_serviceType;
    NSString *_managerID;
    NSString *_ipAddress;
    NSString *_identifier;
    NSNumber *_nsxpcVersion;
}

@property (copy) NSString *deviceID;
@property (copy) NSString *deviceName;
@property (copy) NSString *serviceType;
@property (copy) NSString *managerID;
@property (copy) NSString *ipAddress;
@property (copy) NSString *identifier;
@property (copy) NSNumber *nsxpcVersion;

+ (_Bool)supportsSecureCoding;
+ (id)serviceFromDictionary:(id)arg1;
+ (id)serviceFromAuthorData:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithServiceName:(id)arg1;
- (id)messageData;
- (_Bool)isEqualToService:(id)arg1;

@end
