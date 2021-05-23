/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UIDevice.h>

@interface UIDevice (Additions)

- (long long)memorySize;
- (id)orientationString;
- (int)numberOfCPU;
- (_Bool)hasMoreThan1GBOfMemory;
- (_Bool)osVersionAtLeast:(id)arg1;
- (_Bool)enoughPowerForLargerPhotoThumbnails;
- (_Bool)enoughMemoryFor2160P;
- (_Bool)enoughPowerFor2160P;
- (_Bool)hasPlentyOfMemory;
- (_Bool)enoughMemoryForRendering12MPPhoto;
- (_Bool)isLargePhone;
- (_Bool)isWidePhone;
- (long long)freeMemory;
- (_Bool)canEncode2160P;
- (_Bool)screenCanShow2160P;
- (_Bool)canSupportHEVC;
- (_Bool)sufficientOomphForZoomedRenderScale;

@end
