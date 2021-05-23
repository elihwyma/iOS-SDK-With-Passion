/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskResultObject.h>

@class NSDictionary;

@interface CRKFetchCoursePermissionsResultObject : CATTaskResultObject

{
    NSDictionary *_permissionsByFeature;
}

@property (copy, nonatomic) NSDictionary *permissionsByFeature;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
