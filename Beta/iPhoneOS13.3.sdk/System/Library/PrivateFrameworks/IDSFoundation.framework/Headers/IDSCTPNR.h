/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class CTXPCServiceSubscriptionContext, CoreTelephonyClient, IDSCTPNRInfo, NSString;

@protocol IDSCTPNRDelegate;

@interface IDSCTPNR : NSObject

{
    id _coreTelephonyClient;
    NSString *_labelID;
    id _context;
    id <IDSCTPNRDelegate> _PNRDelegate;
    long long _carrierShortcodeSupported;
    struct os_unfair_lock_s _contextLock;
}

@property (retain, nonatomic) CoreTelephonyClient *coreTelephonyClient;
@property (retain, nonatomic) NSString *labelID;
@property (retain, nonatomic) CTXPCServiceSubscriptionContext *context;
@property (nonatomic) struct os_unfair_lock_s contextLock;
@property (nonatomic) long long carrierShortcodeSupported;
@property (weak, nonatomic) id <IDSCTPNRDelegate> PNRDelegate;
@property (nonatomic, readonly) NSString *uniqueIdentifier;
@property (nonatomic, readonly) _Bool isPNRSupported;
@property (nonatomic, readonly) _Bool isSIMReady;
@property (nonatomic, readonly) _Bool userOptInRequired;
@property (nonatomic, readonly) IDSCTPNRInfo *PNRInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)subscriptionInfoDidChange;
- (void)pnrRequestSent:(id)arg1 pnrReqData:(id)arg2;
- (void)pnrResponseReceived:(id)arg1 pnrRspData:(id)arg2;
- (void)pnrReadyStateNotification:(id)arg1 regState:(_Bool)arg2;
- (void)carrierBundleChange:(id)arg1;
- (void)operatorBundleChange:(id)arg1;
- (id)_telephonyRequestForPushToken:(id)arg1 phoneNumberValidationMechanism:(id)arg2 attemptCount:(unsigned int)arg3;
- (_Bool)isRelevantContext:(id)arg1;
- (void)_resetCarrierShortcodeSupportedCachedValue;
- (id)_initWithCoreTelephonyClient:(id)arg1 SIM:(id)arg2;
- (_Bool)issuePNRForMechanism:(id)arg1 pushToken:(id)arg2 attemptCount:(unsigned int)arg3 completion:(CDUnknownBlockType)arg4;

@end
