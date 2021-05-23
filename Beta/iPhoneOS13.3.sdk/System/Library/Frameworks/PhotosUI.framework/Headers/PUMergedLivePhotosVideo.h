/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class AVAsset, AVVideoComposition, NSArray;

@interface PUMergedLivePhotosVideo : NSObject

{
    NSArray *_assets;
    NSArray *_startTimes;
    NSArray *_keyTimes;
    AVAsset *_mergedVideoAsset;
    AVVideoComposition *_mergedVideoComposition;
    double _videoAspectRatio;
    unsigned long long _options;
}

@property (copy, nonatomic, readonly) NSArray *assets;
@property (copy, nonatomic, readonly) NSArray *startTimes;
@property (copy, nonatomic, readonly) NSArray *keyTimes;
@property (nonatomic, readonly) AVAsset *mergedVideoAsset;
@property (nonatomic, readonly) AVVideoComposition *mergedVideoComposition;
@property (nonatomic, readonly) double videoAspectRatio;
@property (nonatomic, readonly) unsigned long long options;

- (id)debugDescription;
- (id)initWithAssets:(id)arg1 startTimes:(id)arg2 keyTimes:(id)arg3 videoAsset:(id)arg4 videoComposition:(id)arg5 videoAspectRatio:(double)arg6 options:(unsigned long long)arg7;
- (id)assetAtTime:(CDStruct_1b6d18a9)arg1 progress:(out double *)arg2;
- (long long)_assetIndexAtTime:(CDStruct_1b6d18a9)arg1;

@end
