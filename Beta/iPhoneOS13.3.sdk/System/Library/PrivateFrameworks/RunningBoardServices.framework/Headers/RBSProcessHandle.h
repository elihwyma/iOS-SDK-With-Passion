/*
 Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
 */

#import <NSObject.h>

@class BSAuditToken, BSMachPortTaskNameRight, BSProcessHandle, NSString, RBSProcessBundle, RBSProcessExitContext, RBSProcessIdentity, RBSProcessInstance, RBSProcessLimitations, RBSProcessMonitor, RBSProcessState;

@protocol OS_xpc_object;

@interface RBSProcessHandle : NSObject

{
    unsigned long long _ipcID;
    BSMachPortTaskNameRight *_lifePort;
    RBSProcessIdentity *_identity;
    RBSProcessMonitor *_monitor;
    BSProcessHandle *_legacyHandle;
    NSObject<OS_xpc_object> *_codedHandle;
    _Bool _reported;
    RBSProcessBundle *_bundle;
    RBSProcessInstance *_instance;
}

@property (nonatomic, readonly) BSMachPortTaskNameRight *lifePort;
@property (copy, nonatomic, readonly) RBSProcessInstance *instance;
@property (copy, nonatomic, readonly) BSAuditToken *auditToken;
@property (nonatomic, readonly, getter=isReported) _Bool reported;
@property (nonatomic, readonly) RBSProcessHandle *hostProcess;
@property (nonatomic, readonly) int pid;
@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) RBSProcessIdentity *identity;
@property (nonatomic, readonly) RBSProcessBundle *bundle;
@property (nonatomic, readonly) RBSProcessState *currentState;
@property (nonatomic, readonly) RBSProcessExitContext *lastExitContext;
@property (nonatomic, readonly) RBSProcessLimitations *activeLimitations;
@property (nonatomic, readonly, getter=isValid) _Bool valid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (_Bool)supportsBSXPCSecureCoding;
+ (id)currentProcess;
+ (void)clearAllHandles;
+ (id)handleForPredicate:(id)arg1 error:(out id *)arg2;
+ (id)_cachedHandleForKey:(id)arg1;
+ (id)_cacheHandle:(id)arg1;
+ (id)handleForIdentifier:(id)arg1 error:(out id *)arg2;
+ (id)handleForKey:(unsigned long long)arg1 fetchIfNeeded:(_Bool)arg2;
+ (id)handleForLegacyHandle:(id)arg1 error:(out id *)arg2;
+ (id)observeForImminentAssertionsExpiration:(CDUnknownBlockType)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentity:(id)arg1;
- (id)succinctDescription;
- (_Bool)matchesProcess:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (int)rbs_pid;
- (id)processPredicate;
- (void)plugInHandshakeComplete;
- (void)fullEncode:(id)arg1 forKey:(id)arg2;
- (id)currentStateMatchingDescriptor:(id)arg1;
- (void)_fullEncode:(id)arg1;
- (void)_keepAlive;
- (void)monitorForDeath:(CDUnknownBlockType)arg1;
- (void)intendToExitWith:(id)arg1;
- (id)initWithInstance:(id)arg1 lifePort:(id)arg2 bundleData:(id)arg3 reported:(_Bool)arg4;
- (id)legacyHandle;

@end
