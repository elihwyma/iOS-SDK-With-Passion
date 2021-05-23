/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentDataItem.h>

@class NSDate, NSTimeZone;

@interface PKPaymentDateDataItem : PKPaymentDataItem

{
    NSDate *_paymentDate;
    NSTimeZone *_paymentTimeZone;
    long long _paymentFrequency;
}

@property (retain, nonatomic) NSDate *paymentDate;
@property (retain, nonatomic) NSTimeZone *paymentTimeZone;
@property (nonatomic) long long paymentFrequency;

+ (long long)dataType;

- (id)initWithModel:(id)arg1;
- (_Bool)isValidWithError:(id *)arg1;

@end
