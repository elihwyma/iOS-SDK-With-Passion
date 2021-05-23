/*
 Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

#import <CalendarDaemon/CADPredicate.h>

@class NSString;

@interface CADNotifiableEventsPredicate : CADPredicate

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)predicate;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)predicateFormat;
- (id)defaultPropertiesToLoad;
- (_Bool)shouldLoadDefaultProperties;
- (id)copyMatchingItemsWithDatabase:(struct CalDatabase *)arg1;

@end
