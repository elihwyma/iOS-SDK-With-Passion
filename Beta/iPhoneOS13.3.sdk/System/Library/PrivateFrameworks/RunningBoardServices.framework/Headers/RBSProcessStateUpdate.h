/*
 Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
 */

#import <NSObject.h>

@class RBSProcessHandle, RBSProcessState;

@interface RBSProcessStateUpdate : NSObject

{
    RBSProcessHandle *_process;
    RBSProcessState *_state;
    RBSProcessState *_previousState;
}

@property (nonatomic, readonly) RBSProcessHandle *process;
@property (nonatomic, readonly) RBSProcessState *state;
@property (nonatomic, readonly) RBSProcessState *previousState;

+ (id)updateWithState:(id)arg1 previousState:(id)arg2;

- (id)description;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;

@end
