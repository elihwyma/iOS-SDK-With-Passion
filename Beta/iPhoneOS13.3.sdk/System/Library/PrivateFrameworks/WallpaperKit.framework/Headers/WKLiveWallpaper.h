/*
 Image: /System/Library/PrivateFrameworks/WallpaperKit.framework/WallpaperKit
 */

#import <WallpaperKit/WKAbstractWallpaper.h>

@class NSString, NSURL;

@interface WKLiveWallpaper : WKAbstractWallpaper

{
    NSURL *_fullsizeImageURL;
    NSURL *_thumbnailImageURL;
    NSURL *_videoAssetURL;
    double _stillTimeInVideo;
}

@property (copy, nonatomic) NSURL *thumbnailImageURL;
@property (copy, nonatomic) NSURL *fullsizeImageURL;
@property (copy, nonatomic) NSURL *videoAssetURL;
@property (nonatomic) double stillTimeInVideo;
@property (nonatomic, readonly) unsigned long long identifier;
@property (copy, nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long type;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(unsigned long long)arg1 name:(id)arg2;
- (id)initWithIdentifier:(unsigned long long)arg1 name:(id)arg2 thumbnailImageURL:(id)arg3 fullsizeImageURL:(id)arg4 videoAssetURL:(id)arg5 stillTimeInVideo:(double)arg6;

@end
