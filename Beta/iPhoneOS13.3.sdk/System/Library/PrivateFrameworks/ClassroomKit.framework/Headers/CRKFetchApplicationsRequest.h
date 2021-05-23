/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskRequest.h>

@class NSArray;

@interface CRKFetchApplicationsRequest : CATTaskRequest

{
    NSArray *_bundleIdentifiers;
}

@property (copy, nonatomic) NSArray *bundleIdentifiers;

+ (_Bool)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
