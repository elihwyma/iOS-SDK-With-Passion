/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskRequest.h>

@class DMFControlGroupIdentifier, NSNumber, NSString;

@interface CRKSetCoursePermissionRequest : CATTaskRequest

{
    DMFControlGroupIdentifier *_courseIdentifier;
    NSString *_feature;
    NSNumber *_permission;
}

@property (retain, nonatomic) DMFControlGroupIdentifier *courseIdentifier;
@property (retain, nonatomic) NSString *feature;
@property (retain, nonatomic) NSNumber *permission;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
