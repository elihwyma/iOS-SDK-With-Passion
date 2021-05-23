/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSHashTable, NSString, PKXPCService;

@protocol OS_dispatch_queue;

@interface PKAssertionCoordinator : NSObject

{
    NSHashTable *_acquiredAssertions;
    PKXPCService *_remoteService;
    NSObject<OS_dispatch_queue> *_coordinatorSerialQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (void)dealloc;
- (id)_remoteObjectProxy;
- (void)acquireAssertionOfType:(unsigned long long)arg1 withReason:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_remoteObjectProxyWithFailureHandler:(CDUnknownBlockType)arg1;
- (id)_remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)remoteService:(id)arg1 didEstablishConnection:(id)arg2;
- (void)remoteService:(id)arg1 didInterruptConnection:(id)arg2;
- (void)remoteServiceDidSuspend:(id)arg1;
- (id)_remoteObjectProxyWithSemaphore:(id)arg1;
- (id)_existingRemoteObjectProxy;
- (void)isAssertionValid:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initSharedInstance;
- (void)_removeAssertionWithIdentifier:(id)arg1;
- (void)invalidateAssertion:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)assertion:(id)arg1 shouldInvalidateWhenBackgrounded:(_Bool)arg2;

@end
