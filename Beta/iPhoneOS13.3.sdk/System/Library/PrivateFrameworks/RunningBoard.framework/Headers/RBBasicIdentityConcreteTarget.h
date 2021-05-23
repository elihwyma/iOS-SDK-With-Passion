/*
 Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

#import <RunningBoard/RBConcreteTarget.h>

@class RBSProcessIdentity;

__attribute__((visibility("hidden")))
@interface RBBasicIdentityConcreteTarget : RBConcreteTarget

{
    RBSProcessIdentity *_identity;
}

- (id)description;
- (id)identity;
- (_Bool)isSystem;
- (id)createRBSTarget;
- (id)_initWithIdentity:(id)arg1;

@end
