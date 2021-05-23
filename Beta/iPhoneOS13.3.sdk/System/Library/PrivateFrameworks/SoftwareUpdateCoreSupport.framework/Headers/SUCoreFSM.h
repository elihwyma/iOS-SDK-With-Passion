/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateCoreSupport.framework/SoftwareUpdateCoreSupport
 */

#import <Foundation/NSString.h>

@class NSDictionary, NSMutableDictionary, NSObject, SUCoreDiag;

@protocol OS_dispatch_queue;

@interface SUCoreFSM : NSString

{
    _Bool _isActive;
    _Bool _performingEvent;
    NSString *_fsmName;
    NSString *_instanceName;
    NSString *_fullName;
    NSDictionary *_stateTable;
    NSString *_startState;
    SUCoreDiag *_diag;
    NSString *_currentState;
    NSMutableDictionary *_registeredActionTable;
    NSString *_pendingFollowupEvent;
    id _pendingFollowupInfo;
    NSObject<OS_dispatch_queue> *_extendedStateQueue;
}

@property (nonatomic, readonly) NSString *fullName;
@property (nonatomic, readonly) NSDictionary *stateTable;
@property (nonatomic, readonly) NSString *startState;
@property (nonatomic) _Bool isActive;
@property (retain, nonatomic) NSString *currentState;
@property (nonatomic, readonly) NSMutableDictionary *registeredActionTable;
@property (nonatomic) _Bool performingEvent;
@property (retain, nonatomic) NSString *pendingFollowupEvent;
@property (retain, nonatomic) id pendingFollowupInfo;
@property (retain, nonatomic, readonly) NSString *fsmName;
@property (retain, nonatomic, readonly) NSString *instanceName;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *extendedStateQueue;
@property (nonatomic, readonly) SUCoreDiag *diag;

- (id)_initMachine:(id)arg1 ofInstance:(id)arg2 withTable:(id)arg3 startingIn:(id)arg4 usingDelegate:(id)arg5 registeringAllInfoClass:(Class)arg6 registeringAndActivating:(_Bool)arg7;
- (void)_registerAllActions:(id)arg1 withInfoClass:(Class)arg2 stateTable:(id)arg3 actionTable:(id)arg4 loggingRegistration:(_Bool)arg5;
- (_Bool)_activateMachineWithStateTable:(id)arg1 withActionTable:(id)arg2;
- (id)_acceptEvent:(id)arg1 withInfo:(id)arg2 issueType:(id)arg3 attachedAction:(id *)arg4;
- (void)_performEvent:(id)arg1 withInfo:(id)arg2 issueType:(id)arg3 forCell:(id)arg4 attachedAction:(id)arg5 checkingAttached:(_Bool)arg6;
- (void)_registerAction:(id)arg1 ForEvent:(id)arg2 inState:(id)arg3 usingDelegate:(id)arg4 withInfoClass:(Class)arg5 actionTable:(id)arg6 loggingRegistration:(_Bool)arg7;
- (void)postEvent:(id)arg1 withInfo:(id)arg2;
- (void)_postEvent:(id)arg1 withInfo:(id)arg2;
- (void)postProtectedEvent:(id)arg1 withInfo:(id)arg2;
- (void)followupEvent:(id)arg1 withInfo:(id)arg2;
- (void)_simulateEventAlteration:(id)arg1 fsmEvent:(id *)arg2 eventInfo:(id *)arg3 attachedAction:(id *)arg4;
- (void)_triggerAction:(id)arg1 usingAttached:(id)arg2 onEvent:(id)arg3 inState:(id)arg4 withInfo:(id)arg5 nextState:(id)arg6;
- (id)initMachine:(id)arg1 withTable:(id)arg2 startingIn:(id)arg3;
- (id)initMachine:(id)arg1 ofInstance:(id)arg2 withTable:(id)arg3 startingIn:(id)arg4;
- (id)initMachine:(id)arg1 withTable:(id)arg2 startingIn:(id)arg3 usingDelegate:(id)arg4 registeringAllInfoClass:(Class)arg5;
- (id)initMachine:(id)arg1 ofInstance:(id)arg2 withTable:(id)arg3 startingIn:(id)arg4 usingDelegate:(id)arg5 registeringAllInfoClass:(Class)arg6;
- (void)teardownMachine;
- (void)registerAction:(id)arg1 ForEvent:(id)arg2 inState:(id)arg3 usingDelegate:(id)arg4 withInfoClass:(Class)arg5;
- (void)registerAllActions:(id)arg1 withInfoClass:(Class)arg2;
- (void)activateMachine;
- (void)postEvent:(id)arg1;
- (void)postProtectedEvent:(id)arg1;
- (void)followupEvent:(id)arg1;
- (id)copyCurrentState;

@end
