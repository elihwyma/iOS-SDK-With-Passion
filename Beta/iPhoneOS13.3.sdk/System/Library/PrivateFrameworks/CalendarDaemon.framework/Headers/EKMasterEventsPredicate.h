/*
 Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

#import <CalendarDaemon/EKPredicate.h>

@interface EKMasterEventsPredicate : EKPredicate

+ (_Bool)supportsSecureCoding;
+ (id)predicateWithCalendarIDs:(id)arg1;

- (id)predicateFormat;
- (id)copyMatchingItemsWithDatabase:(struct CalDatabase *)arg1;

@end
