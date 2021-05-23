/*
 Image: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
 */

#import <Foundation/NSObject.h>

@class NFStateMachine, NSMutableArray, NSString, NSTimer;

@interface SWTimeoutManager : NSObject

{
    NSMutableArray *_timeoutBlocks;
    NFStateMachine *_stateMachine;
    NSTimer *_timer;
}

@property (nonatomic, readonly) NSMutableArray *timeoutBlocks;
@property (nonatomic, readonly) NFStateMachine *stateMachine;
@property (retain, nonatomic) NSTimer *timer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)onTimeout:(CDUnknownBlockType)arg1;
- (void)didReceiveMessage:(id)arg1 securityOrigin:(id)arg2;
- (id)initWithTimeout:(double)arg1 messageHandlerManager:(id)arg2 documentStateProvider:(id)arg3;

@end
