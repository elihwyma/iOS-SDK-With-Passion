/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class FBApplicationProcess, FBProcessState;

@interface SBApplicationProcessState : NSObject

{
    FBApplicationProcess *_process;
    FBProcessState *_processState;
    _Bool _isBeingDebugged;
}

@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly, getter=isRunning) _Bool running;
@property (nonatomic, readonly, getter=isForeground) _Bool foreground;
@property (nonatomic, readonly) long long taskState;
@property (nonatomic, readonly) long long visibility;
@property (nonatomic, readonly) _Bool isBeingDebugged;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)_initWithProcess:(id)arg1 stateSnapshot:(id)arg2;

@end
