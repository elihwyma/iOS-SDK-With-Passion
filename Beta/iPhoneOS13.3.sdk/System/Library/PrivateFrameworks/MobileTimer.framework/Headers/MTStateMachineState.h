/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

#import <MobileTimer/Swift-Protocol.h>

@class MTStateMachine, NSString;

@interface MTStateMachineState : NSObject <Swift>

{
    MTStateMachine *_stateMachine;
}

@property (weak, nonatomic) MTStateMachine *stateMachine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)didEnterWithPreviousState:(id)arg1;
- (id)initWithStateMachine:(id)arg1;
- (void)willExitWithNextState:(id)arg1;
- (void)willEnterWithPreviousState:(id)arg1;
- (void)didExitWithNextState:(id)arg1;

@end
