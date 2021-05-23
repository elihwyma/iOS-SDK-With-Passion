/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskRequest.h>

@interface CRKSetClassroomBadgeCountRequest : CATTaskRequest

{
    long long _badgeCount;
}

@property (nonatomic) long long badgeCount;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
