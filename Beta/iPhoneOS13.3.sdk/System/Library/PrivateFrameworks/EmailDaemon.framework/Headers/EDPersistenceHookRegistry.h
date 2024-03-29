/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@interface EDPersistenceHookRegistry : NSObject

{
    struct os_unfair_lock_s _lock;
    struct __CFDictionary *_hookRespondersBySelector;
    struct __CFDictionary *_methodSignaturesBySelector;
}

+ (id)_proxiedProtocols;

- (id)init;
- (void)dealloc;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)_forwardStackInvocation:(id)arg1;
- (void)registerMessageChangeHookResponder:(id)arg1;
- (void)registerProtectedDataReconciliationHookResponder:(id)arg1;
- (void)unregisterAllHookResponders;
- (void)registerAccountChangeHookResponder:(id)arg1;
- (void)unregisterHookResponder:(id)arg1;
- (void)registerActivityHookResponder:(id)arg1;
- (void)registerMessageDeliveryHookResponder:(id)arg1;
- (void)registerMailboxChangeHookResponder:(id)arg1;
- (void)_initializeMethodSignatures;
- (void)_registerSelector:(SEL)arg1 types:(const char *)arg2;
- (void)_registerHookResponder:(id)arg1 withMethodDescription:(struct objc_method_description)arg2;
- (id)_copyRespondersForSelector:(SEL)arg1;
- (void)_messageRespondersWithInvocation:(id)arg1;
- (void)_registerHookResponder:(id)arg1 protocol:(id)arg2;
- (void)registerDatabaseChangeHookResponder:(id)arg1;
- (void)registerThreadChangeHookResponder:(id)arg1;
- (void)registerSearchableIndexHookResponder:(id)arg1;
- (void)registerMessageReadHookResponder:(id)arg1;

@end
