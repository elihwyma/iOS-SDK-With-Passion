/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

@class AVAsset, AVVideoComposition, NSArray, PXLivePhotoTrimScrubberHiddenAnimationHelper, PXLivePhotoTrimScrubberLoupeView, PXLivePhotoTrimScrubberSpec, PXTrimScrubberLayoutHelper, UIImage, UIImageView;

@protocol PXLivePhotoTrimScrubberDelegate, PXLivePhotoTrimScrubberFilmStripView;

@interface PXLivePhotoTrimScrubber : UIView

{
    PXLivePhotoTrimScrubberLoupeView *_photoLoupe;
    UIView *_filmstripContainerView;
    UIView<PXLivePhotoTrimScrubberFilmStripView> *_filmstripView;
    UIView *_disabledOverlayView;
    struct {
        _Bool respondsToDidTapElement;
        _Bool respondsToDidBeginInteractivelyEditingElement;
        _Bool respondsToCanBeginInteractivelyEditingElement;
        _Bool respondsToDidEndInteractivelyEditingElement;
        _Bool respondsToDidChangeTimeForElement;
        _Bool respondsToAssetDurationDidChange;
        _Bool respondsToDidChangeLoupeRect;
        _Bool respondsToDidZoomToMinimumValueMaximumValue;
        _Bool respondsToDidUnzoom;
        _Bool respondsToDidLayoutSubviews;
        _Bool respondsToDebugStartRect;
        _Bool respondsToDebugEndRect;
        _Bool respondsToDebugStartOffset;
        _Bool respondsToDebugEndOffset;
    } _delegateFlags;
    NSArray *_keyTimeSnappingControllers;
    NSArray *_startTimeSnappingControllers;
    NSArray *_endTimeSnappingControllers;
    _Bool _hasPresentedControls;
    CDStruct_1b6d18a9 _photoTrimBuffer;
    long long _changeDepth;
    PXLivePhotoTrimScrubberHiddenAnimationHelper *_loupeHiddenHelper;
    PXLivePhotoTrimScrubberHiddenAnimationHelper *_trimControlHiddenHelper;
    PXLivePhotoTrimScrubberHiddenAnimationHelper *_playheadHiddenHelper;
    UIView *_debugStartTimeView;
    UIView *_debugLoupeTimeView;
    UIView *_debugEndTimeView;
    _Bool _canEditKeyTime;
    _Bool _playheadEnabled;
    _Bool _disabled;
    _Bool _useMiniScrubber;
    _Bool _allowZoom;
    _Bool _showVideoScrubberDebugOverlay;
    UIView *_preTrimOverlayView;
    UIView *_postTrimOverlayView;
    PXLivePhotoTrimScrubberSpec *_spec;
    Class _filmStripViewClass;
    AVAsset *_asset;
    AVVideoComposition *_videoComposition;
    UIImage *_placeholderImage;
    double _horizontalInset;
    NSArray *_snapKeyTimes;
    NSArray *_snapTrimStartTimes;
    NSArray *_snapTrimEndTimes;
    id <PXLivePhotoTrimScrubberDelegate> _delegate;
    double __contentAspectRatio;
    long long __trackingElement;
    long long _state;
    PXTrimScrubberLayoutHelper *_layoutHelper;
    UIImageView *_trimStartHandle;
    UIImageView *_trimEndHandle;
    UIImageView *_playhead;
    CDStruct_1b6d18a9 _untrimmedDuration;
    CDStruct_1b6d18a9 _keyTime;
    CDStruct_1b6d18a9 _playheadTime;
    CDStruct_1b6d18a9 _suggestedKeyTime;
    CDStruct_1b6d18a9 _trimStartTime;
    CDStruct_1b6d18a9 _trimEndTime;
    CDStruct_1b6d18a9 _originalStartTime;
    CDStruct_1b6d18a9 _originalEndTime;
    CDStruct_1b6d18a9 _minimumTrimLength;
}

