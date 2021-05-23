/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBDecimalNumberValue;

@protocol _INPBRideFareLineItem <Swift>

@property (copy, nonatomic) NSString *currencyCode;
@property (nonatomic, readonly) _Bool hasCurrencyCode;
@property (retain, nonatomic) _INPBDecimalNumberValue *price;
@property (nonatomic, readonly) _Bool hasPrice;
@property (copy, nonatomic) NSString *title;
@property (nonatomic, readonly) _Bool hasTitle;

@end
