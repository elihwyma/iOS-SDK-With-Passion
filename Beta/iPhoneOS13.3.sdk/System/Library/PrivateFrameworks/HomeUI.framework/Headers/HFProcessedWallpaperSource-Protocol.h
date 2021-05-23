/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/Swift-Protocol.h>

@class NSArray;

@protocol HFProcessedWallpaperSource <Swift>

@property (copy, nonatomic, readonly) NSArray *supportedVariants;
@property (nonatomic, readonly) unsigned long long processVersionNumber;

- (unsigned short)processedImageForVariant:wallpaper:image: /* Error: Ran out of types for this method. */;

@end
