/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSArray, NSDate, NSDecimalNumber, NSNumber, NSString, PKFelicaTransitAppletState;

@interface PKTransitAppletState : NSObject <Swift>

{
    _Bool _blacklisted;
    _Bool _needsStationProcessing;
    NSNumber *_historySequenceNumber;
    NSDecimalNumber *_balance;
    NSNumber *_loyaltyBalance;
    NSString *_currency;
    NSDate *_expirationDate;
    NSArray *_enrouteTransitTypes;
}

@property (nonatomic, readonly) PKFelicaTransitAppletState *felicaState;
@property (nonatomic, getter=isBlacklisted) _Bool blacklisted;
@property (copy, nonatomic) NSNumber *historySequenceNumber;
@property (copy, nonatomic) NSDecimalNumber *balance;
@property (copy, nonatomic) NSNumber *loyaltyBalance;
@property (copy, nonatomic) NSString *currency;
@property (copy, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSArray *enrouteTransitTypes;
@property (nonatomic) _Bool needsStationProcessing;
@property (nonatomic, readonly, getter=isInStation) _Bool inStation;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)addEnrouteTransitType:(id)arg1;
- (id)updatedEnrouteTransitTypesFromExistingTypes:(id)arg1 newTypes:(id)arg2;
- (void)_resolveTransactionsFromState:(id)arg1 toState:(id)arg2 withHistoryRecords:(id)arg3 concreteTransactions:(id *)arg4 ephemeralTransaction:(id *)arg5;
- (id)processUpdateWithAppletHistory:(id)arg1 concreteTransactions:(id *)arg2 ephemeralTransaction:(id *)arg3;
- (id)transitPassPropertiesWithPaymentApplication:(id)arg1;
- (id)processUpdateWithAppletHistory:(id)arg1 concreteTransactions:(id *)arg2 ephemeralTransactions:(id *)arg3;

@end
