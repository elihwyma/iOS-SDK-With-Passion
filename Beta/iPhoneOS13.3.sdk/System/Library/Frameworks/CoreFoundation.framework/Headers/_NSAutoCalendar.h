/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSCalendar.h>

@class NSDate, NSLocale, NSTimeZone;

@interface _NSAutoCalendar : NSCalendar

{
    NSCalendar *cal;
    NSLocale *changedLocale;
    NSTimeZone *changedTimeZone;
    unsigned long long changedFirstWeekday;
    unsigned long long changedMinimumDaysinFirstWeek;
    NSDate *changedGregorianStartDate;
    unsigned long long combinedNoteCount;
    struct os_unfair_lock_s _lock;
}

@end
