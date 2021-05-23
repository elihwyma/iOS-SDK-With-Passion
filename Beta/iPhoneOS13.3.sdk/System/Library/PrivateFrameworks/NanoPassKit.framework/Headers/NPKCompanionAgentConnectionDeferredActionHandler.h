/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface NPKCompanionAgentConnectionDeferredActionHandler : NSObject

{
    NSMutableDictionary *_deferredActions;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableDictionary *_deferredSharedPaymentWebServiceContexts;
    NSMutableDictionary *_deferredAddedPaymentPasses;
}

@property (retain, nonatomic) NSMutableDictionary *deferredActions;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain, nonatomic) NSMutableDictionary *deferredSharedPaymentWebServiceContexts;
@property (retain, nonatomic) NSMutableDictionary *deferredAddedPaymentPasses;

+ (id)sharedDeferredActionHandler;

- (id)init;
- (void)dealloc;
- (void)_handleDeviceUnpaired:(id)arg1;
- (void)_handleDevicePaired:(id)arg1;
- (void)_handleDeviceBecameActive:(id)arg1;
- (void)_handleDevicePairingFailure:(id)arg1;
- (void)_handleCompanionAgentStarted;
- (id)deferredPaymentPassesForDevice:(id)arg1;
- (void)_performDeferredActions;
- (void)_cleanUpDeferredDataForPairingID:(id)arg1;
- (void)performActionWhenCompanionAgentIsAvailable:(CDUnknownBlockType)arg1 forDevice:(id)arg2;
- (id)deferredSharedPaymentWebServiceContextForDevice:(id)arg1;
- (void)setDeferredSharedPaymentWebServiceContext:(id)arg1 forDevice:(id)arg2;
- (void)addDeferredPaymentPass:(id)arg1 forDevice:(id)arg2;
- (id)deferredPaymentPassUniqueIDsForDevice:(id)arg1;
- (id)deferredPaymentPassWithUniqueID:(id)arg1 forDevice:(id)arg2;

@end
