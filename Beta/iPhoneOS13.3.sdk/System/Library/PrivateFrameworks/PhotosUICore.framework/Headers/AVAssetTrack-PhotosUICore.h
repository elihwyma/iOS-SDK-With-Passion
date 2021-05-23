/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <AVFoundation/AVAssetTrack.h>

@interface AVAssetTrack (PhotosUICore)

+ (struct CGAffineTransform)px_changeTranslationOfTransform:(struct CGAffineTransform)arg1 forAssetSize:(struct CGSize)arg2;

- (struct CGAffineTransform)px_preferredTransformBasedOnNaturalSize;
- (struct CGSize)px_transformedNaturalSize;

@end
