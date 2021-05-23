/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskRequest.h>

@class CRKCourseInvitation;

@interface CRKJoinControlGroupRequest : CATTaskRequest

{
    CRKCourseInvitation *_invitation;
}

@property (retain, nonatomic) CRKCourseInvitation *invitation;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
