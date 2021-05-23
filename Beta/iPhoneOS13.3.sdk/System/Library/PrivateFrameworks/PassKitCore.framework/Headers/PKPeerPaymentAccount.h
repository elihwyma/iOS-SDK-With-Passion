/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSArray, NSDate, NSDecimalNumber, NSDictionary, NSString, NSURL, PKCurrencyAmount;

@interface PKPeerPaymentAccount : NSObject <Swift>

{
    _Bool _accountStateDirty;
    _Bool _identityVerificationForDisbursementsRequired;
    _Bool _identityVerificationRequired;
    _Bool _termsAcceptanceRequired;
    unsigned long long _state;
    unsigned long long _stage;
    NSString *_countryCode;
    PKCurrencyAmount *_currentBalance;
    NSDecimalNumber *_maximumBalance;
    NSDate *_lastUpdated;
    double _proactiveFetchPeriod;
    NSURL *_associatedPassURL;
    long long _pendingPaymentCount;
    NSArray *_supportedFeatureDescriptors;
    NSString *_termsIdentifier;
    NSURL *_termsURL;
    NSString *_associatedPassSerialNumber;
    NSString *_associatedPassTypeIdentifier;
}

@property (nonatomic, readonly) NSDictionary *minimumTransferAmounts;
@property (nonatomic, readonly) NSDictionary *maximumTransferAmounts;
@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long stage;
@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) PKCurrencyAmount *currentBalance;
@property (copy, nonatomic) NSDecimalNumber *maximumBalance;
@property (nonatomic) _Bool identityVerificationRequired;
@property (retain, nonatomic) NSDate *lastUpdated;
@property (nonatomic) double proactiveFetchPeriod;
@property (nonatomic) _Bool termsAcceptanceRequired;
@property (copy, nonatomic) NSString *termsIdentifier;
@property (copy, nonatomic) NSURL *termsURL;
@property (copy, nonatomic) NSURL *associatedPassURL;
@property (copy, nonatomic) NSString *associatedPassSerialNumber;
@property (copy, nonatomic) NSString *associatedPassTypeIdentifier;
@property (copy, nonatomic) NSArray *supportedFeatureDescriptors;
@property (nonatomic) long long pendingPaymentCount;
@property (nonatomic) _Bool identityVerificationForDisbursementsRequired;
@property (copy, nonatomic, readonly) NSArray *defaultSuggestions;
@property (nonatomic, getter=isAccountStateDirty) _Bool accountStateDirty;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)associatedPassUniqueID;
- (id)_featureWithIdentifier:(id)arg1;
- (_Bool)supportsCardBalancePromotion;
- (id)loadFromCardFeatureDescriptor;
- (id)sendToUserFeatureDescriptor;
- (id)instantWithdrawalPromotionFeatureDescriptor;
- (id)initWithDictionary:(id)arg1 lastUpdated:(id)arg2;
- (_Bool)isAccountOutOfDate;
- (id)transferToBankFeatureDescriptor;
- (id)requestFromUserFeatureDescriptor;
- (id)cardBalancePromotionFeatureDescriptor;
- (_Bool)supportsLoadFromCard;
- (_Bool)supportsTransferToBank;
- (_Bool)supportsSendToUser;
- (_Bool)supportsRequestFromUser;
- (_Bool)supportsInstantWithdrawal;

@end
