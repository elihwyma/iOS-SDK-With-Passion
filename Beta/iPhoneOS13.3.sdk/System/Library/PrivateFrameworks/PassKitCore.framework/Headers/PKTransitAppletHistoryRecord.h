/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSData, NSDate, NSDecimalNumber, NSNumber, NSString;

@interface PKTransitAppletHistoryRecord : NSObject <Swift>

{
    unsigned long long _transitModifiers;
    NSNumber *_historySequenceNumber;
    unsigned long long _type;
    unsigned long long _subtype;
    unsigned long long _detail;
    NSDate *_time;
    NSDecimalNumber *_balance;
    NSNumber *_loyaltyBalance;
    NSDecimalNumber *_amount;
    NSNumber *_loyaltyAmount;
    NSNumber *_cityCode;
    NSData *_startStation;
    NSData *_endStation;
    NSString *_transitDetail;
    long long _recordType;
}

@property (nonatomic, readonly) long long paymentTransactionType;
@property (nonatomic, readonly) long long transitTransactionSubtype;
@property (nonatomic, readonly) unsigned long long transitTransactionModifier;
@property (copy, nonatomic) NSNumber *historySequenceNumber;
@property (copy, nonatomic) NSString *transitDetail;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long subtype;
@property (nonatomic) unsigned long long detail;
@property (copy, nonatomic) NSDate *time;
@property (copy, nonatomic) NSDecimalNumber *balance;
@property (copy, nonatomic) NSNumber *loyaltyBalance;
@property (copy, nonatomic) NSDecimalNumber *amount;
@property (copy, nonatomic) NSNumber *loyaltyAmount;
@property (copy, nonatomic) NSData *startStation;
@property (copy, nonatomic) NSData *endStation;
@property (copy, nonatomic) NSNumber *cityCode;
@property (nonatomic, readonly) long long paymentTransactionType;
@property (nonatomic, readonly) long long transitTransactionSubtype;
@property (nonatomic, readonly) unsigned long long transitTransactionModifier;
@property (nonatomic) long long recordType;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)felicaHistoryRecord;
- (id)concreteTransactionWithCurrency:(id)arg1;
- (void)_setTransactionHistoryDetailsFromString:(id)arg1;

@end
