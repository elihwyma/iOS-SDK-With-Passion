/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <Foundation/NSObject.h>

@class AVAsset, AVAssetTrack, NSArray;

@interface PIVideoReframeMetadataExtractor : NSObject

{
    AVAsset *_asset;
    AVAssetTrack *_videoTrack;
    AVAssetTrack *_mdataTrack;
    struct CGAffineTransform ndcMetadataTransform;
    struct CGAffineTransform pxlMetadataTransform;
    NSArray *timedMetadataArray;
}

@property (nonatomic, readonly) NSArray *timedMetadataArray;

- (id)init;
- (id)initWithAVAsset:(id)arg1;
- (id)extractMetadata;
- (void)overwriteTrackingMetadataWithPlist:(id)arg1;
- (id)subjectsFromMetadata:(const struct FigLivePhotoMetadata *)arg1;
- (struct CGVector)centerMotionVectorFromMetadata:(const struct FigLivePhotoMetadata *)arg1;
- (struct CGVector)motionBlurVectorFromMetadata:(const struct FigLivePhotoMetadata *)arg1;
- (CDStruct_8e0628e6)trajectoryeHomographyFromMetadata:(const struct FigLivePhotoMetadata *)arg1 containsV3Metadata:(_Bool *)arg2;

@end
