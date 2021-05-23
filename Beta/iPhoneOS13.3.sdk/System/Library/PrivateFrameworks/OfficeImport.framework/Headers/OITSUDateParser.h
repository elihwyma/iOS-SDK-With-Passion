/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, OITSULocale;

__attribute__((visibility("hidden")))
@interface OITSUDateParser : NSObject

{
    NSMutableArray *_formatCategories;
    OITSULocale *_locale;
    _Bool _isJapaneseLocale;
    struct __CFDateFormatter *_specialCaseFormatter;
}

- (void)dealloc;
- (id)initWithLocale:(id)arg1;
- (id)newDateFromString:(id)arg1 preferredFormatString:(id)arg2 successfulFormatString:(id *)arg3 tryAggressiveFormats:(_Bool)arg4;
- (struct __CFDateFormatter *)specialCaseDateFormatterForLocale:(id)arg1;
- (id)newDateFromString:(id)arg1 successfulFormatString:(id *)arg2;
- (void)p_addFormat:(id)arg1 locale:(id)arg2 formatCategoryMap:(id)arg3;
- (id)formatStringsDictionary;
- (id)p_newDateFromStringTryingFormats:(id)arg1 locale:(id)arg2 formats:(id)arg3 outSuccessfulFormatString:(id *)arg4;
- (id)p_initialPatternParsingFormat:(id)arg1 separator:(unsigned short *)arg2;

@end
