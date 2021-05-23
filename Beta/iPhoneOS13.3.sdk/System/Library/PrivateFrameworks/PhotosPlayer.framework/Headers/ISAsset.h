/*
 Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

#import <Foundation/NSObject.h>

@class AVAsset;

@interface ISAsset : NSObject

{
    id _UIImage;
    int _photoEXIFOrientation;
    AVAsset *_videoAsset;
    struct CGImage *_photo;
    double _photoTime;
    unsigned long long _options;
}

@property (copy, nonatomic, readonly) AVAsset *videoAsset;
@property (nonatomic, readonly) struct CGImage *photo;
@property (nonatomic, readonly) double photoTime;
@property (nonatomic, readonly) CDStruct_1b6d18a9 photoCMTime;
@property (nonatomic, readonly) int photoEXIFOrientation;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) _Bool hasColorAdjustments;

+ (id)assetForURL:(id)arg1 error:(id *)arg2;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)initWithVideoAsset:(id)arg1 UIImage:(id)arg2 photoTime:(double)arg3 photoEXIFOrientation:(int)arg4 options:(unsigned long long)arg5;
- (id)initWithVideoAsset:(id)arg1 photo:(struct CGImage *)arg2 photoTime:(double)arg3 photoEXIFOrientation:(int)arg4;
- (id)initWithVideoAsset:(id)arg1 photo:(struct CGImage *)arg2 photoTime:(double)arg3 options:(unsigned long long)arg4;
- (id)initWithVideoAsset:(id)arg1 photo:(struct CGImage *)arg2 photoTime:(double)arg3;
- (id)initWithVideoAsset:(id)arg1 photo:(struct CGImage *)arg2 photoTime:(double)arg3 photoEXIFOrientation:(int)arg4 options:(unsigned long long)arg5;
- (void)resetAVObjects;

@end
