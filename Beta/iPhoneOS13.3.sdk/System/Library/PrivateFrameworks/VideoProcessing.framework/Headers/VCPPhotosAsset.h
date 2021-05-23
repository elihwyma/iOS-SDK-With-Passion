/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <VideoProcessing/VCPAsset.h>

@class NSArray, NSDictionary, PHAsset;

@interface VCPPhotosAsset : VCPAsset

{
    PHAsset *_asset;
    NSArray *_cachedResources;
    _Bool _onceExif;
    NSDictionary *_cachedExif;
}

@property (nonatomic, readonly) NSArray *resources;

+ (id)assetWithPHAsset:(id)arg1;

- (double)duration;
- (id)modificationDate;
- (long long)mediaType;
- (id)localIdentifier;
- (id)movie;
- (unsigned long long)pixelWidth;
- (unsigned long long)pixelHeight;
- (id)mainFileURL;
- (id)fingerprint;
- (unsigned long long)mediaSubtypes;
- (id)initWithPHAsset:(id)arg1;
- (id)exif;
- (struct __CVBuffer *)imageWithPreferredDimension:(unsigned long long)arg1;
- (float)photoOffsetSeconds;
- (float)originalPhotoOffsetSeconds;
- (float)slowmoRate;
- (id)streamedMovie;
- (id)originalMovie;

@end
