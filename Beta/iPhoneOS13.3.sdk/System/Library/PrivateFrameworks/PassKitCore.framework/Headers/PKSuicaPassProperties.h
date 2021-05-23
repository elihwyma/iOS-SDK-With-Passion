/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKTransitPassProperties.h>

@class NSDecimalNumber, NSString;

@interface PKSuicaPassProperties : PKTransitPassProperties

{
    _Bool _balanceAllowedForCommute;
    _Bool _lowBalanceGateNotificationEnabled;
    _Bool _greenCarTicketUsed;
}

@property (copy, nonatomic, readonly) NSDecimalNumber *transitBalance;
@property (copy, nonatomic, readonly) NSString *transitBalanceCurrencyCode;
@property (nonatomic, readonly, getter=isInStation) _Bool inStation;
@property (nonatomic, readonly, getter=isInShinkansenStation) _Bool inShinkansenStation;
@property (nonatomic, readonly, getter=isBalanceAllowedForCommute) _Bool balanceAllowedForCommute;
@property (nonatomic, readonly, getter=isLowBalanceGateNotificationEnabled) _Bool lowBalanceGateNotificationEnabled;
@property (nonatomic, readonly, getter=isGreenCarTicketUsed) _Bool greenCarTicketUsed;
@property (nonatomic, readonly, getter=isBlacklisted) _Bool blacklisted;

+ (id)passPropertiesForPass:(id)arg1;
+ (Class)equalityClass;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_initWithProperties:(id)arg1;

@end
