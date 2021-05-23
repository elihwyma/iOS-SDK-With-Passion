/*
 Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

#import <Foundation/NSObject.h>

@class GKState, NSDictionary;

@interface GKStateMachine : NSObject

{
    NSDictionary *_states;
    GKState *_currentState;
}

@property (nonatomic, readonly) GKState *currentState;

+ (id)stateMachineWithStates:(id)arg1;

- (id)init;
- (_Bool)enterState:(Class)arg1;
- (void)updateWithDeltaTime:(double)arg1;
- (id)initWithStates:(id)arg1;
- (id)stateForClass:(Class)arg1;
- (_Bool)canEnterState:(Class)arg1;
- (void)forceEnterState:(Class)arg1;
- (id)_instanceData;
- (id)_dotStringInstanceData;

@end
