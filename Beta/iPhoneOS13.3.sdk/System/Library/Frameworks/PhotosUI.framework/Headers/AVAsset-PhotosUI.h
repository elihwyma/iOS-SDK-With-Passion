/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <AVFoundation/AVAsset.h>

@class NSValue;

@interface AVAsset (PhotosUI)

@property (nonatomic, readonly) NSValue *pu_cachedDuration;
@property (nonatomic, readonly) _Bool pu_supportsVitality;

- (CDStruct_1b6d18a9)pu_duration;
- (void)pu_loadDurationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_pu_setCachedDuration:(id)arg1;
- (id)pu_vitalityVideoComposition;
- (id)pu_stillImageTransformAssetTrack;
- (struct TransformMetadataItemPair)pu_stillAssetTransformMetadataPair;
- (CDStruct_8e0628e6)pu_perspectiveTransformForMetadata:(id)arg1;
- (CDStruct_8e0628e6)pu_perspectiveTransform:(CDStruct_8e0628e6)arg1 rescaledForMetadata:(id)arg2 currentAssetDimensions:(struct CGSize)arg3;

@end
