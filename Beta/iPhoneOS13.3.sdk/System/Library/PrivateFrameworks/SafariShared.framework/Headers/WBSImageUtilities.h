/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@interface WBSImageUtilities : NSObject

+ (_Bool)image:(id)arg1 isEqualToImage:(id)arg2;
+ (id)_pixelDataForImage:(id)arg1;
+ (id)squareThumbnailImageFromImage:(id)arg1 thumbnailWidthInPixels:(double)arg2;
+ (id)flatImage:(id)arg1 withColor:(id)arg2;
+ (struct CGSize)imageSizeScalingSize:(struct CGSize)arg1 proportionallyToFitSize:(struct CGSize)arg2;
+ (id)resizedImage:(id)arg1 withSize:(struct CGSize)arg2;

@end
