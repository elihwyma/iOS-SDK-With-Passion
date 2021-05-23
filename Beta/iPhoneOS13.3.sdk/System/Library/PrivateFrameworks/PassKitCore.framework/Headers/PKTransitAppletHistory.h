/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSArray, NSDate, NSDecimalNumber, NSNumber, NSSet, NSString;

@interface PKTransitAppletHistory : NSObject <Swift>

{
    _Bool _blacklisted;
    long long _source;
    NSString *_serviceProvider;
    NSString *_currency;
    NSDecimalNumber *_balance;
    NSNumber *_loyaltyBalance;
    NSDate *_expirationDate;
    NSArray *_historyRecords;
    NSArray *_inStationDetails;
    NSSet *_enrouteTransitTypes;
}

@property (nonatomic) long long source;
@property (copy, nonatomic) NSString *serviceProvider;
@property (nonatomic, getter=isBlacklisted) _Bool blacklisted;
@property (copy, nonatomic) NSString *currency;
@property (copy, nonatomic) NSDecimalNumber *balance;
@property (copy, nonatomic) NSNumber *loyaltyBalance;
@property (retain, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSArray *historyRecords;
@property (copy, nonatomic) NSArray *inStationDetails;
@property (copy, nonatomic) NSSet *enrouteTransitTypes;
@property (nonatomic, readonly, getter=isInStation) _Bool inStation;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)felicaHistory;
- (id)initWithDictionary:(id)arg1 source:(long long)arg2;
- (void)sanitizeValuesWithState:(id)arg1;

@end
