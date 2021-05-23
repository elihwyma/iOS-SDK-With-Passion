/*
 Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

#import <Foundation/NSObject.h>

@class BKSAssertion, FPDDomain, FPDExtension, FPDProcessMonitor, FPGracePeriodTimer, NSCountedSet, NSExtension, NSHashTable, NSMutableDictionary, NSString, NSUUID, NSXPCConnection;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FPDExtensionSession : NSObject

{
    NSExtension *_extension;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSXPCConnection *_connection;
    NSUUID *_requestIdentifier;
    NSCountedSet *_observingBundleIDs;
    NSMutableDictionary *_inflightProxies;
    NSHashTable *_lifetimeExtenders;
    FPDExtension *_fpdExtension;
    FPDDomain *_domain;
    FPGracePeriodTimer *_gracePeriodTimer;
    FPGracePeriodTimer *_networkingGracePeriodTimer;
    FPDProcessMonitor *_processMonitor;
    int _notifyTokenForFramework;
    _Bool _invalidated;
    _Bool _isForeground;
    int _pid;
    BKSAssertion *_foregroundAssertion;
    BKSAssertion *_backgroundAssertion;
    _Bool _hasFileProviderPresenceTCCAccess;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool hasFileProviderPresenceTCCAccess;

- (void)dealloc;
- (void)invalidate;
- (void)start;
- (void)dumpStateTo:(id)arg1;
- (id)newFileProviderProxyWithPID:(int)arg1;
- (id)newFileProviderProxyWithoutPID;
- (id)newFileProviderProxyWithoutPIDWithTimeout:(_Bool)arg1;
- (void)asyncUnregisterLifetimeExtensionForObject:(id)arg1;
- (void)registerLifetimeExtensionForObject:(id)arg1;
- (void)unregisterLifetimeExtensionForObject:(id)arg1;
- (id)newFileProviderProxyWithTimeout:(_Bool)arg1 pid:(int)arg2;
- (void)processMonitor:(id)arg1 didBecomeForeground:(_Bool)arg2;
- (id)initWithDomain:(id)arg1 extension:(id)arg2 queue:(id)arg3;
- (id)existingFileProviderProxyWithTimeout:(_Bool)arg1 pid:(int)arg2;
- (void)__invalidateWithCancellation:(_Bool)arg1;
- (void)_networkingGracePeriodOver;
- (_Bool)_setUpConnectionWithAttemptNumber:(long long)arg1 error:(id *)arg2;
- (void)_evaluateExtensionForegroundness;
- (void)_invalidateWithCancellation:(_Bool)arg1;
- (id)_alternateContentsDictionary;
- (void)updatePresenceTCCWithAuditToken:(CDStruct_6ad76789)arg1;
- (id)newFileProviderProxyWithTimeout:(_Bool)arg1 pid:(int)arg2 createIfNeeded:(_Bool)arg3;
- (id)_connectionWithError:(id *)arg1;
- (void)_invalidateExtensionIfPossible;
- (void)_unregisterLifetimeExtensionForObject:(id)arg1;
- (void)_notifyNetworkingProviderMonitorWithState:(_Bool)arg1;
- (id)newAssertionWithFlags:(unsigned int)arg1 reason:(id)arg2;
- (id)newForegroundAssertion;
- (id)newBackgroundAssertion;

@end
