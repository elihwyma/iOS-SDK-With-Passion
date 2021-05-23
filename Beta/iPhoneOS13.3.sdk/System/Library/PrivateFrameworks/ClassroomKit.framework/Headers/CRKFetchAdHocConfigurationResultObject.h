/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskResultObject.h>

@class NSDictionary;

@interface CRKFetchAdHocConfigurationResultObject : CATTaskResultObject

{
    NSDictionary *_configuration;
}

@property (copy, nonatomic) NSDictionary *configuration;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
