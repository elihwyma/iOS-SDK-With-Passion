/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskRequest.h>

@class NSSet;

@interface CRKIdentityServiceFetchCertificatesTaskRequest : CATTaskRequest

{
    NSSet *_classKitConsumerIDs;
}

@property (copy, nonatomic) NSSet *classKitConsumerIDs;

+ (_Bool)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
