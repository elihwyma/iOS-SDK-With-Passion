/*
 Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

#import <CalendarDaemon/EKPredicate.h>

@class NSString, NSTimeZone;

@interface CADEventPredicate : EKPredicate

{
    _Bool _shouldLoadProposedTimesInRange;
    _Bool _shouldLoadDefaultProperties;
}

@property (nonatomic, readonly) NSString *eventUUID;
@property (nonatomic, readonly) NSTimeZone *timeZone;
@property (nonatomic, readonly) _Bool shouldLoadProposedTimesInRange;
@property (nonatomic, readonly) _Bool shouldLoadDefaultProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)predicateWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4 loadDefaultProperties:(_Bool)arg5;
+ (id)predicateWithStartDate:(id)arg1 title:(id)arg2 calendars:(id)arg3;
+ (id)predicateWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4;
+ (id)predicateWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 eventUUID:(id)arg4 calendars:(id)arg5;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)predicateFormat;
- (id)defaultPropertiesToLoad;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4 loadDefaultProperties:(_Bool)arg5;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 eventUUID:(id)arg4 calendars:(id)arg5;
- (id)initWithStartDate:(id)arg1 title:(id)arg2 calendars:(id)arg3;
- (id)copyMatchingItemsWithDatabase:(struct CalDatabase *)arg1;

@end
