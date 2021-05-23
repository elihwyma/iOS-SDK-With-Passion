/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskRequest.h>

@class NSURL;

@interface CRKFetchInstructorEndpointRequest : CATTaskRequest

{
    NSURL *_classroomAppBundleURL;
}

@property (retain, nonatomic) NSURL *classroomAppBundleURL;

+ (_Bool)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
