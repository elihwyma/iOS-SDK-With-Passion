/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <Foundation/NSObject.h>

#import <FrontBoard/Swift-Protocol.h>

@class FBSystemShellInitializationContext, NSMutableArray, NSMutableSet, NSString, RBSAssertion;

@interface FBSystemShell : NSObject <Swift>

{
    FBSystemShellInitializationContext *_initializationContext;
    unsigned long long _state;
    id _observerToken;
    RBSAssertion *_runningAssertion;
    struct os_unfair_lock_s _lock;
    RBSAssertion *_lock_preventSleepAssertion;
    NSMutableSet *_lock_preventIdleSleepReasons;
    NSMutableArray *_lock_blocksToRunWhenReady;
}

@property (nonatomic, readonly) unsigned long long _state;
@property (nonatomic, readonly) FBSystemShellInitializationContext *initializationContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (_Bool)systemApplicationIsAliveForWatchdog:(id)arg1;
+ (id)_createSingletonWithOptions:(id)arg1;

- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)_setState:(unsigned long long)arg1;
- (id)_initWithOptions:(id)arg1;
- (void)readyForInteraction;
- (void)_setSystemIdleSleepDisabled:(_Bool)arg1 forReason:(id)arg2;
- (void)_addBlockToExecuteWhenReady:(CDUnknownBlockType)arg1;
- (id)_bksSystemApplication;
- (void)sendActionsToBackBoard:(id)arg1;
- (void)_initializationComplete;

@end
