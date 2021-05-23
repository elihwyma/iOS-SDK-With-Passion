/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSDecimalNumber, NSString;

@protocol INPriceRangeExport <Swift>

@property (copy, nonatomic) NSDecimalNumber *minimumPrice;
@property (copy, nonatomic) NSDecimalNumber *maximumPrice;
@property (copy, nonatomic) NSString *currencyCode;

+ (unsigned short)_priceWithPriceRangeValue: /* Error: Ran out of types for this method. */;

- (unsigned short)init;

@end
