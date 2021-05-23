/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskRequest.h>

@class DMFControlGroupIdentifier, NSArray;

@interface CRKLeaveControlGroupRequest : CATTaskRequest

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
