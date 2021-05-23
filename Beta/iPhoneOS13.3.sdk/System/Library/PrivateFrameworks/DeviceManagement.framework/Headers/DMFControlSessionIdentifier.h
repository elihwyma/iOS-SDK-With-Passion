/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

#import <DeviceManagement/DMFControlGroupIdentifier.h>

@interface DMFControlSessionIdentifier : DMFControlGroupIdentifier

{
    unsigned short _port;
    unsigned int _leaderIP;
}

@property (nonatomic, readonly) unsigned int leaderIP;
@property (nonatomic, readonly) unsigned short port;
@property (nonatomic, readonly) DMFControlGroupIdentifier *groupIdentifier;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)stringValue;
- (id)initWithString:(id)arg1;
- (id)initWithOrganizationUUID:(id)arg1 groupID:(unsigned short)arg2;
- (id)initWithOrganizationUUID:(id)arg1 groupID:(unsigned short)arg2 leaderIP:(unsigned int)arg3 port:(unsigned short)arg4;
- (_Bool)isEqualToControlSessionIdentifier:(id)arg1;
- (id)initWithOrganizationUUID:(id)arg1 groupID:(unsigned short)arg2 leaderIP:(unsigned int)arg3;

@end
