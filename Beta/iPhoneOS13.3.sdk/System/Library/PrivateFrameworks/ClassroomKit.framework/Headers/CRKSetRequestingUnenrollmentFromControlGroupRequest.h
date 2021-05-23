/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskRequest.h>

@class DMFControlGroupIdentifier;

@interface CRKSetRequestingUnenrollmentFromControlGroupRequest : CATTaskRequest

{
    _Bool _requestingUnenroll;
    DMFControlGroupIdentifier *_groupIdentifier;
}

@property (retain, nonatomic) DMFControlGroupIdentifier *groupIdentifier;
@property (nonatomic) _Bool requestingUnenroll;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
