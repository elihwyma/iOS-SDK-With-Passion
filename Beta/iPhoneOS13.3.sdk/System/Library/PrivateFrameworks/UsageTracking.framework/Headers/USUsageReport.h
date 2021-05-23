/*
 Image: /System/Library/PrivateFrameworks/UsageTracking.framework/UsageTracking
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSDateInterval, NSDictionary, NSTimeZone;

@interface USUsageReport : NSObject

{
    double _screenTime;
    NSDateInterval *_longestSession;
    NSArray *_categoryUsage;
    unsigned long long _pickupsWithoutApplicationUsage;
    NSDate *_firstPickup;
    NSDateInterval *_interval;
    NSTimeZone *_timeZone;
    NSDate *_lastEventDate;
}

@property (readonly) double screenTime;
@property (copy, readonly) NSDateInterval *longestSession;
@property (copy, readonly) NSArray *categoryUsage;
@property (readonly) unsigned long long pickupsWithoutApplicationUsage;
@property (copy, readonly) NSDate *firstPickup;
@property (copy, readonly) NSDateInterval *interval;
@property (copy, readonly) NSTimeZone *timeZone;
@property (copy, readonly) NSDate *lastEventDate;
@property (copy, readonly) NSDictionary *userNotificationsByBundleIdentifier;
@property (copy, readonly) NSDictionary *pickupsByBundleIdentifier;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithScreenTime:(double)arg1 longestSession:(id)arg2 categoryUsage:(id)arg3 pickupsWithoutApplicationUsage:(unsigned long long)arg4 firstPickup:(id)arg5 interval:(id)arg6 timeZone:(id)arg7 lastEventDate:(id)arg8;
- (id)_addNotifications:(id)arg1 andPickups:(id)arg2 toApplicationUsageInCategoryUsage:(id)arg3;
- (void)_usUsageReportCommonInitWithScreenTime:(double)arg1 longestSession:(id)arg2 categoryUsage:(id)arg3 pickupsWithoutApplicationUsage:(unsigned long long)arg4 firstPickup:(id)arg5 interval:(id)arg6 timeZone:(id)arg7 lastEventDate:(id)arg8;
- (id)initWithScreenTime:(double)arg1 longestSession:(id)arg2 categoryUsage:(id)arg3 notifications:(id)arg4 pickupsByBundleIdentifier:(id)arg5 pickupsWithoutApplicationUsage:(unsigned long long)arg6 firstPickup:(id)arg7 interval:(id)arg8 timeZone:(id)arg9 lastEventDate:(id)arg10;

@end
