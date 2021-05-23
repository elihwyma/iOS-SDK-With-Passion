/*
 Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

#import <NearField/NFSession.h>

@class NFApplet, NFWeakReference, NSDictionary, NSSet;

@protocol NFLoyaltyAndPaymentSessionDelegate;

@interface NFLoyaltyAndPaymentSession : NFSession

{
    _Bool _pendingServerRequest;
    _Bool _vasTransactionInProgress;
    NFWeakReference *_delegate;
    _Bool _emulationActive;
    NSDictionary *_appletsById;
    unsigned long long _numActiveSEs;
    _Bool _fieldNotificationSent;
    NFApplet *_activeApplet;
    NSSet *_activeKeys;
    NFApplet *_defaultApplet;
}

@property id <NFLoyaltyAndPaymentSessionDelegate> delegate;
@property (readonly) NFApplet *activeApplet;
@property (readonly) NSSet *activeKeys;
@property (readonly) NFApplet *defaultApplet;
@property (readonly) unsigned long long numberOfActiveSecureElements;

- (void)dealloc;
- (void)endSession;
- (_Bool)setActivePaymentApplet:(id)arg1 keys:(id)arg2 error:(id *)arg3;
- (_Bool)setHostCards:(id)arg1;
- (_Bool)setActivePaymentApplet:(id)arg1 error:(id *)arg2;
- (_Bool)startDeferredCardEmulation:(unsigned char)arg1 authorization:(id)arg2 error:(id *)arg3;
- (_Bool)startCardEmulation:(unsigned char)arg1 authorization:(id)arg2 error:(id *)arg3;
- (_Bool)stopCardEmulation:(id *)arg1;
- (_Bool)enablePlasticCardMode:(_Bool)arg1 error:(id *)arg2;
- (id)appletWithIdentifier:(id)arg1;
- (id)felicaAppletState:(id)arg1 error:(id *)arg2;
- (id)transitAppletState:(id)arg1 error:(id *)arg2;
- (_Bool)stopCardEmulation;
- (void)endSessionWithCompletion:(CDUnknownBlockType)arg1;
- (id)allApplets;
- (void)didStartSession:(id)arg1;
- (id)felicaAppletState:(id)arg1;
- (void)didDetectField:(_Bool)arg1;
- (void)didDetectFieldNotification:(id)arg1;
- (void)didEndUnexpectedly;
- (void)didSelectApplet:(id)arg1;
- (void)didFelicaStateChange:(id)arg1;
- (_Bool)startExpressMode:(id *)arg1;
- (void)didReceiveButtonPressForApplet:(id)arg1;
- (void)didExpireTransactionForApplet:(id)arg1;
- (void)didStartTransaction:(id)arg1;
- (void)didEndTransaction:(id)arg1;
- (void)didFailDeferredAuthorization;
- (void)didSelectValueAddedService:(_Bool)arg1;
- (void)didPerformValueAddedServiceTransactions:(id)arg1;
- (void)didReceivePendingServerRequest;
- (void)didExpressModeStateChange:(unsigned int)arg1 withObject:(id)arg2;
- (void)didReceiveActivityTimeout:(id)arg1;
- (_Bool)setActivePaymentApplet:(id)arg1;
- (_Bool)_startHostCardEmulation:(id *)arg1;
- (_Bool)_startCardEmulationWithAuthorization:(id)arg1 error:(id *)arg2;
- (_Bool)_startDeferredCardEmulationWithAuthorization:(id)arg1 error:(id *)arg2;
- (_Bool)setActivePaymentApplet:(id)arg1 makeDefault:(_Bool)arg2;
- (_Bool)startCardEmulation:(unsigned char)arg1 authorization:(id)arg2;
- (_Bool)startDeferredCardEmulation:(unsigned char)arg1 authorization:(id)arg2;
- (_Bool)enablePlasticCardMode:(_Bool)arg1;

@end
