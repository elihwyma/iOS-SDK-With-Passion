/*
 Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

#import <CalendarDaemon/CADPredicate.h>

@class NSDate, NSString;

@interface CADEventTimeWindowPredicate : CADPredicate

{
    _Bool _mustStartInInterval;
    CADPredicate *_wrappedPredicate;
    NSDate *_startDate;
    NSDate *_endDate;
}

@property (nonatomic, readonly) CADPredicate *wrappedPredicate;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) _Bool mustStartInInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)predicateFormat;
- (id)defaultPropertiesToLoad;
- (_Bool)shouldLoadDefaultProperties;
- (id)initWithPredicate:(id)arg1 limitWithStartDate:(id)arg2 endDate:(id)arg3 mustStartInInterval:(_Bool)arg4;
- (id)copyMatchingItemsWithDatabase:(struct CalDatabase *)arg1;

@end
