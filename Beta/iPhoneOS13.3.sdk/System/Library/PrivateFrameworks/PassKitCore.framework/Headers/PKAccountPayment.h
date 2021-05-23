/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSDate, NSString, PKAccountPaymentFundingSource, PKAccountPaymentScheduleDetails, PKCurrencyAmount;

@interface PKAccountPayment : NSObject <Swift>

{
    NSString *_identifier;
    NSString *_referenceIdentifier;
    NSString *_clientReferenceIdentifier;
    PKCurrencyAmount *_currencyAmount;
    NSDate *_paymentDate;
    NSDate *_paymentStatusDate;
    long long _state;
    long long _statusCode;
    PKAccountPaymentFundingSource *_fundingSource;
    PKAccountPaymentScheduleDetails *_scheduleDetails;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *referenceIdentifier;
@property (copy, nonatomic) NSString *clientReferenceIdentifier;
@property (retain, nonatomic) PKCurrencyAmount *currencyAmount;
@property (copy, nonatomic) NSDate *paymentDate;
@property (copy, nonatomic) NSDate *paymentStatusDate;
@property (nonatomic) long long state;
@property (nonatomic) long long statusCode;
@property (retain, nonatomic) PKAccountPaymentFundingSource *fundingSource;
@property (retain, nonatomic) PKAccountPaymentScheduleDetails *scheduleDetails;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)recordType;
+ (id)recordNamePrefix;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecord:(id)arg1;
- (void)encodeWithRecord:(id)arg1;
- (id)initWithDictionary:(id)arg1 productTimeZone:(id)arg2;
- (_Bool)isRecurring;
- (_Bool)isOnHoldForAccount:(id)arg1;

@end
