/*
 Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

#import <Foundation/NSObject.h>

@class GKStateMachine;

@interface GKState : NSObject

{
    GKStateMachine *_stateMachine;
}

@property (weak, nonatomic, readonly) GKStateMachine *stateMachine;

+ (id)state;

- (id)init;
- (void)didEnterWithPreviousState:(id)arg1;
- (void)willExitWithNextState:(id)arg1;
- (void)updateWithDeltaTime:(double)arg1;
- (_Bool)isValidNextState:(Class)arg1;
- (void)_setStateMachine:(id)arg1;

@end
