/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskResultObject.h>

@class NSDictionary;

@interface CRKFetchClassroomConfigurationResultObject : CATTaskResultObject

{
    NSDictionary *_configuration;
    NSDictionary *_configurationsByType;
}

@property (copy, nonatomic) NSDictionary *configuration;
@property (copy, nonatomic) NSDictionary *configurationsByType;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
