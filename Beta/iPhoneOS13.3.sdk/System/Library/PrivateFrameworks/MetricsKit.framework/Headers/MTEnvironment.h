/*
 Image: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
 */

#import <MetricsKit/MTObject.h>

@protocol MTEnvironmentDelegate;

@interface MTEnvironment : MTObject

{
    id <MTEnvironmentDelegate> _delegate;
}

@property (weak, nonatomic) id <MTEnvironmentDelegate> delegate;

- (id)connectionType;
- (id)hardwareModel;
- (id)userAgent;
- (id)userType;
- (id)cookies;
- (id)osVersion;
- (id)os;
- (id)appVersion;
- (id)app;
- (id)environmentDataCenter;
- (id)pixelRatio;
- (id)screenHeight;
- (id)screenWidth;
- (id)osBuildNumber;
- (id)hostApp;
- (id)dsId;
- (id)pageUrl;
- (id)hostAppVersion;
- (id)capacityData;
- (id)capacityDataAvailable;
- (id)capacityDisk;
- (id)capacitySystem;
- (id)capacitySystemAvailable;
- (id)environmentBuild;
- (id)environmentInstance;
- (id)hardwareFamily;
- (id)osLanguages;
- (id)parentPageUrl;
- (id)resourceRevNum;
- (id)storeFrontHeader;
- (id)windowInnerHeight;
- (id)windowInnerWidth;
- (id)windowOuterHeight;
- (id)windowOuterWidth;

@end
