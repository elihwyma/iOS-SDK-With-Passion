/*
 Image: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
 */

#import <NSObject.h>

@class NSArray, NSString;

@interface CARSessionConfiguration : NSObject

{
    _Bool _vehicleSupportsDestinationSharing;
    _Bool _vehicleSupportsGasoline;
    _Bool _vehicleSupportsDiesel;
    _Bool _vehicleSupportsElectric;
    _Bool _vehicleSupportsCNG;
    _Bool _rightHandDrive;
    _Bool _nightModeSupported;
    _Bool _supportsElectronicTollCollection;
    _Bool _supportsACBack;
    _Bool _supportsSiriZLL;
    _Bool _supportsSiriZLLButton;
    _Bool _supportsSiriMixable;
    _Bool _manufacturerIconVisible;
    _Bool _hasAccessory;
    NSString *_name;
    NSString *_modelName;
    NSString *_manufacturerName;
    NSString *_vehicleName;
    NSString *_vehicleModelName;
    NSString *_vehicleSerialNumber;
    NSString *_vehicleManufacturer;
    NSString *_vehicleFirmwareVersion;
    NSString *_vehicleHardwareVersion;
    NSString *_PPID;
    unsigned long long _transportType;
    NSArray *_screens;
    NSArray *_screenIDs;
    unsigned long long _limitableUserInterfaces;
    NSString *_endpointIdentifier;
    unsigned long long _voiceTriggerMode;
    long long _nowPlayingAlbumArtMode;
    long long _userInterfaceStyle;
    NSString *_manufacturerIconLabel;
    struct NSEdgeInsets _viewAreaInsets;
    struct NSEdgeInsets _dashboardRoundedCorners;
}

@property (nonatomic) _Bool hasAccessory;
@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSString *modelName;
@property (copy, nonatomic, readonly) NSString *manufacturerName;
@property (copy, nonatomic, readonly) NSString *vehicleName;
@property (copy, nonatomic, readonly) NSString *vehicleModelName;
@property (copy, nonatomic, readonly) NSString *vehicleSerialNumber;
@property (copy, nonatomic, readonly) NSString *vehicleManufacturer;
@property (copy, nonatomic, readonly) NSString *vehicleFirmwareVersion;
@property (copy, nonatomic, readonly) NSString *vehicleHardwareVersion;
@property (nonatomic, readonly) _Bool vehicleSupportsDestinationSharing;
@property (nonatomic, readonly) _Bool vehicleSupportsGasoline;
@property (nonatomic, readonly) _Bool vehicleSupportsDiesel;
@property (nonatomic, readonly) _Bool vehicleSupportsElectric;
@property (nonatomic, readonly) _Bool vehicleSupportsCNG;
@property (copy, nonatomic, readonly) NSString *PPID;
@property (nonatomic, readonly) unsigned long long transportType;
@property (copy, nonatomic, readonly) NSArray *screens;
@property (copy, nonatomic, readonly) NSArray *screenIDs;
@property (nonatomic, readonly) _Bool rightHandDrive;
@property (nonatomic, readonly) unsigned long long limitableUserInterfaces;
@property (nonatomic, readonly) _Bool nightModeSupported;
@property (nonatomic, readonly) _Bool supportsElectronicTollCollection;
@property (copy, nonatomic, readonly) NSString *endpointIdentifier;
@property (nonatomic, readonly) unsigned long long voiceTriggerMode;
@property (nonatomic, readonly) long long nowPlayingAlbumArtMode;
@property (nonatomic, readonly) struct NSEdgeInsets viewAreaInsets;
@property (nonatomic, readonly) struct NSEdgeInsets dashboardRoundedCorners;
@property (nonatomic, readonly) long long userInterfaceStyle;
@property (nonatomic, readonly) _Bool supportsACBack;
@property (nonatomic, readonly) _Bool supportsSiriZLL;
@property (nonatomic, readonly) _Bool supportsSiriZLLButton;
@property (nonatomic, readonly) _Bool supportsSiriMixable;
@property (copy, nonatomic, readonly) NSString *manufacturerIconLabel;
@property (nonatomic, readonly) _Bool manufacturerIconVisible;

+ (unsigned long long)_limitableUserInterfacesFromLimitedUIValues:(id)arg1;
+ (id)_descriptionForTransportType:(unsigned long long)arg1;
+ (id)descriptionForCapability:(long long)arg1;
+ (id)descriptionForUserInterfaceStyle:(long long)arg1;
+ (id)descriptionForEdgeInsets:(struct NSEdgeInsets)arg1;

- (id)description;
- (id)valueForUndefinedKey:(id)arg1;
- (id)initWithPropertySupplier:(CDUnknownBlockType)arg1;
- (void)updateCarCapabilities;
- (id)descriptionForTransportType;
- (id)descriptionForLimitableUserInterfaces;
- (id)descriptionForVoiceTriggerMode;
- (id)screenInfoForScreenID:(id)arg1;

@end
