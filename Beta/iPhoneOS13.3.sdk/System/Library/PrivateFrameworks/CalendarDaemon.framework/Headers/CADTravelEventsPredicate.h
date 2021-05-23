/*
 Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

#import <CalendarDaemon/EKPredicate.h>

@interface CADTravelEventsPredicate : EKPredicate

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)predicateFormat;
- (id)defaultPropertiesToLoad;
- (id)initWithCalendarIDs:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (id)copyMatchingItemsWithDatabase:(struct CalDatabase *)arg1;
- (id)_fetchTravelEventsWithDatabase:(struct CalDatabase *)arg1;

@end
