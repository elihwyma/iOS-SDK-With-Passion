/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKJSObject.h>

#import <ITMLKit/Swift-Protocol.h>

@class NSNumber, NSString;

@protocol IKAppDeviceConfig;

@interface IKJSDevice : IKJSObject <Swift>

{
    id _networkPropertiesChangedToken;
    id <IKAppDeviceConfig> _deviceConfig;
}

@property (weak, nonatomic) id <IKAppDeviceConfig> deviceConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *vendorIdentifier;
@property (nonatomic, readonly) NSString *advertisingIdentifier;
@property (nonatomic, readonly) _Bool isAdvertisingTrackingEnabled;
@property (nonatomic, readonly) NSString *appVersion;
@property (nonatomic, readonly) NSString *appIdentifier;
@property (nonatomic, readonly) NSString *systemVersion;
@property (nonatomic, readonly) NSString *model;
@property (nonatomic, readonly) NSString *productType;
@property (nonatomic, readonly) _Bool isNetworkReachable;
@property (nonatomic, readonly) _Bool isInAirplaneMode;
@property (nonatomic, readonly) NSString *networkType;
@property (nonatomic, readonly) double lastNetworkChangedTime;
@property (nonatomic, readonly) _Bool isInRetailDemoMode;
@property (nonatomic, readonly) _Bool isSeedBuild;
@property (nonatomic, readonly) NSString *vendorID;
@property (nonatomic, readonly) NSNumber *pixelRatio;
@property (nonatomic, readonly) _Bool runningAnInternalBuild;
@property (nonatomic, readonly) NSString *osBuildNumber;

+ (id)getMobileGestaltString:(struct __CFString *)arg1;

- (void)dealloc;
- (id)initWithAppContext:(id)arg1 deviceConfig:(id)arg2;
- (id)capacity:(id)arg1;
- (id)asPrivateIKJSDevice;

@end
