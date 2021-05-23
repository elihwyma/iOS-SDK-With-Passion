/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

#import <Catalyst/CATTaskResultObject.h>

@class NSArray;

@interface DMFFetchControlGroupIdentifiersResultObject : CATTaskResultObject

{
    NSArray *_groupIdentifiers;
}

@property (copy, nonatomic, readonly) NSArray *groupIdentifiers;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithGroupIdentifiers:(id)arg1;

@end
