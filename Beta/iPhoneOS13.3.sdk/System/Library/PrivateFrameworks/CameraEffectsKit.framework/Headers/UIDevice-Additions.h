/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <UIKit/UIDevice.h>

@interface UIDevice (Additions)

- (double)aspectRatio;
- (struct CGSize)screenBounds;
- (double)imageScale;
- (long long)memorySize;
- (double)screenHeight;
- (id)orientationString;
- (unsigned long long)cpuFamily;
- (double)thumbnailScale;
- (int)osBuildNumber:(id)arg1;
- (_Bool)enoughPowerForStyleTransfer;
- (_Bool)isSelfieCompatible;
- (int)numberOfCPU;
- (_Bool)hasMoreThan1GBOfMemory;
- (_Bool)osVersionAtLeast:(id)arg1;
- (_Bool)enoughPowerForLargerPhotoThumbnails;
- (_Bool)canEncode2160P:(_Bool)arg1;
- (_Bool)enoughMemoryFor2160P;
- (_Bool)enoughPowerFor2160P;
- (_Bool)hasPlentyOfMemory;
- (_Bool)enoughMemoryForRendering12MPPhoto;
- (_Bool)_deviceHasTrueDepth;
- (_Bool)_deviceHasDualBackCam;
- (_Bool)hasDualBackCam;
- (_Bool)isLargePhone;
- (_Bool)isWidePhone;
- (long long)freeMemory;
- (_Bool)CFX_disableExpensiveFilters;
- (struct CGSize)squareCompositionSize;
- (_Bool)enoughPowerForUIBlur;
- (_Bool)canEncode2160P;
- (_Bool)canEncodeHEVC2160P;
- (_Bool)screenCanShow2160P;
- (_Bool)canDecodeHEVC2160P;
- (id)deviceCharacteristicsDict;
- (double)maxPixelsForImage:(_Bool)arg1;
- (_Bool)allowsDepthFromDualBackCamera;

@end
