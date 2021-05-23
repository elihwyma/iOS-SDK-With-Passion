/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSDate, NSDecimalNumber, NSString;

@interface PKInstallmentPlanSummary : NSObject <Swift>

{
    NSDate *_startDate;
    NSDate *_originalEndDate;
    NSDate *_currentEndDate;
    NSDecimalNumber *_currentBalance;
    NSString *_currencyCode;
    NSDecimalNumber *_minimumDue;
    NSDate *_minimumDueDate;
    NSDecimalNumber *_interestCharged;
    NSDecimalNumber *_paymentsToDateAmount;
}

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *originalEndDate;
@property (retain, nonatomic) NSDate *currentEndDate;
@property (retain, nonatomic) NSDecimalNumber *currentBalance;
@property (copy, nonatomic) NSString *currencyCode;
@property (retain, nonatomic) NSDecimalNumber *minimumDue;
@property (retain, nonatomic) NSDate *minimumDueDate;
@property (retain, nonatomic) NSDecimalNumber *interestCharged;
@property (retain, nonatomic) NSDecimalNumber *paymentsToDateAmount;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (_Bool)isEqualToInstallmentPlanSummary:(id)arg1;

@end
