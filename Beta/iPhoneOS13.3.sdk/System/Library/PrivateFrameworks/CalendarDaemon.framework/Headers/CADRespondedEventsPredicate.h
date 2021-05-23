/*
 Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

#import <CalendarDaemon/CADPredicate.h>

@class NSString;

@interface CADRespondedEventsPredicate : CADPredicate

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

@end
