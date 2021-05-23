/*
 Image: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
 */

#import <MetricsKit/MTEnvironmentUIKitDelegate.h>

@class NSString;

@interface MTEnvironmentUIKitStoreDelegate : MTEnvironmentUIKitDelegate

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_ams_cookiesForURL:(id)arg1;

- (id)_diskUsage;
- (id)connectionType;
- (id)hardwareModel;
- (id)userAgent;
- (id)userType;
- (id)_userType;
- (id)cookies;
- (id)_connectionType;
- (id)_cookies;
- (id)osBuildNumber;
- (id)dsId;
- (id)capacityData;
- (id)capacityDataAvailable;
- (id)capacityDisk;
- (id)capacitySystem;
- (id)capacitySystemAvailable;
- (id)storeFrontHeader;
- (id)_activeItunesAccount;

@end
