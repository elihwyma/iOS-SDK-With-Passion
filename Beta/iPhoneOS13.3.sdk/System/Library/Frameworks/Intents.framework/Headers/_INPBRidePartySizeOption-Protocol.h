/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBPriceRangeValue, _INPBRangeValue;

@protocol _INPBRidePartySizeOption <Swift>

@property (retain, nonatomic) _INPBRangeValue *partySizeRange;
@property (nonatomic, readonly) _Bool hasPartySizeRange;
@property (retain, nonatomic) _INPBPriceRangeValue *priceRange;
@property (nonatomic, readonly) _Bool hasPriceRange;
@property (copy, nonatomic) NSString *sizeDescription;
@property (nonatomic, readonly) _Bool hasSizeDescription;

@end
