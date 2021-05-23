/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface BSPlatform : NSObject

@property (copy, nonatomic, readonly) NSString *productType;
@property (copy, nonatomic, readonly) NSString *productHardwareModel;
@property (copy, nonatomic, readonly) NSString *productHardwareModelName;
@property (copy, nonatomic, readonly) NSString *productClass;
@property (copy, nonatomic, readonly) NSString *localizedProductName;
@property (copy, nonatomic, readonly) NSString *operatingSystemName;
@property (copy, nonatomic, readonly) NSString *uniqueDeviceIdentifier;
@property (nonatomic, readonly) int deviceClass;
@property (nonatomic, readonly) long long homeButtonType;
@property (copy, nonatomic, readonly) NSString *productVersion;
@property (copy, nonatomic, readonly) NSString *productBuildVersion;
@property (nonatomic, readonly, getter=isInternalInstall) _Bool internalInstall;
@property (nonatomic, readonly, getter=isDeveloperInstall) _Bool developerInstall;
@property (nonatomic, readonly, getter=isCarrierInstall) _Bool carrierInstall;
@property (nonatomic, readonly, getter=isMultiCore) _Bool multiCore;
@property (nonatomic, readonly) _Bool hasGasGauge;
@property (nonatomic, readonly) _Bool hasOrbCapability;

+ (id)sharedInstance;

- (_Bool)_isD22Emulator;

@end
