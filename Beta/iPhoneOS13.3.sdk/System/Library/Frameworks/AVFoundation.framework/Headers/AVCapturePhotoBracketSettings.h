/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVCapturePhotoSettings.h>

@class AVCapturePhotoBracketSettingsInternal, NSArray;

@interface AVCapturePhotoBracketSettings : AVCapturePhotoSettings

{
    AVCapturePhotoBracketSettingsInternal *_bracketSettingsInternal;
}

@property (nonatomic, readonly) NSArray *bracketedSettings;
@property (nonatomic, getter=isLensStabilizationEnabled) _Bool lensStabilizationEnabled;

+ (id)photoBracketSettingsWithRawPixelFormatType:(unsigned int)arg1 processedFormat:(id)arg2 bracketedSettings:(id)arg3;
+ (id)photoBracketSettingsWithRawPixelFormatType:(unsigned int)arg1 rawFileType:(id)arg2 processedFormat:(id)arg3 processedFileType:(id)arg4 bracketedSettings:(id)arg5;

- (void)dealloc;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setFlashMode:(long long)arg1;
- (void)setHDRMode:(long long)arg1;
- (void)setAutoVirtualDeviceFusionEnabled:(_Bool)arg1;
- (void)setAutoRedEyeReductionEnabled:(_Bool)arg1;
- (void)setLivePhotoMovieFileURL:(id)arg1;
- (void)setLivePhotoMovieMetadata:(id)arg1;
- (void)setEV0PhotoDeliveryEnabled:(_Bool)arg1;
- (void)setLivePhotoMovieFileURLForOriginalPhoto:(id)arg1;
- (void)setLivePhotoMovieMetadataForOriginalPhoto:(id)arg1;
- (void)setAutoStillImageStabilizationEnabled:(_Bool)arg1;
- (void)setAutoDualCameraFusionEnabled:(_Bool)arg1;
- (id)_initWithFormat:(id)arg1 processedFileType:(id)arg2 rawPixelFormatType:(unsigned int)arg3 rawFileType:(id)arg4 bracketedSettings:(id)arg5 uniqueID:(long long)arg6 exceptionReason:(id *)arg7;

@end
