/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSDate, NSDecimalNumber, NSString;

@interface PKBillPaymentSelectedSuggestedAmountData : NSObject <Swift>

{
    NSString *_statementIdentifier;
    NSDate *_transactionDate;
    unsigned long long _suggestedAmountCategory;
    NSDecimalNumber *_transactionAmount;
}

@property (copy, nonatomic) NSString *statementIdentifier;
@property (copy, nonatomic) NSDate *transactionDate;
@property (nonatomic) unsigned long long suggestedAmountCategory;
@property (copy, nonatomic) NSDecimalNumber *transactionAmount;
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
- (id)initWithStatementIdentifier:(id)arg1 transactionDate:(id)arg2 transactionAmount:(id)arg3 suggestedAmountCategory:(unsigned long long)arg4;

@end
