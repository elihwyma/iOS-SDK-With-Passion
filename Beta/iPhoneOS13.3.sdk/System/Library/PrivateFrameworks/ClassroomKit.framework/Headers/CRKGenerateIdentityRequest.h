/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskRequest.h>

@class NSString;

@interface CRKGenerateIdentityRequest : CATTaskRequest

{
    NSString *_commonName;
}

@property (copy, nonatomic) NSString *commonName;

+ (_Bool)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
