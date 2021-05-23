/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class INCurrencyAmount, INPaymentMethod, INPerson, NSString;

@interface INPaymentRecord : NSObject <Swift>

{
    INPerson *_payee;
    INPerson *_payer;
    INCurrencyAmount *_currencyAmount;
    NSString *_note;
    long long _status;
    INPaymentMethod *_paymentMethod;
    INCurrencyAmount *_feeAmount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) INPerson *payee;
@property (copy, nonatomic, readonly) INPerson *payer;
@property (copy, nonatomic, readonly) INCurrencyAmount *currencyAmount;
@property (copy, nonatomic, readonly) NSString *note;
@property (nonatomic, readonly) long long status;
@property (copy, nonatomic, readonly) INPaymentMethod *paymentMethod;
@property (copy, nonatomic, readonly) INCurrencyAmount *feeAmount;
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
- (id)_intents_cacheableObjects;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)initWithPayee:(id)arg1 payer:(id)arg2 currencyAmount:(id)arg3 paymentMethod:(id)arg4 note:(id)arg5 status:(long long)arg6 feeAmount:(id)arg7;
- (id)initWithPayee:(id)arg1 payer:(id)arg2 currencyAmount:(id)arg3 paymentMethod:(id)arg4 note:(id)arg5 status:(long long)arg6;

@end
