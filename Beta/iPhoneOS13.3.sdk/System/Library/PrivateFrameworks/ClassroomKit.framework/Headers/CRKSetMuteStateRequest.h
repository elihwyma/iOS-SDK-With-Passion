/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskRequest.h>

@interface CRKSetMuteStateRequest : CATTaskRequest

{
    _Bool _mute;
}

@property (nonatomic, getter=shouldMute) _Bool mute;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
