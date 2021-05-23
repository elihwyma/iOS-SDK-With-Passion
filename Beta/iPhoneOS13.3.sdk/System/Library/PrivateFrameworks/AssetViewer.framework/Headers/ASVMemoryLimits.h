/*
 Image: /System/Library/PrivateFrameworks/AssetViewer.framework/AssetViewer
 */

#import <Foundation/NSObject.h>

@interface ASVMemoryLimits : NSObject

+ (unsigned long long)processMemory;
+ (unsigned long long)viewerMemoryAvailableForTexturesOnHighMemoryDevices;
+ (unsigned long long)viewerMemoryAvailableForTexturesOnThisDevice;
+ (unsigned long long)thumbnailMemoryAvailableForTextures;

@end
