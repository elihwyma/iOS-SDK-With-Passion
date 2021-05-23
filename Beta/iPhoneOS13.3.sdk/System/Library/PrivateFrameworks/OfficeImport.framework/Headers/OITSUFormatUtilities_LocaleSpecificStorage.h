/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OITSUFormatUtilities_LocaleSpecificStorage : NSObject

{
    NSString *_formatDecimalString;
    NSString *_formatDecimalStringMinus;
    NSString *_formatDecimalStringRedOnly;
    NSString *_formatCurrencyString;
    NSString *_formatCurrencyStringMinus;
    NSString *_formatCurrencyStringRedOnly;
    NSString *_formatPercentageString;
    NSString *_formatPercentageStringMinus;
    NSString *_formatPercentageStringRedOnly;
    NSString *_formatScientificString;
    NSString *_formatScientificStringMinus;
    NSString *_formatScientificStringRedOnly;
    NSString *_formatDateTimeString;
    NSString *_formatDecimalStringWithParens;
    NSString *_formatScientificStringWithParens;
    NSString *_formatCurrencyStringWithParens;
    NSString *_formatPercentageStringWithParens;
}

@property (readonly) NSString *formatDecimalString;
@property (readonly) NSString *formatDecimalStringMinus;
@property (readonly) NSString *formatDecimalStringRedOnly;
@property (readonly) NSString *formatCurrencyString;
@property (readonly) NSString *formatCurrencyStringMinus;
@property (readonly) NSString *formatCurrencyStringRedOnly;
@property (readonly) NSString *formatPercentageString;
@property (readonly) NSString *formatPercentageStringMinus;
@property (readonly) NSString *formatPercentageStringRedOnly;
@property (readonly) NSString *formatScientificString;
@property (readonly) NSString *formatScientificStringMinus;
@property (readonly) NSString *formatScientificStringRedOnly;
@property (readonly) NSString *formatDateTimeString;
@property (readonly) NSString *formatDecimalStringWithParens;
@property (readonly) NSString *formatScientificStringWithParens;
@property (readonly) NSString *formatCurrencyStringWithParens;
@property (readonly) NSString *formatPercentageStringWithParens;

+ (id)localeSpecificStorageForLocale:(id)arg1;

- (id)initWithLocale:(id)arg1;

@end
