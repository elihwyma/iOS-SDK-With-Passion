/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSMutableArray, NSString, PKContactlessInterfaceSession, PKFieldDetector, PKPass, PKPaymentSessionHandle;

@protocol NPKQuickPaymentSessionDelegate, OS_dispatch_queue;

@interface NPKQuickPaymentSession : NSObject

{
    NSData *_credential;
    _Bool _deferAuthorization;
    _Bool _inServiceMode;
    _Bool _confirmed;
    _Bool _deactivating;
    _Bool _deactivated;
    PKPass *_currentPass;
    NSDictionary *_vasPasses;
    id <NPKQuickPaymentSessionDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_paymentSessionQueue;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    PKPaymentSessionHandle *_contactlessSessionHandle;
    PKContactlessInterfaceSession *_contactlessSession;
    unsigned long long _contactlessValidity;
    unsigned long long _authorizationValidity;
    NSMutableArray *_deactivationCompletionBlocks;
    PKFieldDetector *_fieldDetector;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *paymentSessionQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) PKPaymentSessionHandle *contactlessSessionHandle;
@property (retain, nonatomic) PKContactlessInterfaceSession *contactlessSession;
@property (nonatomic) unsigned long long contactlessValidity;
@property (nonatomic) unsigned long long authorizationValidity;
@property (nonatomic, getter=isConfirmed) _Bool confirmed;
@property (nonatomic, getter=isDeactivating) _Bool deactivating;
@property (nonatomic, getter=isDeactivated) _Bool deactivated;
@property (retain, nonatomic) NSMutableArray *deactivationCompletionBlocks;
@property (retain, nonatomic) PKFieldDetector *fieldDetector;
@property (weak, nonatomic) id <NPKQuickPaymentSessionDelegate> delegate;
@property (retain, nonatomic) PKPass *currentPass;
@property (retain, nonatomic) NSDictionary *vasPasses;
@property (nonatomic) _Bool deferAuthorization;
@property (nonatomic) _Bool inServiceMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)hasOutstandingSessions;
+ (id)_outstandingSessionHashTable;
+ (void)_handleNewContactlessSession:(id)arg1;

- (void)dealloc;
- (id)initWithQueue:(id)arg1;
- (void)setCredential:(id)arg1;
- (_Bool)startSession;
- (void)contactlessInterfaceSessionHasPendingServerRequest:(id)arg1;
- (void)contactlessInterfaceSession:(id)arg1 didEndPersistentCardEmulationWithContext:(id)arg2;
- (void)contactlessInterfaceSession:(id)arg1 didFinishTransactionWithContext:(id)arg2;
- (void)contactlessInterfaceSessionDidFailTransaction:(id)arg1 forPaymentApplication:(id)arg2 paymentPass:(id)arg3;
- (void)contactlessInterfaceSessionDidFail:(id)arg1 forPaymentApplication:(id)arg2 paymentPass:(id)arg3 valueAddedServicePasses:(id)arg4;
- (void)contactlessInterfaceSessionDidStartTransaction:(id)arg1;
- (void)contactlessInterfaceSessionDidReceiveActivityTimeout:(id)arg1;
- (void)contactlessInterfaceSessionDidTimeout:(id)arg1 forPaymentApplication:(id)arg2 paymentPass:(id)arg3 valueAddedServicePasses:(id)arg4;
- (void)contactlessInterfaceSessionDidEnterField:(id)arg1 withProperties:(id)arg2;
- (void)contactlessInterfaceSessionDidExitField:(id)arg1;
- (void)contactlessInterfaceSessionDidSelectPayment:(id)arg1;
- (void)contactlessInterfaceSessionDidSelectValueAddedService:(id)arg1;
- (void)contactlessInterfaceSessionDidFailDeferredAuthorization:(id)arg1;
- (void)confirmOrRenewSession;
- (void)deactivateSessionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_internalQueue_updateSessionWithCurrentPassAndLoyaltyState;
- (_Bool)_sessionQueue_enablePersistentCardEmulation;
- (_Bool)_sessionQueue_startContactlessSessionWithSuccessfulCompletionOnInternalQueue:(CDUnknownBlockType)arg1;
- (_Bool)_sessionQueue_authorizeWithDeferredAuthorization:(_Bool)arg1 useCredential:(_Bool)arg2;
- (void)_sessionQueue_invokeAppropriateCallbackForActivationWithSuccess:(_Bool)arg1 invokeOnSuccess:(_Bool)arg2 contactlessValidity:(unsigned long long)arg3 forPass:(id)arg4;
- (void)_checkContactlessValidity:(unsigned long long)arg1 authorizationValidity:(unsigned long long)arg2 performWork:(CDUnknownBlockType)arg3;
- (void)_internalQueue_getContactlessAndAuthorizationValidityAndPerformWork:(CDUnknownBlockType)arg1;
- (void)_internalQueue_deactivateSessionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_internalQueue_invokeDeactivationCompletionBlocks;
- (void)_internalQueue_updateContactlessValidityAndPerformWork:(CDUnknownBlockType)arg1;
- (_Bool)_sessionQueue_updateContactlessSessionForPass:(id)arg1 paymentApplication:(id)arg2 vasPasses:(id)arg3 sessionConfirmed:(_Bool)arg4 deferAuthorization:(_Bool)arg5;
- (void)_checkContactlessValidity:(unsigned long long)arg1 performWork:(CDUnknownBlockType)arg2;
- (void)_updateAuthorizationValidity;
- (void)_internalQueue_updateContactlessSessionForPass:(id)arg1 vasPasses:(id)arg2;
- (void)_handleTransitTransactionWithContext:(id)arg1;
- (void)_handleConventionalTransactionWithContext:(id)arg1;
- (void)_loyaltyEngineConfigurationChanged:(id)arg1;

@end
