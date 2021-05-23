/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskRequest.h>

@class NSURL;

@interface CRKFetchResourceRequest : CATTaskRequest

{
    NSURL *_resourceURL;
}

@property (copy, nonatomic) NSURL *resourceURL;

+ (_Bool)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
