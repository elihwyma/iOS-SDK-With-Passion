/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIViewController.h>

@class AVPlayerItem, NSLayoutConstraint, NSNumber, NSString, PICompositionController, PLEditSource, PLPhotoEditRenderer, PLSlalomRegionEditor, PULivePhotoKeyFrameSelectionViewController, PUTimeCodeOverlayView, PXLivePhotoTrimScrubber, PXLivePhotoTrimScrubberSnapStripController, PXLivePhotoTrimScrubberSpec, UIButton, UIImage, UILabel, UIView;

@protocol PUTrimToolControllerDelegate, PXTrimToolPlayerWrapper;

__attribute__((visibility("hidden")))
@interface PUTrimToolController : UIViewController

{
    PXLivePhotoTrimScrubber *_trimScrubber;
    PLSlalomRegionEditor *_slomoView;
    _Bool _needsUpdateRenderForVisualChanges;
    PUTimeCodeOverlayView *_timeCodeOverlayView;
    NSLayoutConstraint *_timeCodeHorizontalConstraint;
    PXLivePhotoTrimScrubberSpec *_spec;
    _Bool _disabled;
    _Bool _slomoEnabled;
    _Bool _slomoDraggingStartHandle;
    _Bool _playButtonEnabled;
    UIButton *_playPauseButton;
    id <PUTrimToolControllerDelegate> _delegate;
    id <PXTrimToolPlayerWrapper> _playerWrapper;
    PICompositionController *_compositionController;
    unsigned long long _state;
    PLEditSource *_editSource;
    PLEditSource *_overcaptureEditSource;
    PULivePhotoKeyFrameSelectionViewController *_livePhotoKeyFramePicker;
    PLPhotoEditRenderer *__renderer;
    AVPlayerItem *_currentVideoPlayerItem;
    PXLivePhotoTrimScrubberSnapStripController *_snapStripController;
    unsigned long long _playheadStyle;
    unsigned long long _internalState;
    NSNumber *_slomoTimeForPlayheadUpdate;
    UILabel *_debugTimeCodeLabel;
    UILabel *_debugPlayerTimeLabel;
    UILabel *_debugOriginalTimeLabel;
    UILabel *_debugTrimToolStateLabel;
    UILabel *_debugTrimToolPlayheadStyleLabel;
    UIView *_debugStartRectView;
    UIView *_debugEndRectView;
    UIView *_debugStartOffsetView;
    UIView *_debugEndOffsetView;
    CDStruct_1b6d18a9 _unadjustedStillImageTime;
    CDStruct_1b6d18a9 _originalStartTime;
    CDStruct_1b6d18a9 _originalEndTime;
    CDStruct_1b6d18a9 _suggestedKeyFrameTime;
    CDStruct_1b6d18a9 _cachedFrameDuration;
    CDStruct_1b6d18a9 _unadjustedAssetDuration;
    CDStruct_1b6d18a9 _debugPlayerTime;
}

