/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBPaymentRecord;

@protocol _INPBSendPaymentIntentResponse <Swift>

@property (retain, nonatomic) _INPBPaymentRecord *paymentRecord;
@property (nonatomic, readonly) _Bool hasPaymentRecord;

@end
