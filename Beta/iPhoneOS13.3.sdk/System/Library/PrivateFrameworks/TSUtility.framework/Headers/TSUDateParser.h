/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface TSUDateParser : NSObject

{
    NSMutableArray *mFormatCategories;
    struct __CFLocale *mLocale;
    _Bool mIsJapaneseLocale;
    struct __CFDateFormatter *mSpecialCaseFormatter;
}

+ (id)parserForDefaultLocale;

- (void)dealloc;
- (id)initWithLocale:(struct __CFLocale *)arg1;
- (struct __CFDate *)newDateFromString:(struct __CFString *)arg1 preferredFormatString:(struct __CFString *)arg2 successfulFormatString:(const struct __CFString **)arg3 tryAggressiveFormats:(_Bool)arg4;
- (void)datePreferencesChanged:(id)arg1;
- (void)addFormat:(id)arg1 locale:(struct __CFLocale *)arg2 formatCategoryMap:(id)arg3;
- (struct __CFDateFormatter *)specialCaseDateFormatterForLocale:(struct __CFLocale *)arg1;
- (struct __CFDate *)newDateFromStringTryingFormats:(struct __CFString *)arg1 locale:(struct __CFLocale *)arg2 formats:(id)arg3 outSuccessfulFormatString:(const struct __CFString **)arg4;
- (struct __CFDate *)newDateFromString:(struct __CFString *)arg1 successfulFormatString:(const struct __CFString **)arg2;
- (void)parseFormat:(id)arg1 initialPattern:(id *)arg2 separator:(unsigned short *)arg3;

@end
