/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <AVAsset.h>

@interface AVAsset (_QLUtilities)

+ (void)assetIsAutoloopMedia:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

- (struct CGSize)ql_imageSizeOfFirstVideoTrack;
- (_Bool)ql_canBeRotated;

@end
