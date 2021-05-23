/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class NSDecimalNumber, NSString;

@interface INPriceRange : NSObject <Swift>

{
    NSDecimalNumber *_minimumPrice;
    NSDecimalNumber *_maximumPrice;
    NSString *_currencyCode;
}

@property (nonatomic, readonly) NSDecimalNumber *minimumPrice;
@property (nonatomic, readonly) NSDecimalNumber *maximumPrice;
@property (nonatomic, readonly) NSString *currencyCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)_priceWithPriceRangeValue:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)initWithRangeBetweenPrice:(id)arg1 andPrice:(id)arg2 currencyCode:(id)arg3;
- (id)initWithMaximumPrice:(id)arg1 currencyCode:(id)arg2;
- (id)initWithMinimumPrice:(id)arg1 currencyCode:(id)arg2;
- (id)initWithPrice:(id)arg1 currencyCode:(id)arg2;
- (id)_formattedStringWithLocale:(id)arg1 componentsFormatString:(id)arg2;

@end
