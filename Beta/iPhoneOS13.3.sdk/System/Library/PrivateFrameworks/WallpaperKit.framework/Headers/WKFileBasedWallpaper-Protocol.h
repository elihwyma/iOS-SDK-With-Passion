/*
 Image: /System/Library/PrivateFrameworks/WallpaperKit.framework/WallpaperKit
 */

#import <WallpaperKit/Swift-Protocol.h>

@class NSURL;

@protocol WKFileBasedWallpaper <Swift>

@property (copy, nonatomic, readonly) NSURL *thumbnailImageURL;
@property (copy, nonatomic, readonly) NSURL *fullsizeImageURL;
@property (copy, nonatomic, readonly) NSURL *videoAssetURL;
@property (nonatomic, readonly) double stillTimeInVideo;

@end
