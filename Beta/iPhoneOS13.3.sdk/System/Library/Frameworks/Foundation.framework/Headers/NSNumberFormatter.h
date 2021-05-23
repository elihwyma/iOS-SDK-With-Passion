/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSFormatter.h>

#import <Foundation/Swift-Protocol.h>

@class NSDictionary, NSLocale, NSMutableDictionary, NSNumber, NSRecursiveLock, NSString;

@interface NSNumberFormatter : NSFormatter <Swift>

{
    NSMutableDictionary *_attributes;
    struct __CFNumberFormatter *_formatter;
    unsigned long long _counter;
    unsigned long long _behavior;
    NSRecursiveLock *_lock;
    unsigned long long _stateBitMask;
    long long _cacheGeneration;
    void *_reserved[8];
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property long long formattingContext;
@property unsigned long long numberStyle;
@property (copy) NSLocale *locale;
@property _Bool generatesDecimalNumbers;
@property unsigned long long formatterBehavior;
@property (copy) NSString *negativeFormat;
@property (copy) NSDictionary *textAttributesForNegativeValues;
@property (copy) NSString *positiveFormat;
@property (copy) NSDictionary *textAttributesForPositiveValues;
@property _Bool allowsFloats;
@property (copy) NSString *decimalSeparator;
@property _Bool alwaysShowsDecimalSeparator;
@property (copy) NSString *currencyDecimalSeparator;
@property _Bool usesGroupingSeparator;
@property (copy) NSString *groupingSeparator;
@property (copy) NSString *zeroSymbol;
@property (copy) NSDictionary *textAttributesForZero;
@property (copy) NSString *nilSymbol;
@property (copy) NSDictionary *textAttributesForNil;
@property (copy) NSString *notANumberSymbol;
@property (copy) NSDictionary *textAttributesForNotANumber;
@property (copy) NSString *positiveInfinitySymbol;
@property (copy) NSDictionary *textAttributesForPositiveInfinity;
@property (copy) NSString *negativeInfinitySymbol;
@property (copy) NSDictionary *textAttributesForNegativeInfinity;
@property (copy) NSString *positivePrefix;
@property (copy) NSString *positiveSuffix;
@property (copy) NSString *negativePrefix;
@property (copy) NSString *negativeSuffix;
@property (copy) NSString *currencyCode;
@property (copy) NSString *currencySymbol;
@property (copy) NSString *internationalCurrencySymbol;
@property (copy) NSString *percentSymbol;
@property (copy) NSString *perMillSymbol;
@property (copy) NSString *minusSign;
@property (copy) NSString *plusSign;
@property (copy) NSString *exponentSymbol;
@property unsigned long long groupingSize;
@property unsigned long long secondaryGroupingSize;
@property (copy) NSNumber *multiplier;
@property unsigned long long formatWidth;
@property (copy) NSString *paddingCharacter;
@property unsigned long long paddingPosition;
@property unsigned long long roundingMode;
@property (copy) NSNumber *roundingIncrement;
@property unsigned long long minimumIntegerDigits;
@property unsigned long long maximumIntegerDigits;
@property unsigned long long minimumFractionDigits;
@property unsigned long long maximumFractionDigits;
@property (copy) NSNumber *minimum;
@property (copy) NSNumber *maximum;
@property (copy) NSString *currencyGroupingSeparator;
@property (getter=isLenient) _Bool lenient;
@property _Bool usesSignificantDigits;
@property unsigned long long minimumSignificantDigits;
@property unsigned long long maximumSignificantDigits;
@property (getter=isPartialStringValidationEnabled) _Bool partialStringValidationEnabled;

+ (void)initialize;
+ (void)setDefaultFormatterBehavior:(unsigned long long)arg1;
+ (unsigned long long)defaultFormatterBehavior;
+ (id)localizedStringFromNumber:(id)arg1 numberStyle:(unsigned long long)arg2;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)stringForObjectValue:(id)arg1;
- (void)clearPropertyBit;
- (void)setPropertyBit;
- (_Bool)checkModify;
- (void)resetCheckModify;
- (id)stringFromNumber:(id)arg1;
- (_Bool)checkLocaleChange;
- (void)resetCheckLocaleChange;
- (void *)getFormatter;
- (void)receiveObservedValue:(id)arg1;
- (id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2;
- (_Bool)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (_Bool)getObjectValue:(out id *)arg1 forString:(id)arg2 range:(inout struct _NSRange *)arg3 error:(out id *)arg4;
- (_Bool)_mayDecorateAttributedStringForObjectValue:(id)arg1;
- (long long)_cacheGenerationCount;
- (_Bool)_tracksCacheGenerationCount;
- (void)_invalidateCache;
- (void)_clearFormatter;
- (void)_regenerateFormatter;
- (void *)__Keynote_NOOP;
- (void)_reset;
- (id)numberFromString:(id)arg1;
- (_Bool)_hasSetCurrencyCode;
- (_Bool)_hasSetCurrencySymbol;
- (_Bool)_hasSetInternationalCurrencySymbol;
- (_Bool)_usesCharacterDirection;
- (void)_setUsesCharacterDirection:(_Bool)arg1;

@end
