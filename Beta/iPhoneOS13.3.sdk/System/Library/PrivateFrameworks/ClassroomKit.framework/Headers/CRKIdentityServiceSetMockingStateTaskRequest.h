/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskRequest.h>

@interface CRKIdentityServiceSetMockingStateTaskRequest : CATTaskRequest

{
    _Bool _mockingEnabled;
}

@property (nonatomic, getter=isMockingEnabled) _Bool mockingEnabled;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
