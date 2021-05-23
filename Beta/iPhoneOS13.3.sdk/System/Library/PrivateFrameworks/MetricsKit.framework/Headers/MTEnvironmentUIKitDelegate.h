/*
 Image: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
 */

#import <MetricsKit/MTObject.h>

@class NSString;

@interface MTEnvironmentUIKitDelegate : MTObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)connectionType;
- (id)hardwareModel;
- (id)userAgent;
- (id)userType;
- (id)cookies;
- (id)osVersion;
- (id)os;
- (id)appVersion;
- (id)primaryWindow;
- (id)app;
- (id)pixelRatio;
- (id)screenHeight;
- (id)screenWidth;
- (id)osBuildNumber;
- (id)hostApp;
- (id)dsId;
- (id)pageUrl;
- (id)capacityData;
- (id)capacityDataAvailable;
- (id)capacityDisk;
- (id)capacitySystem;
- (id)capacitySystemAvailable;
- (id)hardwareFamily;
- (id)osLanguages;
- (id)resourceRevNum;
- (id)storeFrontHeader;
- (id)windowInnerHeight;
- (id)windowInnerWidth;
- (id)windowOuterHeight;
- (id)windowOuterWidth;

@end
