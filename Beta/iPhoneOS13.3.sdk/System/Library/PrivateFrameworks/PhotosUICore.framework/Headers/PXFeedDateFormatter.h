/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSCalendar, NSDate, NSDateFormatter, NSLocale, NSString;

@interface PXFeedDateFormatter : NSObject

{
    _Bool _prepared;
    NSLocale *_locale;
    _Bool _ignoreWhitelist;
    NSCalendar *_calendar;
    NSDate *_today;
    NSDate *_yesterday;
    NSString *_todayString;
    NSString *_yesterdayString;
    NSDateFormatter *_dateFormatterForCurrentYear;
    NSDateFormatter *_dateFormatterForNoncurrentYears;
}

+ (id)defaultFeedSectionDateFormatter;

- (id)init;
- (void)dealloc;
- (void)_invalidate;
- (_Bool)isDateInToday:(id)arg1;
- (id)stringFromDate:(id)arg1;
- (void)_prepare;
- (void)_currentLocaleChanged:(id)arg1;
- (id)initWithLocale:(id)arg1 ignoreWhitelist:(_Bool)arg2;
- (_Bool)isDateInFuture:(id)arg1;
- (id)_completeRelativeStringForDate:(id)arg1 dateFormatter:(id)arg2;
- (_Bool)_canSubstitueDateStringsWithLocale:(id)arg1;
- (void)_calendarDayChanged:(id)arg1;

@end
