/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface AVCaptureResolvedPhotoSettingsInternal : NSObject

{
    long long uniqueID;
    CDStruct_79c71658 photoDimensions;
    CDStruct_79c71658 rawPhotoDimensions;
    CDStruct_79c71658 previewDimensions;
    CDStruct_79c71658 embeddedThumbnailDimensions;
    CDStruct_79c71658 rawEmbeddedThumbnailDimensions;
    _Bool livePhotoMovieEnabled;
    CDStruct_79c71658 livePhotoMovieDimensions;
    CDStruct_79c71658 portraitEffectsMatteDimensions;
    CDStruct_79c71658 hairSegmentationMatteDimensions;
    CDStruct_79c71658 skinSegmentationMatteDimensions;
    CDStruct_79c71658 teethSegmentationMatteDimensions;
    CDStruct_79c71658 spatialOverCapturePhotoDimensions;
    _Bool turboModeEnabled;
    _Bool flashEnabled;
    _Bool redEyeReductionEnabled;
    _Bool HDREnabled;
    _Bool adjustedPhotoFiltersEnabled;
    _Bool EV0PhotoDeliveryEnabled;
    _Bool stillImageStabilizationEnabled;
    _Bool virtualDeviceFusionEnabled;
    _Bool squareCropEnabled;
    CDStruct_79c71658 deferredPhotoProxyDimensions;
    CDStruct_e83c9415 photoProcessingTimeRange;
    NSArray *photoManifest;
}

- (void)dealloc;

@end
