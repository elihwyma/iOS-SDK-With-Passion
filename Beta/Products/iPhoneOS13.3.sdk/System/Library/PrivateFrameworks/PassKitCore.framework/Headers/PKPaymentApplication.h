/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentApplication : NSObject <NSCopying, NSSecureCoding> {
    NSString * _appletCurrencyCode;
    NSString * _appletDataFormat;
    NSString * _applicationIdentifier;
    NSArray * _automaticSelectionCriteria;
    bool  _auxiliary;
    long long  _contactlessPriority;
    NSString * _displayName;
    NSString * _dpanIdentifier;
    NSString * _dpanSuffix;
    bool  _inAppPINRequired;
    NSDecimalNumber * _inAppPINRequiredAmount;
    NSString * _inAppPINRequiredCurrency;
    long long  _inAppPriority;
    long long  _paymentNetworkIdentifier;
    unsigned long long  _paymentType;
    bool  _requiresDeferredAuthorization;
    NSString * _sanitizedDPAN;
    NSString * _secureElementIdentifier;
    long long  _state;
    NSArray * _supportedExpressModes;
    NSArray * _supportedTransitNetworkIdentifiers;
    bool  _supportsContactlessPayment;
    bool  _supportsInAppPayment;
    bool  _supportsInstantFundsIn;
    bool  _supportsOptionalAuthentication;
    NSString * _suspendedReason;
    PKTransitPassProperties * _transitProperties;
}

@property (nonatomic, copy) NSString *appletCurrencyCode;
@property (nonatomic, copy) NSString *appletDataFormat;
@property (nonatomic, copy) NSString *applicationIdentifier;
@property (nonatomic, copy) NSArray *automaticSelectionCriteria;
@property (getter=isAuxiliary, nonatomic) bool auxiliary;
@property (nonatomic) long long contactlessPriority;
@property (nonatomic, copy) NSString *displayName;
@property (setter=setDPANIdentifier:, nonatomic, copy) NSString *dpanIdentifier;
@property (setter=setDPANSuffix:, nonatomic, copy) NSString *dpanSuffix;
@property (nonatomic, copy) PKFelicaPassProperties *felicaProperties;
@property (nonatomic, readonly) bool generatesLocalTransactions;
@property (nonatomic) bool inAppPINRequired;
@property (nonatomic, copy) NSDecimalNumber *inAppPINRequiredAmount;
@property (nonatomic, copy) NSString *inAppPINRequiredCurrency;
@property (nonatomic) long long inAppPriority;
@property (getter=isParsedTransitApplication, nonatomic, readonly) bool parsedTransitApplication;
@property (nonatomic) long long paymentNetworkIdentifier;
@property (nonatomic) unsigned long long paymentType;
@property (nonatomic) bool requiresDeferredAuthorization;
@property (setter=setSanitizedDPAN:, nonatomic, copy) NSString *sanitizedDPAN;
@property (nonatomic, copy) NSString *secureElementIdentifier;
@property (nonatomic) long long state;
@property (nonatomic, readonly) NSString *stateAsString;
@property (nonatomic, readonly) NSString *stationCodeProvider;
@property (nonatomic, copy) NSArray *supportedExpressModes;
@property (nonatomic, copy) NSArray *supportedTransitNetworkIdentifiers;
@property (nonatomic) bool supportsContactlessPayment;
@property (nonatomic, readonly) bool supportsExpressSuica;
@property (nonatomic, readonly) bool supportsExpressTransit;
@property (nonatomic) bool supportsInAppPayment;
@property (nonatomic) bool supportsInstantFundsIn;
@property (nonatomic) bool supportsOptionalAuthentication;
@property (nonatomic, readonly) bool supportsSuica;
@property (nonatomic, readonly) bool supportsTransit;
@property (nonatomic, readonly) bool supportsTransitHistory;
@property (nonatomic, copy) NSString *suspendedReason;
@property (nonatomic, copy) PKTransitPassProperties *transitProperties;

