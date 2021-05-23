/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

#import <Catalyst/CATTaskResultObject.h>

@class NSUUID;

@interface DMFBeginTransactionResultObject : CATTaskResultObject

{
    NSUUID *_UUID;
}

@property (copy, nonatomic, readonly) NSUUID *UUID;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1;

@end
