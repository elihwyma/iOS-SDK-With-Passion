/*
 Image: /System/Library/PrivateFrameworks/WallpaperKit.framework/WallpaperKit
 */

#import <WallpaperKit/WKAbstractWallpaper.h>

@class NSString, NSURL;

@interface WKStillWallpaper : WKAbstractWallpaper

{
    NSURL *_fullsizeImageURL;
    NSURL *_thumbnailImageURL;
}

@property (copy, nonatomic) NSURL *thumbnailImageURL;
@property (copy, nonatomic) NSURL *fullsizeImageURL;
@property (nonatomic, readonly) unsigned long long identifier;
@property (copy, nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long type;
@property (copy, nonatomic, readonly) NSURL *videoAssetURL;
@property (nonatomic, readonly) double stillTimeInVideo;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(unsigned long long)arg1 name:(id)arg2;
- (id)initWithIdentifier:(unsigned long long)arg1 name:(id)arg2 thumbnailImageURL:(id)arg3 fullsizeImageURL:(id)arg4;

@end
