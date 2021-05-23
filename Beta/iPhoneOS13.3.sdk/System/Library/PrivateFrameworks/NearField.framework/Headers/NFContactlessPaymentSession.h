/*
 Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

#import <NearField/NFSession.h>

@class NFApplet, NFWeakReference, NSDictionary, NSString;

@protocol NFContactlessPaymentSessionDelegate;

@interface NFContactlessPaymentSession : NFSession

{
    NSDictionary *_appletsById;
    NFWeakReference *_delegate;
    unsigned long long _numActiveSEs;
    _Bool _fieldNotificationSent;
    NFApplet *_activeApplet;
    NFApplet *_defaultApplet;
}

@property id <NFContactlessPaymentSessionDelegate> delegate;
@property (readonly) NFApplet *activeApplet;
@property (readonly) NFApplet *defaultApplet;
@property (readonly) unsigned long long numberOfActiveSecureElements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)endSession;
- (_Bool)stopCardEmulation:(id *)arg1;
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
- (void)didReceiveButtonPressForApplet:(id)arg1;
- (void)didExpireTransactionForApplet:(id)arg1;
- (void)didStartTransaction:(id)arg1;
- (void)didEndTransaction:(id)arg1;
- (void)didFailDeferredAuthorization;
- (void)didReceivePendingServerRequest;
- (void)didExpressModeStateChange:(unsigned int)arg1 withObject:(id)arg2;
- (void)didReceiveActivityTimeout:(id)arg1;
- (_Bool)setActivePaymentApplet:(id)arg1 authorization:(id)arg2;
- (_Bool)setActivePaymentApplet:(id)arg1 authorization:(id)arg2 error:(id *)arg3;
- (_Bool)startCardEmulationWithAuthorization:(id)arg1 error:(id *)arg2;
- (_Bool)startDeferredCardEmulationWithAuthorization:(id)arg1 error:(id *)arg2;
- (_Bool)setActivePaymentApplet:(id)arg1 makeDefault:(_Bool)arg2 authorization:(id)arg3;
- (_Bool)startCardEmulationWithAuthorization:(id)arg1;
- (_Bool)startDeferredCardEmulationWithAuthorization:(id)arg1;

@end
