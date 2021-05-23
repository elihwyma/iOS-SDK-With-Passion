/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskResultObject.h>

@interface CRKFetchConfigurationTypeResultObject : CATTaskResultObject

{
    unsigned long long _configurationType;
}

@property (nonatomic) unsigned long long configurationType;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
