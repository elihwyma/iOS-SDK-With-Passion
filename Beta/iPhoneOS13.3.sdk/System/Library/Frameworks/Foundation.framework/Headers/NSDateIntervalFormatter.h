/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSFormatter.h>

@class NSCalendar, NSLocale, NSObject, NSString, NSTimeZone;

@protocol OS_dispatch_semaphore;

@interface NSDateIntervalFormatter : NSFormatter

{
    NSLocale *_locale;
    NSCalendar *_calendar;
    NSTimeZone *_timeZone;
    NSString *_dateTemplate;
    NSString *_dateTemplateFromStyles;
    void *_formatter;
    unsigned long long _dateStyle;
    unsigned long long _timeStyle;
    _Bool _modified;
    _Bool _useTemplate;
    NSObject<OS_dispatch_semaphore> *_lock;
    void *_reserved[4];
}

@property (copy) NSLocale *locale;
@property (copy) NSCalendar *calendar;
@property (copy) NSTimeZone *timeZone;
@property (copy) NSString *dateTemplate;
@property unsigned long long dateStyle;
@property unsigned long long timeStyle;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)_stringFromDate:(id)arg1 toDate:(id)arg2;
- (unsigned long long)boundaryStyle;
- (void)setBoundaryStyle:(unsigned long long)arg1;
- (id)stringFromDate:(id)arg1 toDate:(id)arg2;
- (id)stringFromDateInterval:(id)arg1;
- (id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2;
- (id)editingStringForObjectValue:(id)arg1;
- (_Bool)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (_Bool)isPartialStringValid:(id)arg1 newEditingString:(id *)arg2 errorDescription:(id *)arg3;
- (_Bool)isPartialStringValid:(id *)arg1 proposedSelectedRange:(struct _NSRange *)arg2 originalString:(id)arg3 originalSelectedRange:(struct _NSRange)arg4 errorDescription:(id *)arg5;

@end