@property (nonatomic, setter=_setUntrimmedDuration:) CDStruct_1b6d18a9 untrimmedDuration;
@property (nonatomic, setter=_setContentAspectRatio:) double _contentAspectRatio;
@property (nonatomic, setter=_setTrackingElement:) long long _trackingElement;
@property (nonatomic, readonly) UIView *_preTrimOverlayView;
@property (nonatomic, readonly) UIView *_postTrimOverlayView;
@property (nonatomic) long long state;
@property (retain, nonatomic) PXTrimScrubberLayoutHelper *layoutHelper;
@property (nonatomic, readonly) UIView *photoLoupe;
@property (nonatomic, readonly) UIImageView *trimStartHandle;
@property (nonatomic, readonly) UIImageView *trimEndHandle;
@property (nonatomic, readonly) UIImageView *playhead;
@property (nonatomic) _Bool showVideoScrubberDebugOverlay;
@property (nonatomic) CDStruct_1b6d18a9 minimumTrimLength;
@property (retain, nonatomic) PXLivePhotoTrimScrubberSpec *spec;
@property (nonatomic, readonly) CDStruct_1b6d18a9 viewportMinTime;
@property (nonatomic, readonly) CDStruct_1b6d18a9 viewportMaxTime;
@property (nonatomic, readonly) Class filmStripViewClass;
@property (copy, nonatomic) AVAsset *asset;
@property (copy, nonatomic) AVVideoComposition *videoComposition;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (nonatomic, readonly, getter=isAssetDurationLoaded) _Bool assetDurationLoaded;
@property (nonatomic) double horizontalInset;
@property (nonatomic) CDStruct_1b6d18a9 keyTime;
@property (nonatomic) _Bool canEditKeyTime;
@property (nonatomic) CDStruct_1b6d18a9 playheadTime;
@property (nonatomic) _Bool playheadEnabled;
@property (copy, nonatomic) NSArray *snapKeyTimes;
@property (copy, nonatomic) NSArray *snapTrimStartTimes;
@property (copy, nonatomic) NSArray *snapTrimEndTimes;
@property (nonatomic) CDStruct_1b6d18a9 suggestedKeyTime;
@property (nonatomic) CDStruct_1b6d18a9 trimStartTime;
@property (nonatomic) CDStruct_1b6d18a9 trimEndTime;
@property (nonatomic) CDStruct_1b6d18a9 originalStartTime;
@property (nonatomic) CDStruct_1b6d18a9 originalEndTime;
@property (nonatomic, readonly) long long trimStatus;
@property (nonatomic, readonly) long long currentlyInteractingElement;
@property (weak, nonatomic) id <PXLivePhotoTrimScrubberDelegate> delegate;
@property (retain, nonatomic) UIView *loupePlayerView;
@property (nonatomic, readonly) struct CGRect loupeRect;
@property (nonatomic, getter=isDisabled) _Bool disabled;
@property (nonatomic) _Bool useMiniScrubber;
@property (nonatomic) _Bool allowZoom;

+ (id)createSnappingControllerWithSnappingTarget:(double)arg1;
+ (id)trimStartImage;
+ (id)trimStartHighlightedImage;
+ (id)trimEndImage;
+ (id)trimEndHighlightedImage;
+ (id)trimStartImageMini;
+ (id)trimStartHighlightedImageMini;
+ (id)trimEndImageMini;
+ (id)trimEndHighlightedImageMini;
+ (id)playheadImage;
+ (id)playheadImageMini;
+ (id)_createSnappingControllersForKeytimes:(id)arg1;

- (void)layoutSubviews;
- (void)unzoom;
- (id)initWithFilmStripViewClass:(Class)arg1 spec:(id)arg2;
- (void)prepareForImpact;
- (void)impactOccured;
- (void)_newScrubberLayoutSubviews;
- (void)_setKeyTime:(CDStruct_1b6d18a9)arg1 canHaveImpact:(_Bool)arg2;
- (void)_setPlayheadTime:(CDStruct_1b6d18a9)arg1 canHaveImpact:(_Bool)arg2;
- (void)_updateTrimHandles;
- (void)_updatePlayhead;
- (void)_animateChanges:(CDUnknownBlockType)arg1;
- (void)performAnimatedChanges:(CDUnknownBlockType)arg1;
- (CDStruct_1b6d18a9)timeForElement:(long long)arg1;
- (double)horizontalOffsetForTime:(CDStruct_1b6d18a9)arg1;
- (_Bool)tryZoomAtTime:(CDStruct_1b6d18a9)arg1;
- (void)_zoomAtTrackedElement;
- (void)_zoomAtTime:(CDStruct_1b6d18a9)arg1;
- (void)_handleFirstPanEvent;
- (void)_handlePanningEvent;
- (void)_handleLiftEvent;
- (void)_handleTimerFireEvent;
- (void)_PXLivePhotoTrimScrubber_commonInit;
- (void)_updateSpecDependentUI;
- (double)_offsetForTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)timeAtPoint:(struct CGPoint)arg1;
- (CDStruct_1b6d18a9)_timeAtLocation:(struct CGPoint)arg1 forElement:(long long)arg2;
- (void)handleSetKeyTime:(CDStruct_1b6d18a9)arg1;
- (void)handleTapWithElement:(long long)arg1;
- (void)handleBeginTrackingAtLocation:(struct CGPoint)arg1;
- (CDStruct_1b6d18a9)_clampTimeToViewportIfZoomed:(CDStruct_1b6d18a9)arg1;
- (void)handleChangeTrackingAtLocation:(struct CGPoint)arg1 withVelocity:(struct CGPoint)arg2;
- (void)handleEndTracking:(_Bool)arg1;
- (void)_assetDidLoadValues;
- (void)_updateContentAspectRatio;
- (void)_updateKeyTimeSnappingControllers;
- (void)_updateStartTimeSnappingControllers;
- (void)_updateEndTimeSnappingControllers;
- (id)_snappingControllersForElement:(long long)arg1;
- (id)_snapTimesForElement:(long long)arg1;
- (void)_setPhotoLoupeHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_setTrimControlsHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_setPlayheadHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_presentControlsIfNeeded;
- (void)_trimHandleDidReachBounds;
- (struct CGRect)_disabledOverlayFrame;
- (void)_releaseAVObjects;
- (struct CGRect)backingAlignedRectForRect:(struct CGRect)arg1;

@end
