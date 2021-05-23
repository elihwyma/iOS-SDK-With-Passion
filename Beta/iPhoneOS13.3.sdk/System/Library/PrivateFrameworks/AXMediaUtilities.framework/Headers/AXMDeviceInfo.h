/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSNumber, NSString, NSValue;

@interface AXMDeviceInfo : NSObject

{
    _Bool _isInternalInstall;
    NSNumber *_supportsARM64;
    NSNumber *_supportsARMv6;
    NSNumber *_supportsARMv7;
    NSNumber *_supportsARMv7s;
    NSNumber *_supports720pPlayback;
    NSNumber *_supports1080pPlayback;
    NSString *_cpuArchitecture;
    NSNumber *_processorCount;
    NSNumber *_physicalMemory;
    NSNumber *_hasAmbientLightSensor;
    NSNumber *_hasDualLensCamera;
    NSDictionary *_displayZoomSizes;
    NSString *_buildVersion;
    NSString *_computerName;
    NSString *_deviceName;
    NSString *_deviceNameClassic;
    NSString *_deviceNameGS;
    NSString *_deviceNameLocalized;
    NSString *_deviceClass;
    NSString *_deviceVariant;
    NSString *_hardwareModel;
    NSString *_deviceModelNumber;
    NSString *_marketingName;
    NSString *_marketingProductName;
    NSString *_marketingVersion;
    NSString *_productName;
    NSString *_productType;
    NSString *_productVersion;
    NSValue *_mainScreenSizeWidth;
    NSValue *_mainScreenSizeHeight;
    NSNumber *_mainScreenOrientation;
    NSNumber *_mainScreenScale;
}

@property (retain, nonatomic) NSNumber *supportsARM64;
@property (retain, nonatomic) NSNumber *supportsARMv6;
@property (retain, nonatomic) NSNumber *supportsARMv7;
@property (retain, nonatomic) NSNumber *supportsARMv7s;
@property (retain, nonatomic) NSNumber *supports720pPlayback;
@property (retain, nonatomic) NSNumber *supports1080pPlayback;
@property (retain, nonatomic) NSString *cpuArchitecture;
@property (retain, nonatomic) NSNumber *processorCount;
@property (retain, nonatomic) NSNumber *physicalMemory;
@property (retain, nonatomic) NSNumber *hasAmbientLightSensor;
@property (retain, nonatomic) NSNumber *hasDualLensCamera;
@property (retain, nonatomic) NSDictionary *displayZoomSizes;
@property (retain, nonatomic) NSString *buildVersion;
@property (retain, nonatomic) NSString *computerName;
@property (retain, nonatomic) NSString *deviceName;
@property (retain, nonatomic) NSString *deviceNameClassic;
@property (retain, nonatomic) NSString *deviceNameGS;
@property (retain, nonatomic) NSString *deviceNameLocalized;
@property (retain, nonatomic) NSString *deviceClass;
@property (retain, nonatomic) NSString *deviceVariant;
@property (retain, nonatomic) NSString *hardwareModel;
@property (retain, nonatomic) NSString *deviceModelNumber;
@property (retain, nonatomic) NSString *marketingName;
@property (retain, nonatomic) NSString *marketingProductName;
@property (retain, nonatomic) NSString *marketingVersion;
@property (retain, nonatomic) NSString *productName;
@property (retain, nonatomic) NSString *productType;
@property (retain, nonatomic) NSString *productVersion;
@property (retain, nonatomic) NSValue *mainScreenSizeWidth;
@property (retain, nonatomic) NSValue *mainScreenSizeHeight;
@property (retain, nonatomic) NSNumber *mainScreenOrientation;
@property (retain, nonatomic) NSNumber *mainScreenScale;

+ (id)sharedInstance;

- (id)_init;
- (id)systemReport;
- (id)_jetsamInfo;
- (id)privilegedSystemReport;

@end
