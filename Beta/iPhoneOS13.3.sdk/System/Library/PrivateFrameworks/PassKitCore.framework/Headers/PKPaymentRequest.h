/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class AKAppleIDAuthenticationContext, NSArray, NSData, NSDate, NSSet, NSString, NSTimeZone, NSURL, PKApplePayTrustSignatureRequest, PKContact, PKPaymentInstallmentConfiguration, PKPaymentMerchantSession;

@interface PKPaymentRequest : NSObject <Swift>

{
    _Bool _expectsMerchantSession;
    _Bool _accountPaymentSupportsPeerPayment;
    _Bool _accountPaymentUsePeerPaymentBalance;
    _Bool _deviceSupportsPeerPaymentAccountPayment;
    _Bool _suppressTotal;
    _Bool _shippingEditable;
    _Bool _requiresAddressPrecision;
    _Bool _supportsInstantFundsIn;
    NSString *_merchantIdentifier;
    NSString *_countryCode;
    NSArray *_supportedNetworks;
    unsigned long long _merchantCapabilities;
    NSArray *_paymentSummaryItems;
    NSString *_currencyCode;
    NSSet *_requiredBillingContactFields;
    PKContact *_billingContact;
    NSSet *_requiredShippingContactFields;
    PKContact *_shippingContact;
    NSArray *_shippingMethods;
    unsigned long long _shippingType;
    NSData *_applicationData;
    NSSet *_supportedCountries;
    const void *_shippingAddress;
    const void *_billingAddress;
    NSArray *_thumbnailURLs;
    NSURL *_originatingURL;
    NSString *_sourceApplicationBundleIdentifier;
    NSString *_sourceApplicationSecondaryIdentifier;
    NSString *_CTDataConnectionServiceType;
    NSString *_boundInterfaceIdentifier;
    PKApplePayTrustSignatureRequest *_applePayTrustSignatureRequest;
    NSArray *_bankAccounts;
    long long _paymentFrequency;
    NSDate *_paymentDate;
    NSTimeZone *_paymentTimeZone;
    unsigned long long _APIType;
    unsigned long long _requestType;
    unsigned long long _requestor;
    NSArray *_paymentContentItems;
    NSString *_localizedSummaryItemsTitle;
    NSData *_externalizedContext;
    struct __SecAccessControl *_accesssControlRef;
    AKAppleIDAuthenticationContext *_appleIDAuthenticationContext;
    NSString *_localizedNavigationTitle;
    unsigned long long _confirmationStyle;
    NSString *_localizedConfirmationTitle;
    NSString *_localizedBiometricConfirmationTitle;
    NSString *_localizedPasswordButtonTitle;
    NSString *_shippingEditableMessage;
    PKPaymentMerchantSession *_merchantSession;
    NSString *_passTypeIdentifier;
    NSString *_passSerialNumber;
    double _clientCallbackTimeout;
    PKPaymentInstallmentConfiguration *_installmentConfiguration;
}

