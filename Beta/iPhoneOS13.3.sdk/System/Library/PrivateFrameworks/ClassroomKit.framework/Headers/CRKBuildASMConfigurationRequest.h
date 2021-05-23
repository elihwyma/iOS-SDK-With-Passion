/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskRequest.h>

@class DMFControlGroupIdentifier, NSDictionary;

@interface CRKBuildASMConfigurationRequest : CATTaskRequest

{
    NSDictionary *_existingASMConfiguration;
    DMFControlGroupIdentifier *_courseIdentifier;
}

@property (copy, nonatomic) NSDictionary *existingASMConfiguration;
@property (retain, nonatomic) DMFControlGroupIdentifier *courseIdentifier;

+ (_Bool)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
