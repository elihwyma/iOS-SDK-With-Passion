/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSArray, NSDecimalNumber, NSString, PKFelicaPassProperties, PKTransitPassProperties;

@interface PKPaymentApplication : NSObject <Swift>

{
    _Bool _supportsContactlessPayment;
    _Bool _supportsInAppPayment;
    _Bool _supportsOptionalAuthentication;
    _Bool _requiresDeferredAuthorization;
    _Bool _inAppPINRequired;
    _Bool _auxiliary;
    _Bool _supportsInstantFundsIn;
    NSString *_dpanIdentifier;
    NSString *_dpanSuffix;
    NSString *_sanitizedDPAN;
    NSString *_applicationIdentifier;
    NSString *_secureElementIdentifier;
    long long _state;
    NSString *_suspendedReason;
    NSArray *_supportedExpressModes;
    NSArray *_automaticSelectionCriteria;
    NSString *_appletCurrencyCode;
    long long _paymentNetworkIdentifier;
    NSDecimalNumber *_inAppPINRequiredAmount;
    NSString *_inAppPINRequiredCurrency;
    unsigned long long _paymentType;
    NSString *_displayName;
    long long _contactlessPriority;
    long long _inAppPriority;
    NSString *_appletDataFormat;
    PKTransitPassProperties *_transitProperties;
    NSArray *_supportedTransitNetworkIdentifiers;
}

@property (copy, nonatomic, setter=setDPANIdentifier:) NSString *dpanIdentifier;
@property (copy, nonatomic, setter=setDPANSuffix:) NSString *dpanSuffix;
@property (copy, nonatomic, setter=setSanitizedDPAN:) NSString *sanitizedDPAN;
@property (copy, nonatomic) NSString *applicationIdentifier;
@property (copy, nonatomic) NSString *secureElementIdentifier;
@property (nonatomic) long long state;
@property (nonatomic, readonly) NSString *stateAsString;
@property (copy, nonatomic) NSString *suspendedReason;
@property (nonatomic) _Bool supportsContactlessPayment;
@property (nonatomic) _Bool supportsInAppPayment;
@property (nonatomic) _Bool supportsOptionalAuthentication;
@property (copy, nonatomic) NSArray *supportedExpressModes;
@property (copy, nonatomic) NSArray *automaticSelectionCriteria;
@property (copy, nonatomic) NSString *appletCurrencyCode;
@property (nonatomic) _Bool requiresDeferredAuthorization;
@property (nonatomic) long long paymentNetworkIdentifier;
@property (nonatomic) _Bool inAppPINRequired;
@property (copy, nonatomic) NSDecimalNumber *inAppPINRequiredAmount;
@property (copy, nonatomic) NSString *inAppPINRequiredCurrency;
@property (nonatomic) unsigned long long paymentType;
@property (copy, nonatomic) NSString *displayName;
@property (nonatomic, getter=isAuxiliary) _Bool auxiliary;
@property (nonatomic) long long contactlessPriority;
@property (nonatomic) long long inAppPriority;
@property (nonatomic) _Bool supportsInstantFundsIn;
@property (copy, nonatomic) NSString *appletDataFormat;
@property (copy, nonatomic) PKTransitPassProperties *transitProperties;
@property (copy, nonatomic) PKFelicaPassProperties *felicaProperties;
@property (nonatomic, readonly) _Bool supportsTransit;
@property (nonatomic, readonly) _Bool supportsSuica;
@property (nonatomic, readonly, getter=isParsedTransitApplication) _Bool parsedTransitApplication;
@property (nonatomic, readonly) _Bool generatesLocalTransactions;
@property (nonatomic, readonly) _Bool supportsTransitHistory;
@property (nonatomic, readonly) NSString *stationCodeProvider;
@property (nonatomic, readonly) _Bool supportsExpressTransit;
@property (nonatomic, readonly) _Bool supportsExpressSuica;
@property (copy, nonatomic) NSArray *supportedTransitNetworkIdentifiers;

+ (_Bool)supportsSecureCoding;
+ (id)applicationWithProtobuf:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)protobuf;
- (_Bool)supportsExpressMode:(id)arg1;
- (_Bool)supportsExpress;
- (_Bool)acceptedForNonWebPaymentWithSupportedNetworkIdentifiers:(id)arg1 merchantCapabilities:(unsigned long long)arg2 paymentMode:(long long)arg3;
- (_Bool)supportsWebPaymentMode:(long long)arg1 withExclusionList:(id)arg2;
- (_Bool)acceptedForWebPaymentWithSupportedNetworkIdentifiers:(id)arg1 merchantCapabilities:(unsigned long long)arg2 paymentMode:(long long)arg3 webService:(id)arg4;
- (_Bool)acceptedForNonWebPaymentWithSupportedNetworkIdentifiers:(id)arg1 merchantCapabilities:(unsigned long long)arg2 paymentMode:(long long)arg3 paymentApplicationStates:(id)arg4;
- (_Bool)acceptedForWebPaymentWithSupportedNetworkIdentifiers:(id)arg1 merchantCapabilities:(unsigned long long)arg2 paymentMode:(long long)arg3 webService:(id)arg4 paymentApplicationStates:(id)arg5;
- (_Bool)supportsWebPaymentMode:(long long)arg1 withExclusionList:(id)arg2 clientOSVersion:(id)arg3;
- (id)initWithPaymentApplicationDictionary:(id)arg1 auxiliaryApplication:(_Bool)arg2;
- (void)_createAutomaticSelectionCriteriaIfNecessary;
- (_Bool)isEqualToPaymentApplication:(id)arg1;
- (_Bool)supportsExpressForAutomaticPresentationTechnologyType:(long long)arg1;

@end
