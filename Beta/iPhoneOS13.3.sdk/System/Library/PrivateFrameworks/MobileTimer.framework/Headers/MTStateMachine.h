/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

#import <MobileTimer/Swift-Protocol.h>

@class MTStateMachineState, NSString;

@protocol MTStateMachineDelegate, MTStateMachineInfoProvider;

@interface MTStateMachine : NSObject <Swift>

{
    MTStateMachineState *_currentState;
    id <MTStateMachineDelegate> _delegate;
    id <MTStateMachineInfoProvider> _infoProvider;
}

@property (retain, nonatomic) MTStateMachineState *currentState;
@property (weak, nonatomic) id <MTStateMachineDelegate> delegate;
@property (weak, nonatomic) id <MTStateMachineInfoProvider> infoProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithDelegate:(id)arg1;
- (void)enterState:(id)arg1;
- (id)initWithDelegate:(id)arg1 infoProvider:(id)arg2;
- (id)stateMachineLog;
- (id)stateMachineName;

@end
