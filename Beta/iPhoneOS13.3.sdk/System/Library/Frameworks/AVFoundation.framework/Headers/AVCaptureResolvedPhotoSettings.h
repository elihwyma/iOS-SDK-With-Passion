/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVCaptureResolvedPhotoSettingsInternal;

@interface AVCaptureResolvedPhotoSettings : NSObject

{
    AVCaptureResolvedPhotoSettingsInternal *_internal;
}

@property (readonly) long long uniqueID;
@property (readonly) CDStruct_79c71658 photoDimensions;
@property (readonly) CDStruct_79c71658 rawPhotoDimensions;
@property (readonly) CDStruct_79c71658 previewDimensions;
@property (readonly) CDStruct_79c71658 embeddedThumbnailDimensions;
@property (readonly) CDStruct_79c71658 rawEmbeddedThumbnailDimensions;
@property (readonly) CDStruct_79c71658 portraitEffectsMatteDimensions;
@property (readonly) CDStruct_79c71658 livePhotoMovieDimensions;
@property (readonly, getter=isFlashEnabled) _Bool flashEnabled;
@property (readonly, getter=isRedEyeReductionEnabled) _Bool redEyeReductionEnabled;
@property (readonly, getter=isStillImageStabilizationEnabled) _Bool stillImageStabilizationEnabled;
@property (readonly, getter=isVirtualDeviceFusionEnabled) _Bool virtualDeviceFusionEnabled;
@property (readonly, getter=isDualCameraFusionEnabled) _Bool dualCameraFusionEnabled;
@property (readonly) unsigned long long expectedPhotoCount;
@property (readonly) CDStruct_e83c9415 photoProcessingTimeRange;

+ (id)resolvedSettingsWithUniqueID:(long long)arg1 photoDimensions:(CDStruct_79c71658)arg2 rawPhotoDimensions:(CDStruct_79c71658)arg3 previewDimensions:(CDStruct_79c71658)arg4 embeddedThumbnailDimensions:(CDStruct_79c71658)arg5 rawEmbeddedThumbnailDimensions:(CDStruct_79c71658)arg6 livePhotoMovieEnabled:(_Bool)arg7 livePhotoMovieDimensions:(CDStruct_79c71658)arg8 portraitEffectsMatteDimensions:(CDStruct_79c71658)arg9 hairSegmentationMatteDimensions:(CDStruct_79c71658)arg10 skinSegmentationMatteDimensions:(CDStruct_79c71658)arg11 teethSegmentationMatteDimensions:(CDStruct_79c71658)arg12 spatialOverCapturePhotoDimensions:(CDStruct_79c71658)arg13 turboModeEnabled:(_Bool)arg14 flashEnabled:(_Bool)arg15 redEyeReductionEnabled:(_Bool)arg16 HDREnabled:(_Bool)arg17 adjustedPhotoFiltersEnabled:(_Bool)arg18 EV0PhotoDeliveryEnabled:(_Bool)arg19 stillImageStabilizationEnabled:(_Bool)arg20 virtualDeviceFusionEnabled:(_Bool)arg21 squareCropEnabled:(_Bool)arg22 deferredPhotoProxyDimensions:(CDStruct_79c71658)arg23 photoProcessingTimeRange:(CDStruct_e83c9415)arg24 photoManifest:(id)arg25;

- (void)dealloc;
- (id)description;
- (id)debugDescription;
- (id)photoManifest;
- (_Bool)isEV0PhotoDeliveryEnabled;
- (_Bool)isTurboModeEnabled;
- (_Bool)isSquareCropEnabled;
- (_Bool)livePhotoMovieEnabled;
- (CDStruct_79c71658)spatialOverCapturePhotoDimensions;
- (CDStruct_79c71658)deferredPhotoProxyDimensions;
- (id)_initWithUniqueID:(long long)arg1 photoDimensions:(CDStruct_79c71658)arg2 rawPhotoDimensions:(CDStruct_79c71658)arg3 previewDimensions:(CDStruct_79c71658)arg4 embeddedThumbnailDimensions:(CDStruct_79c71658)arg5 rawEmbeddedThumbnailDimensions:(CDStruct_79c71658)arg6 livePhotoMovieEnabled:(_Bool)arg7 livePhotoMovieDimensions:(CDStruct_79c71658)arg8 portraitEffectsMatteDimensions:(CDStruct_79c71658)arg9 hairSegmentationMatteDimensions:(CDStruct_79c71658)arg10 skinSegmentationMatteDimensions:(CDStruct_79c71658)arg11 teethSegmentationMatteDimensions:(CDStruct_79c71658)arg12 spatialOverCapturePhotoDimensions:(CDStruct_79c71658)arg13 turboModeEnabled:(_Bool)arg14 flashEnabled:(_Bool)arg15 redEyeReductionEnabled:(_Bool)arg16 HDREnabled:(_Bool)arg17 adjustedPhotoFiltersEnabled:(_Bool)arg18 EV0PhotoDeliveryEnabled:(_Bool)arg19 stillImageStabilizationEnabled:(_Bool)arg20 virtualDeviceFusionEnabled:(_Bool)arg21 squareCropEnabled:(_Bool)arg22 deferredPhotoProxyDimensions:(CDStruct_79c71658)arg23 photoProcessingTimeRange:(CDStruct_e83c9415)arg24 photoManifest:(id)arg25;
- (CDStruct_79c71658)dimensionsForSemanticSegmentationMatteOfType:(id)arg1;
- (_Bool)isHDREnabled;
- (_Bool)isAdjustedPhotoFilterRenderingEnabled;

@end
