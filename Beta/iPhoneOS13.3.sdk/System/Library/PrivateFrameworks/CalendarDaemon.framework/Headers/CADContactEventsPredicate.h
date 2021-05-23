/*
 Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

#import <CalendarDaemon/EKPredicate.h>

@class NSSet;

@interface CADContactEventsPredicate : EKPredicate

{
    NSSet *_contactEmailAddresses;
    NSSet *_contactNameComponents;
}

@property (retain) NSSet *contactEmailAddresses;
@property (retain) NSSet *contactNameComponents;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)predicateFormat;
- (id)defaultPropertiesToLoad;
- (id)initWithCalendarIDs:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 contacts:(id)arg4;
- (id)copyMatchingItemsWithDatabase:(struct CalDatabase *)arg1;
- (_Bool)_isCandidate:(void *)arg1 allowAllDayEvent:(_Bool)arg2;

@end
