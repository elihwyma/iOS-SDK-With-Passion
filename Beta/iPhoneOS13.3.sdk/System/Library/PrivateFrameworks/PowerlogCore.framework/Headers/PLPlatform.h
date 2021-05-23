/*
 Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

#import <Foundation/NSObject.h>

@interface PLPlatform : NSObject

+ (_Bool)internalBuild;
+ (_Bool)isHomePod;
+ (_Bool)isiPhone;
+ (_Bool)isiPad;
+ (_Bool)isWatch;
+ (_Bool)isMac;
+ (_Bool)isiPod;
+ (_Bool)carrierBuild;
+ (_Bool)hasCapability:(int)arg1;
+ (_Bool)seedBuild;
+ (_Bool)hasBaseband;
+ (_Bool)is64Bit;
+ (_Bool)hasOrb;
+ (_Bool)isDeviceClass:(int)arg1;
+ (_Bool)isiOS;
+ (int)kPLCameraClassOfDevice;
+ (_Bool)isBasebandClass:(int)arg1;
+ (int)kPLBasebandClassOfDevice;
+ (int)kPLWiFiClassOfDevice;
+ (_Bool)isWiFiClass:(int)arg1;
+ (_Bool)hasAOT;
+ (int)kPLSoCClassOfDevice;
+ (_Bool)isSoCClass:(int)arg1;
+ (int)kPLDisplayClassOfDevice;
+ (_Bool)kPLDisplayClassIsOneOf:(int)arg1;
+ (int)kPLAudioClassOfDevice;
+ (_Bool)nonUIBuild;
+ (_Bool)kPLSoCClassIsOneOf:(int)arg1;
+ (_Bool)kPLDeviceClassIsOneOf:(int)arg1;
+ (int)kPLDeviceClass;
+ (_Bool)hasNFC;
+ (_Bool)isGPSClass:(int)arg1;
+ (id)wrapDeviceArgumentsInArray:(int)arg1;
+ (id)kPLDeviceMap;
+ (id)kPLPlatformAttributes;
+ (id)kPLDeviceClassName;
+ (int)kPLTorchClassOfDevice;
+ (int)kPLGPSClassOfDevice;
+ (_Bool)kPLXIsOneOf:(int)arg1 firstArg:(int)arg2 restOfArgs:(char *)arg3;
+ (_Bool)isDeviceClassName:(id)arg1;
+ (_Bool)isDisplayClass:(int)arg1;
+ (_Bool)isAudioClass:(int)arg1;
+ (_Bool)isCameraClass:(int)arg1;
+ (_Bool)isTorchClass:(int)arg1;
+ (_Bool)kPLBasebandClassIsOneOf:(int)arg1;
+ (_Bool)kPLWiFiClassIsOneOf:(int)arg1;
+ (_Bool)kPLAudioClassIsOneOf:(int)arg1;
+ (_Bool)kPLCameraClassIsOneOf:(int)arg1;
+ (_Bool)kPLTorchClassIsOneOf:(int)arg1;
+ (_Bool)kPLGPSClassIsOneOf:(int)arg1;

@end
