/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskResultObject.h>

@class NSNumber;

@interface CRKBuildCloudSchemaResultObject : CATTaskResultObject

{
    NSNumber *_success;
}

@property (nonatomic) NSNumber *success;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
