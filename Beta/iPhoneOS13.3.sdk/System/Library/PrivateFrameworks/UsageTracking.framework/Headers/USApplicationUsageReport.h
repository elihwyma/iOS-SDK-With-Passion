/*
 Image: /System/Library/PrivateFrameworks/UsageTracking.framework/UsageTracking
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface USApplicationUsageReport : NSObject

{
    NSString *_canonicalBundleIdentifier;
    double _totalUsageTime;
    NSDictionary *_applicationUsageByBundleIdentifier;
    NSDictionary *_webUsageByDomain;
    NSDictionary *_userNotificationsByBundleIdentifier;
    NSDictionary *_pickupsByBundleIdentifier;
}

@property (copy) NSDictionary *userNotificationsByBundleIdentifier;
@property (copy) NSDictionary *pickupsByBundleIdentifier;
@property (copy, readonly) NSString *canonicalBundleIdentifier;
@property (readonly) double totalUsageTime;
@property (copy, readonly) NSDictionary *applicationUsageByBundleIdentifier;
@property (copy, readonly) NSDictionary *webUsageByDomain;
@property (readonly) unsigned long long totalUserNotifications;
@property (readonly) unsigned long long totalPickups;
@property (copy, readonly) NSString *bundleIdentifier;
@property (readonly) double applicationUsageTime;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCanonicalBundleIdentifier:(id)arg1 totalUsageTime:(double)arg2 applicationUsageByBundleIdentifier:(id)arg3 webUsageByDomain:(id)arg4 userNotificationsByBundleIdentifier:(id)arg5 pickupsByBundleIdentifier:(id)arg6;
- (void)_usApplicationUsageReportCommonInitWithCanonicalBundleIdentifier:(id)arg1 totalUsageTime:(double)arg2 applicationUsageByBundleIdentifier:(id)arg3 webUsageByDomain:(id)arg4 userNotificationsByBundleIdentifier:(id)arg5 pickupsByBundleIdentifier:(id)arg6;
- (id)initWithBundleIdentifier:(id)arg1 totalUsageTime:(double)arg2 applicationUsageTime:(double)arg3 webUsageByDomain:(id)arg4;

@end
