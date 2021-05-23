/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskResultObject.h>

@class NSArray, NSSet;

@interface CRKFetchCourseInvitationsResultObject : CATTaskResultObject

{
    NSArray *_courseInvitations;
    NSSet *_acceptedInvitationIdentifiers;
}

@property (retain, nonatomic) NSArray *courseInvitations;
@property (copy, nonatomic) NSSet *acceptedInvitationIdentifiers;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
