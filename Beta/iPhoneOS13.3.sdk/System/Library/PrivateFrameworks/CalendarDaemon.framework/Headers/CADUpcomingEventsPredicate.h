/*
 Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

#import <CalendarDaemon/CADPredicate.h>

@interface CADUpcomingEventsPredicate : CADPredicate

{
    int _limit;
}

@property (nonatomic, readonly) int limit;

+ (_Bool)supportsSecureCoding;
+ (id)predicateWithLimit:(int)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)predicateFormat;
- (id)copyMatchingItemsWithDatabase:(struct CalDatabase *)arg1;
- (id)initWithLimit:(int)arg1;

@end
