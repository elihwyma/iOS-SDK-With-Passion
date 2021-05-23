/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBContact, _INPBCurrencyAmount, _INPBIntentMetadata, _INPBString;

@protocol _INPBRequestPaymentIntent <Swift>

@property (retain, nonatomic) _INPBCurrencyAmount *currencyAmount;
@property (nonatomic, readonly) _Bool hasCurrencyAmount;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (retain, nonatomic) _INPBString *note;
@property (nonatomic, readonly) _Bool hasNote;
@property (retain, nonatomic) _INPBContact *payer;
@property (nonatomic, readonly) _Bool hasPayer;

@end
