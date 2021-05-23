/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <FrontBoard/BSTransaction.h>

@class NSString;

@interface SBSceneLayoutSynchronizeTransitionTransaction : BSTransaction

{
    NSString *_debugName;
}

- (id)init;
- (void)synchronize;
- (_Bool)_canBeInterrupted;
- (id)_graphNodeDebugName;
- (id)initWithDebugName:(id)arg1;

@end
