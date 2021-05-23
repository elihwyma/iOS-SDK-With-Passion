/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXSettings.h>

@interface PUPhotoEditProtoSettings : PXSettings

{
    _Bool _enableFinalizerGesture;
    _Bool _useAsynchronousVideoRendering;
    _Bool _enablePerfDebugHUD;
    _Bool _enableReframeDebugHUD;
    _Bool _enablePerfTTRButton;
    _Bool _alwaysShowPortraitV2;
    _Bool _showLevelIndicator;
    _Bool _showResetToolButton;
    _Bool _allowAnyPlugin;
    _Bool _attemptEditExtensionUndoAutoSetup;
    _Bool _cropMaskBlurred;
    _Bool _autoCropEnabled;
    _Bool _perspectiveViewDebugCropEnabled;
    _Bool _autoPerspectiveDisableOnPanos;
    _Bool _autoPerspectiveDisableOnFrontFacingCameraImages;
    _Bool _simulateDownload;
    _Bool _simulateDownloadFailure;
    _Bool _previewOriginalTimesOut;
    _Bool _loopBounceTrimAllowed;
    _Bool _pauseAfterMovingPlayhead;
    _Bool _alwaysAllowKeyPhotoEditing;
    _Bool _showEffectsPicker;
    _Bool _limitRAWByCPU;
    _Bool _allowApertureRedEye;
    _Bool _requireTapToShowMakePosterFrame;
    _Bool _allowMakePosterFrameForVideo;
    _Bool _showVideoScrubberDebugOverlay;
    _Bool _hideSelectionRing;
    _Bool _alwaysShowValueWhenAdjustmentIsSelected;
    _Bool _showSuggestedKeyFrame;
    _Bool _enableEnterEditSmartToneAutoCalc;
    _Bool _enableEnterEditSmartColorAutoCalc;
    _Bool _enableEnterEditCropAutoCalc;
    _Bool _enableEnterEditPerspectiveAutoCalc;
    _Bool _enableEnterEditDepthEffectAutoCalc;
    _Bool _enableEnterEditPortraitAutoCalc;
    _Bool _enableEnterEditFilterThumbnailGeneration;
    long long _renderPriority;
    double _ttrButtonDurationThreshold;
    double _cropSideMargins;
    double _cropWheelSize;
    double _trackBallSize;
    double _cropRecomposeDelay;
    double _autoStraightenMaxAngle;
    double _autoPerspectiveMaxYaw;
    double _autoPerspectiveMaxPitch;
    double _autoPerspectiveMaxAngle;
    double _autoPerspectiveMaxFaceSize;
    double _maxRawMP;
    double _previewOriginalDuration;
    double _strokeWidth;
    double _selectionRingStrokeWidth;
    double _adjustmentLabelPlatterAlpha;
}

@property (nonatomic) _Bool enableFinalizerGesture;
@property (nonatomic) long long renderPriority;
@property (nonatomic) _Bool useAsynchronousVideoRendering;
@property (nonatomic) _Bool enablePerfDebugHUD;
@property (nonatomic) _Bool enableReframeDebugHUD;
@property (nonatomic) _Bool enablePerfTTRButton;
@property (nonatomic) double ttrButtonDurationThreshold;
@property (nonatomic) _Bool alwaysShowPortraitV2;
@property (nonatomic) _Bool showLevelIndicator;
@property (nonatomic) _Bool showResetToolButton;
@property (nonatomic) _Bool allowAnyPlugin;
@property (nonatomic) _Bool attemptEditExtensionUndoAutoSetup;
@property (nonatomic) double cropSideMargins;
@property (nonatomic) double cropWheelSize;
@property (nonatomic) _Bool cropMaskBlurred;
@property (nonatomic) _Bool autoCropEnabled;
@property (nonatomic) double trackBallSize;
@property (nonatomic) _Bool perspectiveViewDebugCropEnabled;
@property (nonatomic) double cropRecomposeDelay;
@property (nonatomic) double autoStraightenMaxAngle;
@property (nonatomic) double autoPerspectiveMaxYaw;
@property (nonatomic) double autoPerspectiveMaxPitch;
@property (nonatomic) double autoPerspectiveMaxAngle;
@property (nonatomic) double autoPerspectiveMaxFaceSize;
@property (nonatomic) _Bool autoPerspectiveDisableOnPanos;
@property (nonatomic) _Bool autoPerspectiveDisableOnFrontFacingCameraImages;
@property (nonatomic) _Bool simulateDownload;
@property (nonatomic) _Bool simulateDownloadFailure;
@property (nonatomic) double maxRawMP;
@property (nonatomic) _Bool previewOriginalTimesOut;
@property (nonatomic) double previewOriginalDuration;
@property (nonatomic) _Bool loopBounceTrimAllowed;
@property (nonatomic) _Bool pauseAfterMovingPlayhead;
@property (nonatomic) _Bool alwaysAllowKeyPhotoEditing;
@property (nonatomic) _Bool showEffectsPicker;
@property (nonatomic) _Bool limitRAWByCPU;
@property (nonatomic) _Bool allowApertureRedEye;
@property (nonatomic) _Bool requireTapToShowMakePosterFrame;
@property (nonatomic) _Bool allowMakePosterFrameForVideo;
@property (nonatomic) _Bool showVideoScrubberDebugOverlay;
@property (nonatomic) double strokeWidth;
@property (nonatomic) _Bool hideSelectionRing;
@property (nonatomic) double selectionRingStrokeWidth;
@property (nonatomic) double adjustmentLabelPlatterAlpha;
@property (nonatomic) _Bool alwaysShowValueWhenAdjustmentIsSelected;
@property (nonatomic) _Bool showSuggestedKeyFrame;
@property (nonatomic) _Bool enableEnterEditSmartToneAutoCalc;
@property (nonatomic) _Bool enableEnterEditSmartColorAutoCalc;
@property (nonatomic) _Bool enableEnterEditCropAutoCalc;
@property (nonatomic) _Bool enableEnterEditPerspectiveAutoCalc;
@property (nonatomic) _Bool enableEnterEditDepthEffectAutoCalc;
@property (nonatomic) _Bool enableEnterEditPortraitAutoCalc;
@property (nonatomic) _Bool enableEnterEditFilterThumbnailGeneration;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end
