/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@protocol OS_dispatch_queue;

@interface GEOPlatform : NSObject

{
    struct __CTServerConnection *_telephonyServerConnection;
    NSObject<OS_dispatch_queue> *_coreTelephonyIsolationQueue;
}

+ (id)sharedPlatform;
+ (_Bool)isRunningInGeod;
+ (void)setIsRunningInGeod:(_Bool)arg1;

- (id)init;
- (id)hardwareModel;
- (_Bool)isInternalInstall;
- (id)hardwareIdentifier;
- (id)buildVersion;
- (id)productName;
- (id)clientCapabilities;
- (_Bool)supportsNavigation;
- (id)deviceCountrySKUForServiceRequests;
- (id)osVersion;
- (double)deviceScreenScale;
- (id)deviceCountrySKU;
- (_Bool)isCellDataPossible;
- (id)osAndBuildVersion;
- (_Bool)_deviceSupportsNavigation;
- (void)_setupCTServerConnection;
- (void)_logCTError:(CDStruct_1ef3fb1f)arg1 message:(id)arg2;
- (_Bool)mapsFeatureFreedomEnabled;
- (_Bool)supportsRealisticTiles;
- (_Bool)supportsForceTouch;
- (long long)deviceScreenWidthInPixels;
- (long long)deviceScreenHeightInPixels;

@end
