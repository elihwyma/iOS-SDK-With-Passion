/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class EKCalendarResourceChangeNotification, NSDate, NSString, NSTimeZone, NSURL;

@interface CALNCalendarResourceChangedNotificationInfo : NSObject

{
    _Bool _allDay;
    _Bool _isDelegate;
    unsigned int _changeType;
    NSString *_sourceClientIdentifier;
    EKCalendarResourceChangeNotification *_calendarNotification;
    NSDate *_date;
    NSTimeZone *_timeZone;
    NSDate *_expirationDate;
    NSURL *_launchURL;
    NSString *_sourceTitle;
    NSString *_sourceIdentifier;
}

@property (copy, nonatomic, readonly) NSString *sourceClientIdentifier;
@property (nonatomic, readonly) EKCalendarResourceChangeNotification *calendarNotification;
@property (nonatomic, readonly) unsigned int changeType;
@property (copy, nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) _Bool allDay;
@property (copy, nonatomic, readonly) NSTimeZone *timeZone;
@property (copy, nonatomic, readonly) NSDate *expirationDate;
@property (copy, nonatomic, readonly) NSURL *launchURL;
@property (nonatomic, readonly) _Bool isDelegate;
@property (copy, nonatomic, readonly) NSString *sourceTitle;
@property (copy, nonatomic, readonly) NSString *sourceIdentifier;

- (id)description;
- (id)initWithSourceClientIdentifier:(id)arg1 calendarNotification:(id)arg2 changeType:(unsigned int)arg3 date:(id)arg4 allDay:(_Bool)arg5 timeZone:(id)arg6 expirationDate:(id)arg7 launchURL:(id)arg8 isDelegate:(_Bool)arg9 sourceTitle:(id)arg10 sourceIdentifier:(id)arg11;

@end
