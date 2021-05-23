/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <Foundation/NSObject.h>

@class BSAction, BSAtomicSignal;

@interface FBSceneClientProviderInvalidationAction : NSObject

{
    BSAtomicSignal *_invalidated;
    BSAction *_action;
}

- (id)init;
- (void)invalidate;
- (id)initWithHandler:(CDUnknownBlockType)arg1;

@end
