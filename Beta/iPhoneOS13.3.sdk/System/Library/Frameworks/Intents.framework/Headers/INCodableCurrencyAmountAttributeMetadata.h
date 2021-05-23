/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INCodableNumberAttributeMetadata.h>

@class NSArray, NSString;

@interface INCodableCurrencyAmountAttributeMetadata : INCodableNumberAttributeMetadata

{
    NSString *_currencyCode;
    NSArray *_currencyCodes;
}

@property (copy, nonatomic) NSString *currencyCode;
@property (nonatomic, readonly) NSArray *currencyCodes;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateWithDictionary:(id)arg1;
- (id)dictionaryRepresentationForLanguage:(id)arg1;

@end
