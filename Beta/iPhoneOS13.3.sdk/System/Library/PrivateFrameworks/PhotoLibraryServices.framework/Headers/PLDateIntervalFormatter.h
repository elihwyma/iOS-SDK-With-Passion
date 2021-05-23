/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSCalendar, NSDateIntervalFormatter, NSLocale;

@interface PLDateIntervalFormatter : NSObject

{
    _Bool _alwaysShowYear;
    NSDateIntervalFormatter *_dateIntervalFormatter;
    NSCalendar *_gmtCalendar;
    NSLocale *_locale;
}

@property (nonatomic, readonly) NSDateIntervalFormatter *dateIntervalFormatter;
@property (nonatomic, readonly) NSCalendar *gmtCalendar;
@property (retain, nonatomic) NSLocale *locale;
@property (nonatomic) _Bool alwaysShowYear;

+ (id)stringFromStartDate:(id)arg1 endDate:(id)arg2 type:(unsigned long long)arg3;
+ (id)stringFromStartDate:(id)arg1 endDate:(id)arg2 type:(unsigned long long)arg3 showLongMonthFormatIfNeeded:(_Bool)arg4;
+ (id)_currentLocalDate;
+ (id)_dateFormatForDateFormatterType:(unsigned long long)arg1 displayYear:(_Bool)arg2 displayLongMonth:(_Bool)arg3;

- (id)init;
- (id)stringFromStartDate:(id)arg1 endDate:(id)arg2 type:(unsigned long long)arg3;
- (id)stringFromStartDate:(id)arg1 endDate:(id)arg2 type:(unsigned long long)arg3 showLongMonthFormatIfNeeded:(_Bool)arg4;
- (_Bool)_yearIsNeededForDisplayingDate:(id)arg1;

@end