@property (nonatomic, readonly) CDStruct_1b6d18a9 currentStillFrameTime;
@property (nonatomic) CDStruct_1b6d18a9 adjustedStillFrameTime;
@property (retain, nonatomic) PLEditSource *editSource;
@property (retain, nonatomic) PLEditSource *overcaptureEditSource;
@property (weak, nonatomic) PULivePhotoKeyFrameSelectionViewController *livePhotoKeyFramePicker;
@property (retain, nonatomic, setter=_setRenderer:) PLPhotoEditRenderer *_renderer;
@property (retain, nonatomic) AVPlayerItem *currentVideoPlayerItem;
@property (nonatomic) CDStruct_1b6d18a9 cachedFrameDuration;
@property (retain, nonatomic) PXLivePhotoTrimScrubberSnapStripController *snapStripController;
@property (nonatomic) CDStruct_1b6d18a9 unadjustedAssetDuration;
@property (nonatomic) unsigned long long playheadStyle;
@property (nonatomic) unsigned long long internalState;
@property (nonatomic) _Bool slomoDraggingStartHandle;
@property (nonatomic, readonly) _Bool playButtonEnabled;
@property (retain, nonatomic) NSNumber *slomoTimeForPlayheadUpdate;
@property (retain, nonatomic) UILabel *debugTimeCodeLabel;
@property (nonatomic) CDStruct_1b6d18a9 debugPlayerTime;
@property (retain, nonatomic) UILabel *debugPlayerTimeLabel;
@property (retain, nonatomic) UILabel *debugOriginalTimeLabel;
@property (retain, nonatomic) UILabel *debugTrimToolStateLabel;
@property (retain, nonatomic) UILabel *debugTrimToolPlayheadStyleLabel;
@property (retain, nonatomic) UIView *debugStartRectView;
@property (retain, nonatomic) UIView *debugEndRectView;
@property (retain, nonatomic) UIView *debugStartOffsetView;
@property (retain, nonatomic) UIView *debugEndOffsetView;
@property (weak, nonatomic) id <PUTrimToolControllerDelegate> delegate;
@property (nonatomic, readonly) id <PXTrimToolPlayerWrapper> playerWrapper;
@property (retain, nonatomic) PICompositionController *compositionController;
@property (nonatomic) CDStruct_1b6d18a9 unadjustedStillImageTime;
@property (nonatomic) CDStruct_1b6d18a9 originalStartTime;
@property (nonatomic) CDStruct_1b6d18a9 originalEndTime;
@property (nonatomic) CDStruct_1b6d18a9 suggestedKeyFrameTime;
@property (nonatomic) CDStruct_1b6d18a9 playheadTime;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (nonatomic) _Bool disabled;
@property (nonatomic, readonly) unsigned long long state;
@property (nonatomic, readonly) UIButton *playPauseButton;
@property (nonatomic, readonly, getter=isSlomoEnabled) _Bool slomoEnabled;
@property (nonatomic, readonly) double scrubberHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)pause;
- (void)_setState:(unsigned long long)arg1;
- (void)play;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)viewDidLayoutSubviews;
- (_Bool)popoverPresentationControllerShouldDismissPopover:(id)arg1;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (CDStruct_1b6d18a9)_frameDuration;
- (void)slalomRegionEditorDidBeginEditing:(id)arg1 withStartHandle:(_Bool)arg2;
- (void)slalomRegionEditorDidEndEditing:(id)arg1;
- (void)slalomRegionEditorStartValueChanged:(id)arg1;
- (void)slalomRegionEditorEndValueChanged:(id)arg1;
- (_Bool)slalomRegionEditorRequestForceZoom:(id)arg1;
- (void)slalomRegionEditorRequestForceUnzoom:(id)arg1;
- (void)_updatePlayerItem;
- (void)trimScrubberAssetDurationDidChange:(id)arg1;
- (void)trimScrubber:(id)arg1 didEndInteractivelyEditingElement:(long long)arg2 successful:(_Bool)arg3;
- (void)trimScrubber:(id)arg1 didBeginInteractivelyEditingElement:(long long)arg2;
- (_Bool)trimScrubber:(id)arg1 canBeginInteractivelyEditingElement:(long long)arg2;
- (void)trimScrubber:(id)arg1 didTapElement:(long long)arg2;
- (void)trimScrubber:(id)arg1 didZoomToMinimumValue:(double)arg2 maximumValue:(double)arg3;
- (void)trimScrubberDidUnzoom:(id)arg1;
- (void)trimScrubber:(id)arg1 didChangeTimeForElement:(long long)arg2;
- (void)trimScrubber:(id)arg1 debugEndOffset:(struct CGRect)arg2;
- (void)trimScrubber:(id)arg1 debugStartOffset:(struct CGRect)arg2;
- (void)trimScrubber:(id)arg1 debugEndRect:(struct CGRect)arg2;
- (void)trimScrubber:(id)arg1 debugStartRect:(struct CGRect)arg2;
- (void)trimScrubberDidLayoutSubviews:(id)arg1;
- (void)trimScrubber:(id)arg1 didChangeLoupeRect:(struct CGRect)arg2;
- (void)playerStatusChangedForPlayerWrapper:(id)arg1;
- (void)compositonDidUpdateForPlayerWrapper:(id)arg1;
- (void)playerWrapper:(id)arg1 timeChanged:(CDStruct_1b6d18a9)arg2;
- (void)_createRendererIfNeeded;
- (id)currentEditSource;
- (void)userDidRequestToMakeKeyPhoto:(id)arg1;
- (id)initWithPlayerWrapper:(id)arg1;
- (id)initWithPlayerWrapper:(id)arg1 playButtonEnabled:(_Bool)arg2 slomoEnabled:(_Bool)arg3;
- (void)livePhotoRenderDidChange:(_Bool)arg1;
- (id)_playPauseButtonIfLoaded;
- (void)_seekToTimeForElement:(long long)arg1 exact:(_Bool)arg2;
- (void)releaseAVObjects;
- (void)setEditSource:(id)arg1 overcaptureEditSource:(id)arg2;
- (_Bool)_allowsKeyFrameCreation;
- (void)_showKeyFrameSelection;
- (void)_updateDebugTimeCodeLabel;
- (void)_updateDebugPlayerTimeLabel;
- (void)_updateDebugTrimToolStateLabel;
- (void)_updateDebugPlayheadStyleLabel;
- (void)_updatePublicState;
- (void)_updatePlayheadStyle;
- (void)_updatePlayerWrapperTimeObserver;
- (void)_updateScrubberPresentedPlayhead:(_Bool)arg1;
- (void)_updateTimeCodeOverlay;
- (void)_updateCompositionController;
- (void)_updatePlayerWrapperTrim;
- (void)_updateScrubberContents;
- (void)_updateScrubberTimes;
- (void)_updateSnappingDots;
- (id)_currentVideoAsset;
- (void)_resetScrubberToStillPhotoFrame;
- (struct CGRect)_presentationRectFromLoupeRect;
- (void)_livePhotoKeyFramePickerDidDismiss:(id)arg1;
- (void)_updatePlayPauseButton;
- (void)_handlePlayPauseButton:(id)arg1;
- (CDStruct_1b6d18a9)_currentPlayerScaledTimeFromOriginalTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)_originalTimeFromCurrentPlayerScaledTime:(CDStruct_1b6d18a9)arg1;
- (id)_slomoMapperForCurrentConfiguration;

@end
