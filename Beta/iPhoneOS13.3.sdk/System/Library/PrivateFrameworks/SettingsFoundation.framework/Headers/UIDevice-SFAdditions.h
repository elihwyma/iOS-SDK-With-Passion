/*
 Image: /System/Library/PrivateFrameworks/SettingsFoundation.framework/SettingsFoundation
 */

#import <UIKit/UIDevice.h>

@interface UIDevice (SFAdditions)

- (_Bool)sf_isInternalInstall;
- (_Bool)sf_isiPad;
- (_Bool)sf_isiPhone;
- (unsigned long long)sf_yearOfManufacture;
- (unsigned long long)sf_weekOfManufacture;
- (id)sf_colorCodedSerialNumber;
- (id)sf_configString;
- (id)sf_deviceSubTypeString;
- (id)sf_screenClassString;
- (_Bool)sf_deviceSupportsDisplayZoom;
- (id)sf_plantCode;
- (_Bool)sf_isChinaRegionCellularDevice;
- (id)sf_udidString;
- (_Bool)sf_isAudioAccessory;
- (id)sf_serialNumber;
- (_Bool)sf_isAppleTV;
- (_Bool)sf_isCarrierInstall;
- (id)sf_monthAndYearOfManufacture;
- (id)sf_regionCode;
- (id)sf_productType;
- (id)sf_deviceType;
- (id)sf_regulatoryDeviceVariant;

@end
