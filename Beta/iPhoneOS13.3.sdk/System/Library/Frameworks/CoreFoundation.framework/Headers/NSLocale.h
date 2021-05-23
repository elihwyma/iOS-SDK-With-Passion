/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSObject.h>

@interface NSLocale : NSObject

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)currentLocale;
+ (id)systemLocale;
+ (id)localeWithLocaleIdentifier:(id)arg1;
+ (id)availableLocaleIdentifiers;
+ (id)ISOLanguageCodes;
+ (id)ISOCountryCodes;
+ (id)ISOCurrencyCodes;
+ (id)commonISOCurrencyCodes;
+ (id)preferredLanguages;
+ (id)componentsFromLocaleIdentifier:(id)arg1;
+ (id)localeIdentifierFromComponents:(id)arg1;
+ (id)canonicalLocaleIdentifierFromString:(id)arg1;
+ (id)canonicalLanguageIdentifierFromString:(id)arg1;
+ (id)localeIdentifierFromWindowsLocaleCode:(unsigned int)arg1;
+ (unsigned int)windowsLocaleCodeFromLocaleIdentifier:(id)arg1;
+ (unsigned long long)characterDirectionForLanguage:(id)arg1;
+ (unsigned long long)lineDirectionForLanguage:(id)arg1;
+ (id)internetServicesRegion;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)objectForKey:(id)arg1;
- (unsigned char)_nullLocale;
- (void)_setNullLocale;
- (id)_prefs;
- (id)localeIdentifier;
- (id)_copyDisplayNameForKey:(id)arg1 value:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)_cfTypeID;
- (id)displayNameForKey:(id)arg1 value:(id)arg2;
- (id)initWithLocaleIdentifier:(id)arg1;
- (id)calendarIdentifier;
- (id)localizedStringForLocaleIdentifier:(id)arg1;
- (id)languageCode;
- (id)localizedStringForLanguageCode:(id)arg1;
- (id)countryCode;
- (id)localizedStringForCountryCode:(id)arg1;
- (id)scriptCode;
- (id)localizedStringForScriptCode:(id)arg1;
- (id)variantCode;
- (id)localizedStringForVariantCode:(id)arg1;
- (id)localizedStringForCalendarIdentifier:(id)arg1;
- (id)collationIdentifier;
- (id)localizedStringForCollationIdentifier:(id)arg1;
- (id)decimalSeparator;
- (id)localizedStringForDecimalSeparator:(id)arg1;
- (id)groupingSeparator;
- (id)localizedStringForGroupingSeparator:(id)arg1;
- (id)currencySymbol;
- (id)localizedStringForCurrencySymbol:(id)arg1;
- (id)currencyCode;
- (id)localizedStringForCurrencyCode:(id)arg1;
- (id)collatorIdentifier;
- (id)localizedStringForCollatorIdentifier:(id)arg1;
- (id)quotationBeginDelimiter;
- (id)localizedStringForQuotationBeginDelimiter:(id)arg1;
- (id)quotationEndDelimiter;
- (id)localizedStringForQuotationEndDelimiter:(id)arg1;
- (id)alternateQuotationBeginDelimiter;
- (id)localizedStringForAlternateQuotationBeginDelimiter:(id)arg1;
- (id)alternateQuotationEndDelimiter;
- (id)localizedStringForAlternateQuotationEndDelimiter:(id)arg1;
- (id)exemplarCharacterSet;
- (_Bool)usesMetricSystem;
- (id)identifier;

@end
