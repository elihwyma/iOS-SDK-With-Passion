/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskResultObject.h>

@class NSDictionary;

@interface CRKIdentityServiceFetchCourseIdentifiersTaskResultObject : CATTaskResultObject

{
    NSDictionary *_classroomCourseIDsByASMCourseIDs;
}

@property (copy, nonatomic) NSDictionary *classroomCourseIDsByASMCourseIDs;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
