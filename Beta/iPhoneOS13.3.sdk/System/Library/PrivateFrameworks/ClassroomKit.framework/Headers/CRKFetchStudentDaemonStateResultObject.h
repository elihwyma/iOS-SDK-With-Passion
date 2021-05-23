/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskResultObject.h>

@class NSDictionary;

@interface CRKFetchStudentDaemonStateResultObject : CATTaskResultObject

{
    NSDictionary *_stateDictionary;
}

@property (copy, nonatomic) NSDictionary *stateDictionary;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
