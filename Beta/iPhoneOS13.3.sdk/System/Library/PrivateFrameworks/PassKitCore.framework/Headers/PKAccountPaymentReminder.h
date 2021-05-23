/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSDate, NSDecimalNumber, NSString;

@interface PKAccountPaymentReminder : NSObject <Swift>

{
    NSDecimalNumber *_minimumDue;
    NSString *_currencyCode;
    NSDate *_paymentDueDate;
}

@property (copy, nonatomic) NSDecimalNumber *minimumDue;
@property (copy, nonatomic) NSString *currencyCode;
@property (copy, nonatomic) NSDate *paymentDueDate;
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
- (id)initWithDictionary:(id)arg1;
- (id)initWithRecord:(id)arg1;
- (void)encodeWithRecord:(id)arg1;

@end
