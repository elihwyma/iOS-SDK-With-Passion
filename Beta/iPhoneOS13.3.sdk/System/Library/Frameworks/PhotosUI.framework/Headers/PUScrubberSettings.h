/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXSettings.h>

__attribute__((visibility("hidden")))
@interface PUScrubberSettings : PXSettings

{
    _Bool _usePreviewScrubberMargins;
    _Bool _useTrianglePositionIndicator;
    _Bool _useSmoothingAnimation;
    _Bool _dynamicSeekTolerance;
    unsigned long long _previewInteractiveLoupeBehavior;
    unsigned long long _interactiveLoupeBehavior;
    double _tapAnimationDuration;
    double _smoothingAnimationDuration;
    double _settleAnimationDuration;
    double _settleRequiredDecelerationDistance;
    double _decelerationTargetExpansionDistance;
    double _verticalMargin;
    double _topOutset;
    double _slitAspectRatio;
    double _maxAspectRatio;
    double _interItemSpacing;
    double _interSectionSpacing;
    double _minVideoDuration;
    double _baseVideoWidth;
    double _filmstripAspectRatio;
    long long _defaultPlaybackIndicator;
    long long _initialPlaybackIndicator;
    long long _scrubbingPlaybackIndicator;
    long long _chromeShownPlaybackIndicator;
    long long _playingPlaybackIndicator;
}

@property (nonatomic) unsigned long long previewInteractiveLoupeBehavior;
@property (nonatomic) _Bool usePreviewScrubberMargins;
@property (nonatomic) _Bool useTrianglePositionIndicator;
@property (nonatomic) unsigned long long interactiveLoupeBehavior;
@property (nonatomic) double tapAnimationDuration;
@property (nonatomic) double smoothingAnimationDuration;
@property (nonatomic) double settleAnimationDuration;
@property (nonatomic) double settleRequiredDecelerationDistance;
@property (nonatomic) double decelerationTargetExpansionDistance;
@property (nonatomic) double verticalMargin;
@property (nonatomic) double topOutset;
@property (nonatomic) double slitAspectRatio;
@property (nonatomic) double maxAspectRatio;
@property (nonatomic) double interItemSpacing;
@property (nonatomic) double interSectionSpacing;
@property (nonatomic) _Bool useSmoothingAnimation;
@property (nonatomic) double minVideoDuration;
@property (nonatomic) double baseVideoWidth;
@property (nonatomic) double filmstripAspectRatio;
@property (nonatomic) _Bool dynamicSeekTolerance;
@property (nonatomic) long long defaultPlaybackIndicator;
@property (nonatomic) long long initialPlaybackIndicator;
@property (nonatomic) long long scrubbingPlaybackIndicator;
@property (nonatomic) long long chromeShownPlaybackIndicator;
@property (nonatomic) long long playingPlaybackIndicator;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end
