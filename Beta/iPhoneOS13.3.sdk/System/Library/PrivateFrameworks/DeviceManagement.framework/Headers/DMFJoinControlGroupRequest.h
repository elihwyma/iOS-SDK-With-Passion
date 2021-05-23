/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@class DMFControlGroupIdentifier, NSArray, NSDate;

@interface DMFJoinControlGroupRequest

{
    DMFControlGroupIdentifier *_groupIdentifier;
    NSArray *_leaderIdentifiers;
    NSDate *_expirationDate;
}

@property (retain, nonatomic) DMFControlGroupIdentifier *groupIdentifier;
@property (copy, nonatomic) NSArray *leaderIdentifiers;
@property (copy, nonatomic) NSDate *expirationDate;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
