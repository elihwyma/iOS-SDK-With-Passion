/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class SBInitialRestartState;

@interface SBStartupTransitionFactory : NSObject

{
    SBInitialRestartState *_initialRestartState;
}

- (id)initWithInitialRestartState:(id)arg1;
- (id)transitionForContext:(id)arg1 outDestination:(unsigned long long *)arg2;
- (id)_transactionForDestination:(unsigned long long)arg1 context:(id)arg2;

@end