@property (retain, nonatomic) NSArray *thumbnailURLs;
@property (retain, nonatomic) NSURL *originatingURL;
@property (nonatomic) _Bool expectsMerchantSession;
@property (retain, nonatomic) NSString *sourceApplicationBundleIdentifier;
@property (retain, nonatomic) NSString *sourceApplicationSecondaryIdentifier;
@property (retain, nonatomic) NSString *CTDataConnectionServiceType;
@property (copy, nonatomic) NSString *boundInterfaceIdentifier;
@property (retain, nonatomic) PKApplePayTrustSignatureRequest *applePayTrustSignatureRequest;
@property (retain, nonatomic) NSArray *bankAccounts;
@property (nonatomic) _Bool accountPaymentSupportsPeerPayment;
@property (nonatomic) _Bool accountPaymentUsePeerPaymentBalance;
@property (nonatomic) _Bool deviceSupportsPeerPaymentAccountPayment;
@property (nonatomic) long long paymentFrequency;
@property (copy, nonatomic) NSDate *paymentDate;
@property (copy, nonatomic) NSTimeZone *paymentTimeZone;
@property (readonly) _Bool _isPSD2StyleRequest;
@property (readonly) _Bool _isAMPPayment;
@property (nonatomic) unsigned long long APIType;
@property (nonatomic) unsigned long long requestType;
@property (nonatomic) unsigned long long requestor;
@property (copy, nonatomic) NSArray *paymentContentItems;
@property (nonatomic) _Bool suppressTotal;
@property (copy, nonatomic) NSString *localizedSummaryItemsTitle;
@property (copy, nonatomic) NSData *externalizedContext;
@property (nonatomic) struct __SecAccessControl *accesssControlRef;
@property (retain, nonatomic) AKAppleIDAuthenticationContext *appleIDAuthenticationContext;
@property (copy, nonatomic) NSString *localizedNavigationTitle;
@property (nonatomic) unsigned long long confirmationStyle;
@property (copy, nonatomic) NSString *localizedConfirmationTitle;
@property (copy, nonatomic) NSString *localizedBiometricConfirmationTitle;
@property (copy, nonatomic) NSString *localizedPasswordButtonTitle;
@property (nonatomic, getter=isShippingEditable) _Bool shippingEditable;
@property (copy, nonatomic) NSString *shippingEditableMessage;
@property (nonatomic) _Bool requiresAddressPrecision;
@property (retain, nonatomic) PKPaymentMerchantSession *merchantSession;
@property (copy, nonatomic) NSString *passTypeIdentifier;
@property (copy, nonatomic) NSString *passSerialNumber;
@property (nonatomic) double clientCallbackTimeout;
@property (nonatomic) _Bool supportsInstantFundsIn;
@property (retain, nonatomic) PKPaymentInstallmentConfiguration *installmentConfiguration;
@property (copy, nonatomic) NSString *merchantIdentifier;
@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSArray *supportedNetworks;
@property (nonatomic) unsigned long long merchantCapabilities;
@property (copy, nonatomic) NSArray *paymentSummaryItems;
@property (copy, nonatomic) NSString *currencyCode;
@property (retain, nonatomic) NSSet *requiredBillingContactFields;
@property (nonatomic) unsigned long long requiredBillingAddressFields;
@property (retain, nonatomic) PKContact *billingContact;
@property (retain, nonatomic) NSSet *requiredShippingContactFields;
@property (nonatomic) unsigned long long requiredShippingAddressFields;
@property (retain, nonatomic) PKContact *shippingContact;
@property (copy, nonatomic) NSArray *shippingMethods;
@property (nonatomic) unsigned long long shippingType;
@property (copy, nonatomic) NSData *applicationData;
@property (copy, nonatomic) NSSet *supportedCountries;
@property (nonatomic) const void *shippingAddress;
@property (nonatomic) const void *billingAddress;

+ (_Bool)supportsSecureCoding;
+ (long long)version;
+ (id)availableNetworks;
+ (id)paymentContactInvalidErrorWithContactField:(id)arg1 localizedDescription:(id)arg2;
+ (id)requestWithProtobuf:(id)arg1;
+ (id)paymentBillingAddressInvalidErrorWithKey:(id)arg1 localizedDescription:(id)arg2;
+ (id)paymentShippingAddressInvalidErrorWithKey:(id)arg1 localizedDescription:(id)arg2;
+ (id)paymentShippingAddressUnserviceableErrorWithLocalizedDescription:(id)arg1;
+ (id)errorFromDictionary:(id)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;
- (id)protobuf;
- (id)_transactionAmount;
- (_Bool)isPeerPaymentRequest;
- (id)peerPaymentRequest;
- (_Bool)isDisbursementPaymentRequest;
- (_Bool)isServiceProviderPaymentRequest;
- (id)serviceProviderPaymentRequest;
- (id)disbursementPaymentRequest;
- (_Bool)isEqualToPaymentRequest:(id)arg1;
- (id)_addressFieldsToContactFields:(unsigned long long)arg1;
- (unsigned long long)_contactFieldsToAddressFields:(id)arg1;

@end
