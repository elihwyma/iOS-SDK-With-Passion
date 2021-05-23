/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OITSUDateFormatter : NSObject

{
    NSString *_dateOnlyFormatString;
    NSString *_timeOnlyFormatString;
    struct __CFDateFormatter *_fullDateFormatter;
}

+ (id)datePortionOfDateTimeFormatString:(id)arg1;
+ (id)timePortionOfDateTimeFormatString:(id)arg1;
+ (unsigned long long)p_DateTimeSplitLocationInFormatString:(id)arg1;
+ (id)dateFormatStringSpecialSymbols;
+ (id)supportedDateFormatsForLocale:(id)arg1;
+ (id)p_supportedDateFormatMatchingFormat:(id)arg1 locale:(id)arg2;
+ (id)p_supportedTimeFormatMatchingFormat:(id)arg1 locale:(id)arg2;
+ (id)supportedTimeFormatsForLocale:(id)arg1;
+ (id)defaultDateTimeFormatForLocale:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)initWithLocale:(id)arg1;

@end
