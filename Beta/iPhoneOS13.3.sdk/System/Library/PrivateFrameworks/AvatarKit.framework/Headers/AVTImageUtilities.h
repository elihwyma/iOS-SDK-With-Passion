/*
 Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

#import <Foundation/NSObject.h>

@interface AVTImageUtilities : NSObject

+ (struct UIEdgeInsets)transparencyInsetsForImage:(struct UIImage *)arg1 requiringFullOpacity:(_Bool)arg2;
+ (struct UIImage *)trimmedImageByTrimmingTransparentPixelsFromImage:(struct UIImage *)arg1;
+ (struct UIImage *)trimmedImageByTrimmingTransparentPixelsFromImage:(struct UIImage *)arg1 requiringFullOpacity:(_Bool)arg2;
+ (void)cropImageWhitespace:(struct UIImage *)arg1 upToRect:(struct CGRect)arg2 resultBlock:(CDUnknownBlockType)arg3;
+ (struct CGImage *)CGImageFromImage:(struct UIImage *)arg1;
+ (double)scaleFromImage:(struct UIImage *)arg1;
+ (struct UIImage *)imageFromCGImage:(struct CGImage *)arg1 scale:(double)arg2;
+ (struct UIImage *)cropImage:(struct UIImage *)arg1 toRect:(struct CGRect)arg2;

@end
