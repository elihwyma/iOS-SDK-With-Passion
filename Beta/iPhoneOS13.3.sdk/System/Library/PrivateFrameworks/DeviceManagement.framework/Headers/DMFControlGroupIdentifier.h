/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

#import <NSObject.h>

@class NSString, NSUUID;

@interface DMFControlGroupIdentifier : NSObject

{
    unsigned short _groupID;
    NSUUID *_organizationUUID;
}

@property (copy, nonatomic, readonly) NSUUID *organizationUUID;
@property (nonatomic, readonly) unsigned short groupID;
@property (copy, nonatomic, readonly) NSString *stringValue;

+ (id)new;
+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)initWithOrganizationUUID:(id)arg1 groupID:(unsigned short)arg2;
- (_Bool)isEqualToGroupIdentifier:(id)arg1;

@end
