/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSArray, NSString;

@interface PKEntitlementWhitelist : NSObject

{
    _Bool _passesAllAccess;
    _Bool _passesOverviewAccess;
    _Bool _passesAddSilently;
    _Bool _passPresentationSuppression;
    _Bool _paymentAllAccess;
    _Bool _paymentConfiguration;
    _Bool _paymentPresentation;
    _Bool _applePayTrustAllAccess;
    _Bool _inAppPayments;
    _Bool _inAppPaymentsPrivate;
    _Bool _manualPaymentPassProvisioning;
    _Bool _webPayments;
    _Bool _winterpegPayments;
    _Bool _cardOnFilePayments;
    _Bool _AMPCardEnrollment;
    _Bool _trustedDeviceEnrollmentInfo;
    _Bool _peerPaymentAllAccess;
    _Bool _featuresAllAccess;
    _Bool _supportsDisbursements;
    _Bool _addSilently;
    int _processIdentifier;
    NSString *_applicationID;
    NSString *_developerTeamID;
    NSArray *_merchantIdentifiers;
    NSArray *_teamIDs;
    NSArray *_passTypeIDs;
}

@property (copy) NSArray *teamIDs;
@property (copy) NSArray *passTypeIDs;
@property _Bool addSilently;
@property (readonly) int processIdentifier;
@property (readonly) _Bool passesAllAccess;
@property (readonly) _Bool passesOverviewAccess;
@property (readonly) _Bool passesAddSilently;
@property (readonly) _Bool passPresentationSuppression;
@property (readonly) _Bool paymentAllAccess;
@property (readonly) _Bool paymentConfiguration;
@property (readonly) _Bool paymentPresentation;
@property (readonly) _Bool applePayTrustAllAccess;
@property (readonly) _Bool inAppPayments;
@property (readonly) _Bool inAppPaymentsPrivate;
@property (readonly) _Bool manualPaymentPassProvisioning;
@property (readonly) _Bool webPayments;
@property (readonly) _Bool winterpegPayments;
@property (readonly) _Bool cardOnFilePayments;
@property (readonly) _Bool AMPCardEnrollment;
@property (readonly) _Bool trustedDeviceEnrollmentInfo;
@property (readonly) _Bool peerPaymentAllAccess;
@property (readonly) _Bool featuresAllAccess;
@property (readonly) _Bool supportsDisbursements;
@property (copy, readonly) NSString *applicationID;
@property (copy, readonly) NSString *developerTeamID;
@property (copy, readonly) NSArray *merchantIdentifiers;
@property (readonly) _Bool allAccess;

+ (_Bool)supportsSecureCoding;

- (id)initWithConnection:(id)arg1;
- (void)_probeEntitlementsWithConnection:(id)arg1;
- (_Bool)isEntitledForMerchantSession:(id)arg1;
- (void *)_copyValueOfEntitlement:(id)arg1 fromSecTask:(struct __SecTask *)arg2;
- (_Bool)_boolValueOfEntitlement:(id)arg1 fromSecTask:(struct __SecTask *)arg2;
- (id)_stringValueOfEntitlement:(id)arg1 fromSecTask:(struct __SecTask *)arg2;
- (id)_arrayValueOfEntitlement:(id)arg1 fromSecTask:(struct __SecTask *)arg2;
- (_Bool)supportsWebPayments;
- (_Bool)isEntitledForPaymentRequest:(id)arg1;

@end
