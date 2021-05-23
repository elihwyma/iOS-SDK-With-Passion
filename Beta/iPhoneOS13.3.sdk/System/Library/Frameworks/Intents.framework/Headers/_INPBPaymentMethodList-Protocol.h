/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, _INPBCondition;

@protocol _INPBPaymentMethodList <Swift>

@property (retain, nonatomic) _INPBCondition *condition;
@property (nonatomic, readonly) _Bool hasCondition;
@property (copy, nonatomic) NSArray *paymentMethods;
@property (nonatomic, readonly) unsigned long long paymentMethodsCount;

+ (unsigned short)paymentMethodsType;

- (unsigned short)clearPaymentMethods;
- (unsigned short)addPaymentMethods: /* Error: Ran out of types for this method. */;
- (unsigned short)paymentMethodsAtIndex: /* Error: Ran out of types for this method. */;

@end
