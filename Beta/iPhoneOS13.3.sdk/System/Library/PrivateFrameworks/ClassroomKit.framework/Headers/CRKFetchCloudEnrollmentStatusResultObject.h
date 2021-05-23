/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskResultObject.h>

@interface CRKFetchCloudEnrollmentStatusResultObject : CATTaskResultObject

{
    long long _cloudEnrollmentStatus;
}

@property (nonatomic) long long cloudEnrollmentStatus;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
