/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKAccountDetails.h>

@class NSDate, NSSet, NSString, NSTimeZone, NSURL, PKCreditAccountRates, PKCreditAccountSummary, PKCurrencyAmount;

@interface PKCreditAccountDetails : PKAccountDetails

{
    _Bool _termsAcceptanceRequired;
    NSDate *_lastUpdatedDate;
    NSDate *_createdDate;
    NSString *_countryCode;
    NSString *_currencyCode;
    NSTimeZone *_productTimeZone;
    NSSet *_physicalCards;
    NSSet *_virtualCards;
    NSString *_termsIdentifier;
    NSURL *_termsURL;
    NSURL *_associatedPassURL;
    NSString *_associatedPassTypeIdentifier;
    NSString *_associatedPassSerialNumber;
    long long _cardType;
    PKCreditAccountSummary *_accountSummary;
    PKCreditAccountRates *_rates;
    NSSet *_installmentPlans;
}

@property (copy, nonatomic) NSDate *lastUpdatedDate;
@property (copy, nonatomic) NSDate *createdDate;
@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSString *currencyCode;
@property (retain, nonatomic) NSTimeZone *productTimeZone;
@property (copy, nonatomic) NSSet *physicalCards;
@property (copy, nonatomic) NSSet *virtualCards;
@property (nonatomic) _Bool termsAcceptanceRequired;
@property (copy, nonatomic) NSString *termsIdentifier;
@property (copy, nonatomic) NSURL *termsURL;
@property (copy, nonatomic) NSURL *associatedPassURL;
@property (copy, nonatomic) NSString *associatedPassTypeIdentifier;
@property (copy, nonatomic) NSString *associatedPassSerialNumber;
@property (nonatomic) long long cardType;
@property (retain, nonatomic) PKCreditAccountSummary *accountSummary;
@property (retain, nonatomic) PKCreditAccountRates *rates;
@property (copy, nonatomic) NSSet *installmentPlans;
@property (copy, nonatomic, readonly) PKCurrencyAmount *cardBalance;
@property (copy, nonatomic, readonly) PKCurrencyAmount *totalBalance;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)ingestExtendedAccountDetails:(id)arg1;
- (id)installmentPlanWithIdentifier:(id)arg1;
- (void)addOrUpdateVirtualCard:(id)arg1;
- (void)removeVirtualCard:(id)arg1;
- (id)virtualCardWithIdentifier:(id)arg1;
- (void)addOrUpdatePhysicalCard:(id)arg1;
- (long long)numberOfActiveInstallments;
- (long long)numberOfActiveStatementedInstallments;

@end
