/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSCalendar.h>

@interface NSCalendar (MNExtras)

- (id)_navigation_transitRelativeDateStringForDate:(id)arg1 context:(long long)arg2 inTimeZone:(id)arg3 outUsedFormat:(out unsigned long long *)arg4;
- (_Bool)_navigation_isDateInToday:(id)arg1 inTimeZone:(id)arg2;
- (id)_navigation_dateStringForDate:(id)arg1 withStyle:(unsigned long long)arg2 useRelativeFormatting:(_Bool)arg3 inTimeZone:(id)arg4;
- (id)_navigation_offsetDate:(id)arg1 toTimeZone:(id)arg2;
- (id)_navigation_relativeDateStringForDate:(id)arg1 context:(long long)arg2 inTimeZone:(id)arg3;
- (_Bool)_navigation_isDateInTomorrow:(id)arg1 inTimeZone:(id)arg2;

@end
