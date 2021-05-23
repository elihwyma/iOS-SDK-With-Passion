/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <CallKit/CXCallAction.h>

@interface CXSetVideoPresentationStateCallAction : CXCallAction

{
    long long _videoPresentationState;
}

@property (nonatomic) long long videoPresentationState;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)customDescription;
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (id)sanitizedCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithCallUUID:(id)arg1 videoPresentationState:(long long)arg2;

@end
