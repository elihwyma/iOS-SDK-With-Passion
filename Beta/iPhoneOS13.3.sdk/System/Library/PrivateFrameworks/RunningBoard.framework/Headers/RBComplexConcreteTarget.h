/*
 Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

#import <RunningBoard/RBConcreteTarget.h>

@class NSString, RBProcess, RBSProcessIdentity;

__attribute__((visibility("hidden")))
@interface RBComplexConcreteTarget : RBConcreteTarget

{
    NSString *_description;
    RBProcess *_process;
    RBSProcessIdentity *_identity;
    NSString *_environment;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)environment;
- (id)identity;
- (id)process;
- (_Bool)isSystem;
- (id)createRBSTarget;
- (id)_initWithProcess:(id)arg1 identity:(id)arg2 environment:(id)arg3;

@end
