/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBDecimalNumberValue, _INPBValueMetadata;

@protocol _INPBCurrencyAmountValue <Swift>

@property (retain, nonatomic) _INPBDecimalNumberValue *amount;
@property (nonatomic, readonly) _Bool hasAmount;
@property (copy, nonatomic) NSString *currencyCode;
@property (nonatomic, readonly) _Bool hasCurrencyCode;
@property (retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property (nonatomic, readonly) _Bool hasValueMetadata;

@end
