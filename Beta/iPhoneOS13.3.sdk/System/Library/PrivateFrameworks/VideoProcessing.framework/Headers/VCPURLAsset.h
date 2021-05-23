/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <VideoProcessing/VCPAsset.h>

@class AVURLAsset, NSDictionary, NSURL;

@interface VCPURLAsset : VCPAsset

{
    NSURL *_imageURL;
    AVURLAsset *_movie;
    long long _mediaType;
    unsigned long long _mediaSubtypes;
    unsigned long long _pixelWidth;
    unsigned long long _pixelHeight;
    _Bool _onceExif;
    NSDictionary *_cachedExif;
}

+ (id)imageAssetWithURL:(id)arg1;
+ (id)livePhotoAssetWithImageURL:(id)arg1 andMovieURL:(id)arg2;
+ (id)movieAssetWithURL:(id)arg1;

- (double)duration;
- (id)modificationDate;
- (long long)mediaType;
- (id)initWithImageURL:(id)arg1;
- (id)movie;
- (unsigned long long)pixelWidth;
- (unsigned long long)pixelHeight;
- (id)mainFileURL;
- (unsigned long long)mediaSubtypes;
- (id)exif;
- (struct __CVBuffer *)imageWithPreferredDimension:(unsigned long long)arg1;
- (float)photoOffsetSeconds;
- (float)originalPhotoOffsetSeconds;
- (float)slowmoRate;
- (id)originalMovie;
- (id)initWithImageURL:(id)arg1 andMovieURL:(id)arg2;
- (id)initWithMovieURL:(id)arg1;

@end
