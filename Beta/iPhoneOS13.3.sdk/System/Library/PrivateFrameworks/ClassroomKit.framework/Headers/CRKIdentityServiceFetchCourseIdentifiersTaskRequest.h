/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskRequest.h>

@class NSSet;

@interface CRKIdentityServiceFetchCourseIdentifiersTaskRequest : CATTaskRequest

{
    NSSet *_asmCourseIDs;
}

@property (copy, nonatomic) NSSet *asmCourseIDs;

+ (_Bool)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
