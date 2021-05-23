/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskResultObject.h>

@class NSDictionary;

@interface CRKBuildASMConfigurationResultObject : CATTaskResultObject

{
    NSDictionary *_asmConfiguration;
}

@property (copy, nonatomic) NSDictionary *asmConfiguration;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
