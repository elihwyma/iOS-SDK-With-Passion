/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSettings.h>

@interface PXGridKitSettings : PXSettings

{
    _Bool _pauseWhenIdle;
    _Bool _enableMetalRenderer;
    _Bool _enableViewRenderer;
    _Bool _enableAccessibilityRenderer;
    _Bool _lowLatency;
    _Bool _enableRoundedCorners;
    _Bool _enableColorMatching;
    _Bool _debugExtendedColorRange;
    _Bool _debugOpaque;
    _Bool _debugResolution;
    _Bool _debugColorTransform;
    _Bool _colorCopiedImages;
    _Bool _colorCachedThumbnails;
    _Bool _requestThumbnailsOnly;
    _Bool _requestMasterThumbsOnly;
    _Bool _disableLowResThumbnails;
    _Bool _simulateSomeAssetsInCloud;
    _Bool _loadThumbnailsAsync;
    _Bool _allowBlockingDuringScrolling;
    _Bool _allowBlockingDueToFences;
    _Bool _wantsOrthogonalProjection;
    _Bool _wantsStatsDebugHUD;
    _Bool _wantsRectDiagnosticsDebugHUD;
    _Bool _enableAnchoringRectDiagnostics;
    _Bool _enableAssetsRectDiagnostics;
    _Bool _enableRectDiagnosticsForUndefinedSprites;
    _Bool _enableRectDiagnosticsForNamedImageSprites;
    _Bool _enableRectDiagnosticsForDisplayAssetSprites;
    _Bool _enableRectDiagnosticsForTextSprites;
    _Bool _enableRectDiagnosticsForTitleSubtitleSprites;
    _Bool _enableRectDiagnosticsForSolidColorSprites;
    _Bool _enableRectDiagnosticsForGradientSprites;
    _Bool _enableRectDiagnosticsForShadowSprites;
    _Bool _enableRectDiagnosticsForDecorationSprites;
    _Bool _enableRectDiagnosticsForViewSprites;
    _Bool _wantsPerspectiveDebug;
    _Bool _shouldShowBoundariesOfTextTextures;
    _Bool _shouldIncludeSpecialCharactersInTextTextures;
    long long _sampleCount;
    long long _thumbnailCacheSize;
    double _opportunisticPreheatRequiredIdleTime;
    double _blockingWhileScrollingTimeout;
    double _blockingWhileScrubbingTimeout;
    long long _blockOnMissingThumbnailsAtSpeedRegime;
    long long _videoAllowedAtOrBelowSpeed;
    long long _videoAllowedAtOrBelowSpeedForLowSpec;
    long long _lowSpecProcessorCountLimit;
    double _slowAnimationsSpeed;
    double _maxCornerRadius;
    double _cameraZoomFactor;
    double _perspectiveAngle;
}

@property (nonatomic) _Bool pauseWhenIdle;
@property (nonatomic) _Bool enableMetalRenderer;
@property (nonatomic) _Bool enableViewRenderer;
@property (nonatomic) _Bool enableAccessibilityRenderer;
@property (nonatomic) _Bool lowLatency;
@property (nonatomic) _Bool enableRoundedCorners;
@property (nonatomic) _Bool enableColorMatching;
@property (nonatomic) long long sampleCount;
@property (nonatomic) _Bool debugExtendedColorRange;
@property (nonatomic) _Bool debugOpaque;
@property (nonatomic) _Bool debugResolution;
@property (nonatomic) _Bool debugColorTransform;
@property (nonatomic) _Bool colorCopiedImages;
@property (nonatomic) _Bool colorCachedThumbnails;
@property (nonatomic) _Bool requestThumbnailsOnly;
@property (nonatomic) _Bool requestMasterThumbsOnly;
@property (nonatomic) _Bool disableLowResThumbnails;
@property (nonatomic) _Bool simulateSomeAssetsInCloud;
@property (nonatomic) _Bool loadThumbnailsAsync;
@property (nonatomic) long long thumbnailCacheSize;
@property (nonatomic) double opportunisticPreheatRequiredIdleTime;
@property (nonatomic) _Bool allowBlockingDuringScrolling;
@property (nonatomic) double blockingWhileScrollingTimeout;
@property (nonatomic) double blockingWhileScrubbingTimeout;
@property (nonatomic) long long blockOnMissingThumbnailsAtSpeedRegime;
@property (nonatomic) long long videoAllowedAtOrBelowSpeed;
@property (nonatomic) long long videoAllowedAtOrBelowSpeedForLowSpec;
@property (nonatomic) long long lowSpecProcessorCountLimit;
@property (nonatomic) _Bool allowBlockingDueToFences;
@property (nonatomic) double slowAnimationsSpeed;
@property (nonatomic) double maxCornerRadius;
@property (nonatomic) double cameraZoomFactor;
@property (nonatomic) _Bool wantsOrthogonalProjection;
@property (nonatomic) _Bool wantsStatsDebugHUD;
@property (nonatomic) _Bool wantsRectDiagnosticsDebugHUD;
@property (nonatomic) _Bool enableAnchoringRectDiagnostics;
@property (nonatomic) _Bool enableAssetsRectDiagnostics;
@property (nonatomic) _Bool enableRectDiagnosticsForUndefinedSprites;
@property (nonatomic) _Bool enableRectDiagnosticsForNamedImageSprites;
@property (nonatomic) _Bool enableRectDiagnosticsForDisplayAssetSprites;
@property (nonatomic) _Bool enableRectDiagnosticsForTextSprites;
@property (nonatomic) _Bool enableRectDiagnosticsForTitleSubtitleSprites;
@property (nonatomic) _Bool enableRectDiagnosticsForSolidColorSprites;
@property (nonatomic) _Bool enableRectDiagnosticsForGradientSprites;
@property (nonatomic) _Bool enableRectDiagnosticsForShadowSprites;
@property (nonatomic) _Bool enableRectDiagnosticsForDecorationSprites;
@property (nonatomic) _Bool enableRectDiagnosticsForViewSprites;
@property (nonatomic) _Bool wantsPerspectiveDebug;
@property (nonatomic) double perspectiveAngle;
@property (nonatomic) _Bool shouldShowBoundariesOfTextTextures;
@property (nonatomic) _Bool shouldIncludeSpecialCharactersInTextTextures;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;
- (_Bool)anySpritesRectDiagnosticsEnabled;

@end
