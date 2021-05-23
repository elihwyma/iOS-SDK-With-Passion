/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

#import <FrontBoardServices/Swift-Protocol.h>

@class BSMachPortTaskNameRight, BSProcessHandle, NSString, RBSProcessIdentity;

@interface FBSProcess : NSObject <Swift>

{
    BSProcessHandle *_handle;
    RBSProcessIdentity *_identity;
    BSMachPortTaskNameRight *_taskNameRight;
    _Bool _running;
}

@property (nonatomic, readonly, getter=isRunning) _Bool running;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) int pid;
@property (retain, nonatomic, readonly) BSProcessHandle *handle;
@property (retain, nonatomic, readonly) BSMachPortTaskNameRight *taskNameRight;
@property (retain, nonatomic, readonly) RBSProcessIdentity *identity;

+ (id)currentProcess;

- (id)init;
- (void)dealloc;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)_watchdogStarted:(id)arg1;
- (void)_watchdogStopped:(id)arg1;
- (_Bool)_watchdog:(id)arg1 shouldTerminateWithDeclineReason:(out id *)arg2;
- (id)_watchdog:(id)arg1 terminationRequestForViolatedProvision:(id)arg2 error:(id)arg3;
- (void)_terminateWithRequest:(id)arg1 forWatchdog:(id)arg2;
- (id)_initForCurrentProcess;

@end
