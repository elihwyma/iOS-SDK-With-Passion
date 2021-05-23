/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSArray, NSDate, NSDecimalNumber, NSString, PKCreditAccountStatement;

@interface PKInstallmentPlanPayment : NSObject <Swift>

{
    NSString *_identifier;
    NSString *_statementIdentifier;
    NSString *_currencyCode;
    NSDecimalNumber *_originalAmountDue;
    NSDecimalNumber *_amountDue;
    NSDecimalNumber *_amountPaid;
    NSDate *_dueDate;
    NSArray *_lineItems;
    unsigned long long _paymentNumber;
    unsigned long long _paymentCount;
    PKCreditAccountStatement *_statement;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *statementIdentifier;
@property (copy, nonatomic) NSString *currencyCode;
@property (retain, nonatomic) NSDecimalNumber *originalAmountDue;
@property (retain, nonatomic) NSDecimalNumber *amountDue;
@property (retain, nonatomic) NSDecimalNumber *amountPaid;
@property (retain, nonatomic) NSDate *dueDate;
@property (copy, nonatomic) NSArray *lineItems;
@property (nonatomic) unsigned long long paymentNumber;
@property (nonatomic) unsigned long long paymentCount;
@property (nonatomic, readonly, getter=isPaid) _Bool paid;
@property (retain, nonatomic) PKCreditAccountStatement *statement;
@property (nonatomic, readonly) NSString *localizedDisplay;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (_Bool)isEqualToInstallmentPlanPayment:(id)arg1;

@end