+ (id)applicationWithProtobuf:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_createAutomaticSelectionCriteriaIfNecessary;
- (bool)acceptedForNonWebPaymentWithSupportedNetworkIdentifiers:(id)arg1 merchantCapabilities:(unsigned long long)arg2 paymentMode:(long long)arg3;
- (bool)acceptedForNonWebPaymentWithSupportedNetworkIdentifiers:(id)arg1 merchantCapabilities:(unsigned long long)arg2 paymentMode:(long long)arg3 paymentApplicationStates:(id)arg4;
- (bool)acceptedForWebPaymentWithSupportedNetworkIdentifiers:(id)arg1 merchantCapabilities:(unsigned long long)arg2 paymentMode:(long long)arg3 webService:(id)arg4;
- (bool)acceptedForWebPaymentWithSupportedNetworkIdentifiers:(id)arg1 merchantCapabilities:(unsigned long long)arg2 paymentMode:(long long)arg3 webService:(id)arg4 paymentApplicationStates:(id)arg5;
- (id)appletCurrencyCode;
- (id)appletDataFormat;
- (id)applicationIdentifier;
- (id)automaticSelectionCriteria;
- (long long)contactlessPriority;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayName;
- (id)dpanIdentifier;
- (id)dpanSuffix;
- (void)encodeWithCoder:(id)arg1;
- (id)felicaProperties;
- (bool)generatesLocalTransactions;
- (unsigned long long)hash;
- (bool)inAppPINRequired;
- (id)inAppPINRequiredAmount;
- (id)inAppPINRequiredCurrency;
- (long long)inAppPriority;
- (id)initWithCoder:(id)arg1;
- (id)initWithPaymentApplicationDictionary:(id)arg1 auxiliaryApplication:(bool)arg2;
- (bool)isAuxiliary;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPaymentApplication:(id)arg1;
- (bool)isParsedTransitApplication;
- (long long)paymentNetworkIdentifier;
- (unsigned long long)paymentType;
- (id)protobuf;
- (bool)requiresDeferredAuthorization;
- (id)sanitizedDPAN;
- (id)secureElementIdentifier;
- (void)setAppletCurrencyCode:(id)arg1;
- (void)setAppletDataFormat:(id)arg1;
- (void)setApplicationIdentifier:(id)arg1;
- (void)setAutomaticSelectionCriteria:(id)arg1;
- (void)setAuxiliary:(bool)arg1;
- (void)setContactlessPriority:(long long)arg1;
- (void)setDPANIdentifier:(id)arg1;
- (void)setDPANSuffix:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setFelicaProperties:(id)arg1;
- (void)setInAppPINRequired:(bool)arg1;
- (void)setInAppPINRequiredAmount:(id)arg1;
- (void)setInAppPINRequiredCurrency:(id)arg1;
- (void)setInAppPriority:(long long)arg1;
- (void)setPaymentNetworkIdentifier:(long long)arg1;
- (void)setPaymentType:(unsigned long long)arg1;
- (void)setRequiresDeferredAuthorization:(bool)arg1;
- (void)setSanitizedDPAN:(id)arg1;
- (void)setSecureElementIdentifier:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setSupportedExpressModes:(id)arg1;
- (void)setSupportedTransitNetworkIdentifiers:(id)arg1;
- (void)setSupportsContactlessPayment:(bool)arg1;
- (void)setSupportsInAppPayment:(bool)arg1;
- (void)setSupportsInstantFundsIn:(bool)arg1;
- (void)setSupportsOptionalAuthentication:(bool)arg1;
- (void)setSuspendedReason:(id)arg1;
- (void)setTransitProperties:(id)arg1;
- (long long)state;
- (id)stateAsString;
- (id)stationCodeProvider;
- (id)supportedExpressModes;
- (id)supportedTransitNetworkIdentifiers;
- (bool)supportsContactlessPayment;
- (bool)supportsExpress;
- (bool)supportsExpressForAutomaticPresentationTechnologyType:(long long)arg1;
- (bool)supportsExpressMode:(id)arg1;
- (bool)supportsExpressSuica;
- (bool)supportsExpressTransit;
- (bool)supportsInAppPayment;
- (bool)supportsInstantFundsIn;
- (bool)supportsOptionalAuthentication;
- (bool)supportsSuica;
- (bool)supportsTransit;
- (bool)supportsTransitHistory;
- (bool)supportsWebPaymentMode:(long long)arg1 withExclusionList:(id)arg2;
- (bool)supportsWebPaymentMode:(long long)arg1 withExclusionList:(id)arg2 clientOSVersion:(id)arg3;
- (id)suspendedReason;
- (id)transitProperties;

@end