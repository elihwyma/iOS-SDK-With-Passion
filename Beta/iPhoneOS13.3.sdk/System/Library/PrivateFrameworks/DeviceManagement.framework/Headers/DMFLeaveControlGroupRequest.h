/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@class DMFControlGroupIdentifier, NSArray;

@interface DMFLeaveControlGroupRequest

{
    DMFControlGroupIdentifier *_groupIdentifier;
    NSArray *_leaderIdentifiers;
}

@property (retain, nonatomic) DMFControlGroupIdentifier *groupIdentifier;
@property (copy, nonatomic) NSArray *leaderIdentifiers;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
