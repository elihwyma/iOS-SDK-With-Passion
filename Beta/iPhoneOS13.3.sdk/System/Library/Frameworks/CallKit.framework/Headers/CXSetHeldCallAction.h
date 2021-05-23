/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <CallKit/CXCallAction.h>

@interface CXSetHeldCallAction : CXCallAction

{
    _Bool _onHold;
}

@property (nonatomic, getter=isOnHold) _Bool onHold;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)customDescription;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (id)initWithCallUUID:(id)arg1 onHold:(_Bool)arg2;

@end
