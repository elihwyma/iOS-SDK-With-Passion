/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskRequest.h>

@class DMFControlGroupIdentifier;

@interface CRKFetchCoursePermissionsRequest : CATTaskRequest

{
    DMFControlGroupIdentifier *_courseIdentifier;
}

@property (retain, nonatomic) DMFControlGroupIdentifier *courseIdentifier;

+ (_Bool)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
