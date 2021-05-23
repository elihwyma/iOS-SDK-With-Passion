/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class AVAsset, AVVideoComposition;

@interface _PXLivePhotoTrimScrubberLoupeViewImageRequest : NSObject

{
    AVAsset *_asset;
    AVVideoComposition *_videoComposition;
    double _scale;
    struct CGSize _imageSize;
    CDStruct_1b6d18a9 _sourceTime;
}

@property (retain, nonatomic) AVAsset *asset;
@property (retain, nonatomic) AVVideoComposition *videoComposition;
@property (nonatomic) CDStruct_1b6d18a9 sourceTime;
@property (nonatomic) struct CGSize imageSize;
@property (nonatomic) double scale;
@property (nonatomic, readonly) _Bool isValid;

- (_Bool)isEqual:(id)arg1;

@end
