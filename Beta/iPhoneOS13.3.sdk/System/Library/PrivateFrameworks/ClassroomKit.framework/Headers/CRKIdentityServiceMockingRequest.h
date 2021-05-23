/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskRequest.h>

@interface CRKIdentityServiceMockingRequest : CATTaskRequest

{
    _Bool _shouldDisable;
}

@property (nonatomic) _Bool shouldDisable;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
