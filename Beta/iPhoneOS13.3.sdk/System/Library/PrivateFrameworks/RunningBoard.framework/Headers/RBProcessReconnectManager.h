/*
 Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, RBProcess;

@protocol OS_dispatch_queue, RBAssertionManaging, RBAssertionOriginatorPidPersisting, RBDomainAttributeManaging;

@interface RBProcessReconnectManager : NSObject

{
    id <RBAssertionManaging> _assertionManager;
    id <RBDomainAttributeManaging> _domainAttributeManager;
    id <RBAssertionOriginatorPidPersisting> _assertionOriginatorPidStore;
    RBProcess *_originatorProcess;
    NSMutableSet *_currentAssertionIdentifiers;
    NSMutableSet *_pendingProcesses;
    NSObject<OS_dispatch_queue> *_queue;
    struct os_unfair_lock_s _lock;
}

- (id)init;
- (void)_reconnectProcess:(id)arg1;
- (void)_lockQueue_resumeNextProcess;
- (id)_assertionDescriptorForProcess:(id)arg1;
- (id)_assertionAttributes;
- (id)initWithAssertionManager:(id)arg1 domainAttributeManager:(id)arg2 assertionOriginatorPidStore:(id)arg3 originatorProcess:(id)arg4;
- (void)reconnectProcesses:(id)arg1;
- (void)didInvalidateAssertion:(id)arg1;

@end
