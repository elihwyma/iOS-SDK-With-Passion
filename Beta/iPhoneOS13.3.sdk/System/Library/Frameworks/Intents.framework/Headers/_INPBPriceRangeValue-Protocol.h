/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBDecimalNumberValue, _INPBValueMetadata;

@protocol _INPBPriceRangeValue <Swift>

@property (copy, nonatomic) NSString *currencyCode;
@property (nonatomic, readonly) _Bool hasCurrencyCode;
@property (retain, nonatomic) _INPBDecimalNumberValue *maximumPrice;
@property (nonatomic, readonly) _Bool hasMaximumPrice;
@property (retain, nonatomic) _INPBDecimalNumberValue *minimumPrice;
@property (nonatomic, readonly) _Bool hasMinimumPrice;
@property (retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property (nonatomic, readonly) _Bool hasValueMetadata;

@end
