/*
 Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

#import <RunningBoard/RBConcreteTarget.h>

@class RBProcess;

__attribute__((visibility("hidden")))
@interface RBBasicProcessConcreteTarget : RBConcreteTarget

{
    RBProcess *_process;
}

- (id)description;
- (id)identity;
- (id)process;
- (_Bool)isSystem;
- (id)createRBSTarget;
- (id)_initWithProcess:(id)arg1;

@end
