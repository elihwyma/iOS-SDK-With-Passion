/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSObject.h>

@interface EKStringFactory : NSObject

{
    struct __CFDateFormatter *_standardTimeFormatter;
    struct __CFDateFormatter *_customFormatter;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)_localeChanged:(id)arg1;
- (id)dateStringForEventInvitationWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 allDay:(_Bool)arg4;
- (id)dateStringForSuggestedEventWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 allDay:(_Bool)arg4 showTimeZone:(_Bool)arg5;
- (id)dateStringForDate:(double)arg1 allDay:(_Bool)arg2 standalone:(_Bool)arg3 shortFormat:(_Bool)arg4;
- (void)_invalidateFormatters;
- (id)timeStringForDate:(double)arg1 inTimeZone:(id)arg2;
- (id)dateStringForDate:(double)arg1 allDay:(_Bool)arg2 shortFormat:(_Bool)arg3;
- (struct __CFDateFormatter *)_customFormatter;
- (struct __CFDateFormatter *)standardTimeFormatter;
- (id)_dateStringForEventInvitationWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 allDay:(_Bool)arg4 withFormat:(unsigned long long)arg5 showTimeZone:(_Bool)arg6;
- (id)_stringForTime:(CDStruct_79f9e052)arg1;
- (id)_stringForDateTime:(CDStruct_79f9e052)arg1 timeZone:(struct __CFTimeZone *)arg2;
- (id)dateStringForEventInvitation:(id)arg1 timeZone:(id)arg2;

@end
