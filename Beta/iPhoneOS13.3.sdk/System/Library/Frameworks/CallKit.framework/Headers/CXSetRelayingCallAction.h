/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <CallKit/CXCallAction.h>

@interface CXSetRelayingCallAction : CXCallAction

{
    _Bool _relaying;
}

@property (nonatomic, getter=isRelaying) _Bool relaying;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)customDescription;
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (id)sanitizedCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithCallUUID:(id)arg1 relaying:(_Bool)arg2;

@end
