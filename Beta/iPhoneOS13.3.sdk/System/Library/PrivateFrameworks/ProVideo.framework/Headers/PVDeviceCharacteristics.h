/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@interface PVDeviceCharacteristics : NSObject

+ (_Bool)hasExtendedColorDisplay;
+ (int)architectureType;
+ (long long)actualMemory;
+ (_Bool)isLowMemDevice;
+ (void)Initialize;
+ (_Bool)colorSyncCapable;

@end
