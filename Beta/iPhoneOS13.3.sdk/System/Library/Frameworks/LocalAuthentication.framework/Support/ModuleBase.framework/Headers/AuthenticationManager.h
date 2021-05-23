/*
 Image: /System/Library/Frameworks/LocalAuthentication.framework/Support/ModuleBase.framework/ModuleBase
 */

#import <Foundation/NSObject.h>

@class AuthenticationInProgress, NSMutableArray;

@interface AuthenticationManager : NSObject

{
    AuthenticationInProgress *_runningAuthentication;
    CDUnknownBlockType _completionHandler;
    NSMutableArray *_idleBlocks;
    AuthenticationInProgress *_pendingAuthentication;
}

@property (nonatomic, readonly) AuthenticationInProgress *pendingAuthentication;
@property (nonatomic, readonly) AuthenticationInProgress *runningAuthentication;

+ (id)sharedInstance;

- (id)init;
- (long long)_priorityForPolicy:(long long)arg1;
- (_Bool)canStartAuthenticationWithPolicy:(long long)arg1;
- (void)_runAuthentication:(id)arg1;
- (void)_runIdleBlocks;
- (void)_runIdleBlocksNow;
- (id)runningMechanism;
- (void)authenticateForPolicy:(long long)arg1 constraintData:(id)arg2 internalInfo:(id)arg3 uiDelegate:(id)arg4 originator:(id)arg5 mechanism:(id)arg6 reply:(CDUnknownBlockType)arg7;
- (void)cancelWithError:(id)arg1 originatorId:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;
- (void)runWhenIdle:(CDUnknownBlockType)arg1;

@end
