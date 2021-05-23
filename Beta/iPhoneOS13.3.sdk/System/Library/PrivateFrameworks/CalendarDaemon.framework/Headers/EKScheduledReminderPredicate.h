/*
 Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

#import <CalendarDaemon/EKPredicate.h>

@class NSDate;

@interface EKScheduledReminderPredicate : EKPredicate

{
    NSDate *_day;
    unsigned long long _maxResults;
}

@property (retain, nonatomic) NSDate *day;
@property (nonatomic) unsigned long long maxResults;

+ (_Bool)supportsSecureCoding;
+ (id)predicateForScheduledRemindersInCalendars:(id)arg1 onDay:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyMatchingItemsWithDatabase:(struct CalDatabase *)arg1;

@end
