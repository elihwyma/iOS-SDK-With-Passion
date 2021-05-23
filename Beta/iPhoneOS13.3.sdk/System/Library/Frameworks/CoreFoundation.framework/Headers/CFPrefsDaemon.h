/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSObject.h>

@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface CFPrefsDaemon : NSObject

{
    NSObject<OS_xpc_object> *_listener;
    const char *_name;
    int _role;
    struct __CFSet *_sourceCache;
    struct os_unfair_lock_s _sourceCacheLock;
    _Bool _testMode;
    _Atomic unsigned int *_shmem;
}

- (_Atomic unsigned int *)shmem;
- (void)synchronousWithSourceCache:(CDUnknownBlockType)arg1;
- (void)withSources:(CDUnknownBlockType)arg1;
- (void)withSourceForDomain:(struct __CFString *)arg1 inContainer:(struct __CFString *)arg2 user:(struct __CFString *)arg3 byHost:(_Bool)arg4 managed:(_Bool)arg5 managedUsesContainer:(_Bool)arg6 cloudStoreEntitlement:(id)arg7 cloudConfigurationPath:(struct __CFString *)arg8 performWithSourceLock:(CDUnknownBlockType)arg9 afterReleasingSourceLock:(CDUnknownBlockType)arg10;
- (void)getShmemName:(char *)arg1 bufLen:(unsigned long long)arg2;
- (void)handleError:(id)arg1;
- (void)handleSourceMessage:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)handleFlushManagedMessage:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)handleAgentCheckInMessage:(id)arg1;
- (void)handleFlushSourceForDomainMessage:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)handleMultiMessage:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)handleUserDeletedMessage:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)handleSimulateTimerSynchronizeForTesting;
- (void)logDomainInconsistencyForProcess:(int)arg1 message:(id)arg2 source:(id)arg3;
- (void)handleMessage:(id)arg1 fromPeer:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (void)_initializeShmemPage:(_Atomic unsigned int **)arg1;
- (unsigned int)userID;
- (void)flushDomain:(const char *)arg1 inAgentForUser:(struct __CFString *)arg2;
- (void)flushDomainInDaemon:(const char *)arg1;
- (id)initWithRole:(int)arg1 testMode:(_Bool)arg2;
- (int)role;
- (_Bool)isInTestMode;
- (void)checkIn;
- (id)listener;

@end
