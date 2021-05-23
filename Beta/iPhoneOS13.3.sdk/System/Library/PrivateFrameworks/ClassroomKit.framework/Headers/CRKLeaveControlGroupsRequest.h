/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskRequest.h>

@class NSSet;

@interface CRKLeaveControlGroupsRequest : CATTaskRequest

{
    NSSet *_groupIdentifiers;
}

@property (retain, nonatomic) NSSet *groupIdentifiers;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
