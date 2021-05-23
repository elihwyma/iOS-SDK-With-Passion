/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class NSData, NSNumber, NSString;

@protocol OS_dispatch_queue;

@interface ICDeviceInfo : NSObject

{
    struct atomic_flag _hasRegisteredForNameNotifications;
    struct MGNotificationTokenStruct *_nameNotificationToken;
    NSString *_productVersion;
    NSString *_deviceModel;
    NSString *_rawDeviceModel;
    NSString *_hardwarePlatform;
    NSString *_buildVersion;
    int _deviceClass;
    unsigned int _fairPlayDeviceType;
    NSString *_currentLocale;
    NSData *_deviceGUIDData;
    NSString *_deviceGUID;
    NSString *_name;
    NSString *_pairedDeviceGUID;
    NSString *_pairedDeviceMediaGUID;
    NSString *_serialNumber;
    struct CGSize _mainScreenSize;
    NSNumber *_hasCellularDataCapabilityNumber;
    NSNumber *_hasTelephonyCapabilityNumber;
    NSNumber *_hasWiFiCapabilityValue;
    NSNumber *_hasWAPICapabilityValue;
    NSNumber *_has720pCapabilityValue;
    NSNumber *_has1080pCapabilityValue;
    NSNumber *_screenClassValue;
    NSNumber *_isInternalBuildNumber;
    NSString *_systemReleaseType;
    NSObject<OS_dispatch_queue> *_accessQueue;
}

@property (copy, nonatomic, readonly) NSString *deviceModel;
@property (copy, nonatomic, readonly) NSString *rawDeviceModel;
@property (copy, nonatomic, readonly) NSString *hardwarePlatform;
@property (copy, nonatomic, readonly) NSString *deviceGUID;
@property (copy, nonatomic, readonly) NSData *deviceFairPlayGUIDData;
@property (copy, nonatomic, readonly) NSString *pairedDeviceGUID;
@property (copy, nonatomic, readonly) NSString *pairedDeviceMediaGUID;
@property (copy, nonatomic, readonly) NSString *serialNumber;
@property (nonatomic, readonly) struct CGSize mainScreenSize;
@property (nonatomic, readonly) _Bool hasCellularDataCapability;
@property (nonatomic, readonly) _Bool hasTelephonyCapability;
@property (nonatomic, readonly) _Bool hasWiFiCapability;
@property (nonatomic, readonly) _Bool hasWAPICapability;
@property (nonatomic, readonly) _Bool has720pCapability;
@property (nonatomic, readonly) _Bool has1080pCapability;
@property (nonatomic, readonly) int screenClass;
@property (nonatomic, readonly) int deviceClass;
@property (nonatomic, readonly) _Bool isIPhone;
@property (nonatomic, readonly) _Bool isAppleTV;
@property (nonatomic, readonly) _Bool isIPad;
@property (nonatomic, readonly) _Bool isIPod;
@property (nonatomic, readonly) _Bool isWatch;
@property (nonatomic, readonly) _Bool isAudioAccessory;
@property (copy, nonatomic, readonly) NSString *productVersion;
@property (copy, nonatomic, readonly) NSString *productPlatform;
@property (copy, nonatomic, readonly) NSString *buildVersion;
@property (nonatomic, readonly, getter=isInternalBuild) _Bool internalBuild;
@property (copy, nonatomic, readonly) NSString *systemReleaseType;
@property (nonatomic, readonly) unsigned int fairPlayDeviceType;
@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSString *currentLocale;

+ (id)defaultInfo;
+ (id)currentDeviceInfo;

- (void)dealloc;
- (id)_init;
- (id)_activePairedDevice;
- (int)_gestaltDeviceClass;

@end
