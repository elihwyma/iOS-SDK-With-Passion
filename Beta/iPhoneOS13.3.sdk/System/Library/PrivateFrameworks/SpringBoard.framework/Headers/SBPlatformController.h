/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSOrderedSet, NSString;

@interface SBPlatformController : NSObject

{
    NSDictionary *_defaultIconState;
    NSOrderedSet *_defaultIconStateDisplayIdentifiers;
    NSString *_localizedDeviceName;
    _Bool _internalInstall;
    _Bool _carrierInstall;
    long long _medusaCapabilities;
}

+ (id)sharedInstance;

- (id)init;
- (id)hardwareModel;
- (id)productType;
- (id)deviceClass;
- (id)uniqueDeviceIdentifier;
- (_Bool)isInternalInstall;
- (_Bool)isCarrierInstall;
- (id)systemBuildVersion;
- (id)defaultIconState;
- (_Bool)prefersAlwaysOnOrientation;
- (long long)medusaCapabilities;
- (_Bool)supportsGestureInitiatedAutoPiP;
- (id)defaultIconStateDisplayIdentifiers;
- (id)localizedPlatformName;
- (_Bool)isHomeGestureEnabled;
- (void)_loadDefaultIconInfo;
- (_Bool)isDeveloperDevice;
- (_Bool)isiPadMini;
- (_Bool)isRoundCornerPhone;
- (_Bool)isRoundCornerPad;

@end
