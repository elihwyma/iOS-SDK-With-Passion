/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

#import <NSObject.h>

@class NSDate, NSString;

@interface DMFProvisioningProfile : NSObject

{
    NSString *_UUID;
    NSString *_name;
    NSDate *_expirationDate;
}

@property (copy, nonatomic, readonly) NSString *UUID;
@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSDate *expirationDate;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 name:(id)arg2 expirationDate:(id)arg3;

@end
