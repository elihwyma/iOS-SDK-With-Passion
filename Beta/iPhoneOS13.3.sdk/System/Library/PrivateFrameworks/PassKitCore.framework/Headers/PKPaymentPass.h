/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPass.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSArray, NSSet, NSString, NSURL, PKCurrencyAmount, PKPaymentApplication, PKTransitPassProperties;

@interface PKPaymentPass : PKPass <Swift>

{
    _Bool _supportsDPANNotifications;
    _Bool _supportsFPANNotifications;
    _Bool _supportsDefaultCardSelection;
    _Bool _hasAssociatedPeerPaymentAccount;
    _Bool _supportsPeerPayment;
    _Bool _supportsSerialNumberBasedProvisioning;
    _Bool _paymentOptionSelectable;
    _Bool _cobranded;
    _Bool _requiresTransferSerialNumberBasedProvisioning;
    NSString *_primaryAccountIdentifier;
    NSString *_primaryAccountNumberSuffix;
    long long _cardType;
    NSSet *_associatedApplicationIdentifiers;
    NSSet *_associatedWebDomains;
    NSString *_sanitizedPrimaryAccountNumber;
    NSString *_associatedAccountServiceAccountIdentifier;
    NSString *_issuerCountryCode;
    NSSet *_paymentApplications;
    NSSet *_devicePaymentApplications;
    PKPaymentApplication *_devicePrimaryPaymentApplication;
    PKPaymentApplication *_devicePrimaryContactlessPaymentApplication;
    PKPaymentApplication *_devicePrimaryInAppPaymentApplication;
    NSSet *_deviceInAppPaymentApplications;
    NSString *_cobrandName;
    NSURL *_transactionServiceURL;
    NSURL *_transactionServiceRegistrationURL;
    NSString *_transactionPushTopic;
    NSURL *_messageServiceURL;
    NSString *_messagePushTopic;
    NSString *_appURLScheme;
    NSString *_localizedSuspendedReason;
    NSArray *_availableActions;
}

@property (retain, nonatomic) PKCurrencyAmount *peerPaymentBalance;
@property (nonatomic) long long cardType;
@property (copy, nonatomic) NSSet *associatedApplicationIdentifiers;
@property (copy, nonatomic) NSSet *associatedWebDomains;
@property (copy, nonatomic) NSString *primaryAccountIdentifier;
@property (copy, nonatomic) NSString *primaryAccountNumberSuffix;
@property (copy, nonatomic) NSString *sanitizedPrimaryAccountNumber;
@property (nonatomic) _Bool supportsDPANNotifications;
@property (nonatomic) _Bool supportsFPANNotifications;
@property (nonatomic) _Bool supportsDefaultCardSelection;
@property (nonatomic) _Bool hasAssociatedPeerPaymentAccount;
@property (copy, nonatomic) NSString *associatedAccountServiceAccountIdentifier;
@property (nonatomic) _Bool supportsPeerPayment;
@property (copy, nonatomic) NSString *issuerCountryCode;
@property (nonatomic) _Bool supportsSerialNumberBasedProvisioning;
@property (nonatomic, getter=isPaymentOptionSelectable) _Bool paymentOptionSelectable;
@property (copy, nonatomic) NSSet *paymentApplications;
@property (copy, nonatomic) NSSet *devicePaymentApplications;
@property (retain, nonatomic) PKPaymentApplication *devicePrimaryPaymentApplication;
@property (retain, nonatomic) PKPaymentApplication *devicePrimaryContactlessPaymentApplication;
@property (retain, nonatomic) PKPaymentApplication *devicePrimaryInAppPaymentApplication;
@property (retain, nonatomic) NSSet *deviceInAppPaymentApplications;
@property (nonatomic, readonly, getter=isPrivateLabel) _Bool privateLabel;
@property (nonatomic, getter=isCobranded) _Bool cobranded;
@property (copy, nonatomic) NSString *cobrandName;
@property (copy, nonatomic) NSURL *transactionServiceURL;
@property (copy, nonatomic) NSURL *transactionServiceRegistrationURL;
@property (copy, nonatomic) NSString *transactionPushTopic;
@property (copy, nonatomic) NSURL *messageServiceURL;
@property (copy, nonatomic) NSString *messagePushTopic;
@property (copy, nonatomic) NSString *appURLScheme;
@property (copy, nonatomic) NSString *localizedSuspendedReason;
@property (nonatomic) _Bool requiresTransferSerialNumberBasedProvisioning;
@property (copy, nonatomic) NSArray *availableActions;
@property (copy, nonatomic, readonly) PKTransitPassProperties *transitProperties;
@property (nonatomic, readonly) _Bool supportsOnlyTransit;
@property (nonatomic, readonly) NSArray *upgradeRequests;
@property (weak, readonly) NSString *deviceAccountIdentifier;
@property (weak, readonly) NSString *deviceAccountNumberSuffix;
@property (nonatomic, readonly) unsigned long long activationState;

+ (_Bool)supportsSecureCoding;
+ (unsigned long long)defaultSettings;
+ (id)displayableErrorForAction:(id)arg1 andReason:(unsigned long long)arg2;
+ (id)displayableNoPaymentNetworkErrorMessageForAction:(id)arg1 isTransit:(_Bool)arg2;
+ (id)displayableErrorForTransitAction:(id)arg1 andReason:(unsigned long long)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isTransitPass;
- (_Bool)isAccessPass;
- (_Bool)isSuicaPass;
- (_Bool)supportsWebPaymentMode:(long long)arg1 withExclusionList:(id)arg2;
- (void)sanitizePaymentApplications;
- (id)felicaProperties;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;
- (_Bool)availableForAutomaticPresentationUsingBeaconContext;
- (id)deviceContactlessPaymentApplications;
- (unsigned long long)_activationStateForApplicationState:(long long)arg1;
- (long long)effectiveContactlessPaymentApplicationState;
- (id)paymentApplicationsForSecureElementIdentifiers:(id)arg1;
- (id)primaryPaymentApplicationForSecureElementIdentifiers:(id)arg1;
- (id)sortedPaymentApplications:(id)arg1 ascending:(_Bool)arg2;
- (_Bool)supportsWebPaymentMode:(long long)arg1 withExclusionList:(id)arg2 clientOSVersion:(id)arg3;
- (id)_localizedSuspendedReasonForAID:(id)arg1;
- (id)notificationCenterTitle;
- (_Bool)canPerformAction:(id)arg1 unableReason:(unsigned long long *)arg2 displayableError:(id *)arg3;
- (id)_launchURLForPassAction:(id)arg1;
- (id)paymentApplicationForAID:(id)arg1;
- (_Bool)isDevicePrimaryPaymentApplicationPersonalized;
- (_Bool)isOctopusPass;
- (_Bool)requiresFelicaSecureElement;
- (_Bool)shouldIgnoreTransactionUpdatesSwitch;
- (_Bool)availableForAutomaticPresentationUsingVASContext;
- (id)sanitizedDeviceAccountNumber;
- (_Bool)hasContactlessDevicePaymentApplicationsAvailable;
- (unsigned long long)contactlessActivationState;
- (void)updateDevicePaymentApplicationsWithSecureElementIdentifiers:(id)arg1;
- (id)addValueURL;
- (_Bool)shouldSuppressNoChargeAmount;
- (_Bool)isContactlessPaymentSupportedForTransitNetworks:(id)arg1;

@end
