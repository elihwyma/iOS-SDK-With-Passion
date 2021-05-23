/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskRequest.h>

@interface CRKWakeScreenRequest : CATTaskRequest

{
    _Bool _shouldBecomeExclusive;
}

@property (nonatomic) _Bool shouldBecomeExclusive;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
