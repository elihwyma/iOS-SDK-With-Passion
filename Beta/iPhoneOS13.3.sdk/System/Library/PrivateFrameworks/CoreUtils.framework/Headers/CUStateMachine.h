/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class CUState, NSArray, NSMutableArray, NSPointerArray;

@interface CUStateMachine : NSObject

{
    CUState *_currentState;
    NSMutableArray *_eventQueue;
    _Bool _dispatching;
    NSPointerArray *_lcaPath;
    _Bool _started;
    CUState *_targetState;
    CUState *_initialState;
    NSArray *_states;
}

@property (retain, nonatomic) CUState *initialState;
@property (retain, nonatomic) NSArray *states;

- (void)dealloc;
- (void)invalidate;
- (void)start;
- (void)dispatchEvent:(id)arg1;
- (void)transitionToState:(id)arg1;
- (void)_firstTimeInit;

@end
