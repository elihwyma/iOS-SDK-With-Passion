/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <AVFoundation/AVURLAsset.h>

@interface AVURLAsset (HKAdditions)

- (struct CGSize)hk_assetSize;
- (id)hk_thumbnailImage;

@end
