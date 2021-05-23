/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class INBillPayee, INCurrencyAmount, NSDateComponents, NSString;

@interface INBillDetails : NSObject <Swift>

{
    INBillPayee *_billPayee;
    INCurrencyAmount *_amountDue;
    INCurrencyAmount *_minimumDue;
    INCurrencyAmount *_lateFee;
    NSDateComponents *_dueDate;
    NSDateComponents *_paymentDate;
    long long _billType;
    long long _paymentStatus;
}

@property (copy, nonatomic) INBillPayee *billPayee;
@property (copy, nonatomic) INCurrencyAmount *amountDue;
@property (copy, nonatomic) INCurrencyAmount *minimumDue;
@property (copy, nonatomic) INCurrencyAmount *lateFee;
@property (copy, nonatomic) NSDateComponents *dueDate;
@property (copy, nonatomic) NSDateComponents *paymentDate;
@property (nonatomic) long long billType;
@property (nonatomic) long long paymentStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_dictionaryRepresentation;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)initWithBillType:(long long)arg1 paymentStatus:(long long)arg2 billPayee:(id)arg3 amountDue:(id)arg4 minimumDue:(id)arg5 lateFee:(id)arg6 dueDate:(id)arg7 paymentDate:(id)arg8;

@end
