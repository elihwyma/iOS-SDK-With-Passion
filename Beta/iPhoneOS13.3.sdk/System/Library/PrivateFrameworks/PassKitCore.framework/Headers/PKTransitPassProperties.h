/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSArray, NSDate, NSDecimalNumber, NSString, PKCurrencyAmount, PKFelicaPassProperties;

@interface PKTransitPassProperties : NSObject <Swift>

{
    _Bool _blacklisted;
    NSDate *_expirationDate;
    NSString *_appletFormat;
    PKCurrencyAmount *_balance;
    NSArray *_enrouteTransitTypes;
}

@property (nonatomic, readonly) PKFelicaPassProperties *felicaProperties;
@property (copy, nonatomic) NSString *appletFormat;
@property (copy, nonatomic) PKCurrencyAmount *balance;
@property (copy, nonatomic) NSDate *expirationDate;
@property (nonatomic, getter=isBlacklisted) _Bool blacklisted;
@property (nonatomic, readonly) NSString *displayableTransitBalance;
@property (nonatomic, readonly) NSDecimalNumber *decimalTransitBalance;
@property (nonatomic, readonly) NSString *currencyCode;
@property (copy, nonatomic) NSArray *enrouteTransitTypes;
@property (nonatomic, readonly) _Bool isEnRoute;
@property (copy, nonatomic, readonly) NSDecimalNumber *transitBalance;
@property (copy, nonatomic, readonly) NSString *transitBalanceCurrencyCode;
@property (nonatomic, readonly, getter=isInStation) _Bool inStation;

+ (_Bool)supportsSecureCoding;
+ (id)passPropertiesForPass:(id)arg1;
+ (Class)equalityClass;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTransitAppletState:(id)arg1 paymentApplication:(id)arg2;

@end
