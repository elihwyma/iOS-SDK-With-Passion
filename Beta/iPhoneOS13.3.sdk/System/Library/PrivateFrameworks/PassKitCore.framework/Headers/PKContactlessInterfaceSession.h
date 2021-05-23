/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentSession.h>

@class NSArray, NSObject, NSString, PKFieldProperties, PKPaymentApplication, PKPaymentPass, PKTransitAppletHistory;

@protocol OS_dispatch_queue, PKContactlessInterfaceSessionDelegate;

@interface PKContactlessInterfaceSession : PKPaymentSession

{
    PKPaymentApplication *_activatedPaymentApplication;
    PKPaymentPass *_activatedPaymentPass;
    NSArray *_activatedValueAddedServicePasses;
    NSArray *_activatedHostCards;
    NSArray *_valueAddedServiceTransactions;
    PKFieldProperties *_fieldProperties;
    PKFieldProperties *_fieldPropertiesToLookup;
    unsigned long long _transactionStartTime;
    _Atomic _Bool _fieldPresent;
    _Bool _handlingExpress;
    unsigned long long _expressActivity;
    _Bool _felicaStateChanged;
    unsigned long long _state;
    id <PKContactlessInterfaceSessionDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    _Bool _prioritySessionExists;
    _Atomic _Bool _persistentCardEmulation;
    unsigned char _cardEmulationMode;
}

@property (nonatomic, readonly) _Bool persistentCardEmulationQueued;
@property (nonatomic, readonly) PKPaymentApplication *activatedPaymentApplication;
@property (nonatomic, readonly) PKPaymentPass *activatedPaymentPass;
@property (nonatomic, readonly) NSArray *activatedValueAddedServicePasses;
@property (nonatomic, readonly) _Bool fieldPresent;
@property (nonatomic, readonly) PKFieldProperties *fieldProperties;
@property (nonatomic, readonly) unsigned long long state;
@property (nonatomic, readonly) PKTransitAppletHistory *transitAppletState;
@property (weak, nonatomic) id <PKContactlessInterfaceSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)transitAppletStateFromPaymentSession:(id)arg1 withPaymentApplication:(id)arg2;

- (void)setState:(unsigned long long)arg1;
- (id)initWithInternalSession:(id)arg1 targetQueue:(id)arg2;
- (void)_sendPersistentCardEmulationForPaymentPass:(id)arg1 paymentApplication:(id)arg2;
- (void)invalidateSessionWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)activatePaymentApplication:(id)arg1 forPaymentPass:(id)arg2;
- (id)_appletForPaymentApplication:(id)arg1;
- (_Bool)activateValueAddedServicePasses:(id)arg1;
- (_Bool)authorizeAndStartCardEmulationWithCredential:(id)arg1 deferAuthorization:(_Bool)arg2;
- (void)_endLookupAndNotifyForFieldProperties:(id)arg1;
- (id)_appletWithIdentifier:(id)arg1;
- (id)_filteredLoyaltyPassesFromVASTransactions:(id)arg1 activatedPasses:(id)arg2;
- (void)_processEndEvent:(id)arg1 withPartialContext:(id)arg2 groupHeadIdentifier:(id)arg3 groupAppletIdentifiers:(id)arg4;
- (void)_startLookupForFieldProperties:(id)arg1;
- (void)_endFieldPropertiesLookup;
- (void)loyaltyAndPaymentSession:(id)arg1 didEnterFieldWithNotification:(id)arg2;
- (void)loyaltyAndPaymentSessionDidExitField:(id)arg1;
- (void)loyaltyAndPaymentSession:(id)arg1 didSelectApplet:(id)arg2;
- (void)loyaltyAndPaymentSession:(id)arg1 didExpireTransactionForApplet:(id)arg2;
- (void)loyaltyAndPaymentSession:(id)arg1 didStartTransaction:(id)arg2;
- (void)loyaltyAndPaymentSession:(id)arg1 didEndTransaction:(id)arg2;
- (void)loyaltyAndPaymentSessionDidEndUnexpectedly:(id)arg1;
- (void)loyaltyAndPaymentSessionHasPendingServerRequest:(id)arg1;
- (void)loyaltyAndPaymentSession:(id)arg1 didSelectValueAddedService:(_Bool)arg2;
- (void)loyaltyAndPaymentSession:(id)arg1 didPerformValueAddedServiceTransactions:(id)arg2;
- (void)loyaltyAndPaymentSession:(id)arg1 didFelicaStateChange:(id)arg2;
- (void)loyaltyAndPaymentSession:(id)arg1 didExpressModeStateChange:(unsigned int)arg2 withObject:(id)arg3;
- (void)loyaltyAndPaymentSession:(id)arg1 didFailDeferredAuthorization:(_Bool)arg2;
- (void)loyaltyAndPaymentSessionDidReceiveActivityTimeout:(id)arg1 result:(id)arg2;
- (_Bool)activatePaymentApplication:(id)arg1 forPaymentPass:(id)arg2 markAsDefault:(_Bool)arg3;
- (_Bool)activateValueAddedServicePassWhitelist:(id)arg1 greylist:(id)arg2;
- (_Bool)authorizeAndStartCardEmulationWithCredential:(id)arg1;
- (_Bool)stopCardEmulation;
- (void)resetExpressState;
- (_Bool)queuePersistentCardEmulation;
- (_Bool)resetPersistentCardEmulation;
- (_Bool)paymentApplicationSupportsAutomaticAuthorization:(id)arg1;

@end
