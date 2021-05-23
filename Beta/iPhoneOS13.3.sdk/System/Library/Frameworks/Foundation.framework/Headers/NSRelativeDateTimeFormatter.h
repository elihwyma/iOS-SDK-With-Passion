/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSFormatter.h>

@class NSCalendar, NSLocale;

@interface NSRelativeDateTimeFormatter : NSFormatter

{
    struct __CFRelativeDateTimeFormatter *_formatter;
    NSLocale *_locale;
    NSCalendar *_calendar;
    long long _dateTimeStyle;
    long long _unitsStyle;
    long long _formattingContext;
}

@property long long dateTimeStyle;
@property long long unitsStyle;
@property long long formattingContext;
@property (copy) NSCalendar *calendar;
@property (copy) NSLocale *locale;

- (void)dealloc;
- (id)stringForObjectValue:(id)arg1;
- (void)_clearFormatter;
- (id)_stringFromDateComponents:(id)arg1;
- (id)localizedStringForDate:(id)arg1 relativeToDate:(id)arg2;
- (id)_stringForCalendarUnit:(unsigned long long)arg1 value:(long long)arg2;
- (id)localizedStringFromDateComponents:(id)arg1;
- (id)localizedStringFromTimeInterval:(double)arg1;

@end
