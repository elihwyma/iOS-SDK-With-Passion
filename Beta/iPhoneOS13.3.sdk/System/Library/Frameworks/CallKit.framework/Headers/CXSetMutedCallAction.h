/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <CallKit/CXCallAction.h>

@interface CXSetMutedCallAction : CXCallAction

{
    _Bool _muted;
}

@property (nonatomic, getter=isMuted) _Bool muted;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)customDescription;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (id)initWithCallUUID:(id)arg1 muted:(_Bool)arg2;

@end
