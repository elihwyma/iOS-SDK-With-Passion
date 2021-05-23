/*
 Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

#import <CalendarDaemon/CADPredicate.h>

@interface CADUnalertedEventsPredicate : CADPredicate

+ (_Bool)supportsSecureCoding;
+ (id)predicate;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)predicateFormat;
- (id)copyMatchingItemsWithDatabase:(struct CalDatabase *)arg1;

@end
