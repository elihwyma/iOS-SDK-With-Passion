/*
 Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

#import <Foundation/NSObject.h>

@class RBProcessState, RBSProcessIdentity;

@interface RBProcessStateChange : NSObject

{
    RBSProcessIdentity *_identity;
    RBProcessState *_originalState;
    RBProcessState *_updatedState;
}

@property (nonatomic, readonly) RBSProcessIdentity *identity;
@property (nonatomic, readonly) RBProcessState *originalState;
@property (nonatomic, readonly) RBProcessState *updatedState;

- (id)initWithIdentity:(id)arg1 originalState:(id)arg2 updatedState:(id)arg3;
- (id)changeByApplyingChange:(id)arg1;

@end
