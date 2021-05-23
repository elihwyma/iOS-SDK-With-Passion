/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSSet, NSString, PKPaymentService;

@protocol NPKTransitPassesInfoManagerDelegate, OS_dispatch_queue;

@interface NPKTransitPassesInfoManager : NSObject

{
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_delegateCallbackQueue;
    NSMutableDictionary *_transitPassBalanceModelsByPassUniqueID;
    id <NPKTransitPassesInfoManagerDelegate> _delegate;
    PKPaymentService *_paymentService;
}

@property (nonatomic, readonly) PKPaymentService *paymentService;
@property (copy) NSSet *passes;
@property (weak) id <NPKTransitPassesInfoManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveBalanceUpdate:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2;
- (void)removePassWithUniqueID:(id)arg1;
- (id)initWithPaymentService:(id)arg1 delegate:(id)arg2;
- (id)_transitPassBalanceModelWithPass:(id)arg1 currentModel:(id)arg2;
- (void)_loadPassContentIfNeeded:(id)arg1;
- (void)_fetchMostRecentInfoForPass:(id)arg1;
- (void)_notifyDelegateOfUpdatedTransitPassInfoForModel:(id)arg1;
- (void)_updatePassTransitPassesInfoManagerForPassUiniqueID:(id)arg1 updateBlock:(CDUnknownBlockType)arg2;
- (void)_fetchMostRecentTransitPropertiesForPass:(id)arg1;
- (void)_fetchMostRecentBalancesForPass:(id)arg1;
- (void)addPass:(id)arg1;
- (void)refreshAllPasses;
- (id)passInfoForForPassWithUniqueID:(id)arg1;

@end
