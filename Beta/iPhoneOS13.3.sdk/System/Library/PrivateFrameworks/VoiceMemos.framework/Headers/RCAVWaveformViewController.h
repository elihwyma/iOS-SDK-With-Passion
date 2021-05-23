/*
 Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

#import <UIKit/UIViewController.h>

@class NSString, RCHitTestForwardingView, RCLayoutMetrics, RCWaveformDataSource, RCWaveformViewController;

@protocol RCAVWaveformViewControllerDelegate, RCTimeController;

@interface RCAVWaveformViewController : UIViewController

{
    double _defaultVisibleDuration;
    long long _batchUpdatingDisplayableTimesCount;
    _Bool _needsUpdateDisplayableTime;
    _Bool _showingSelectionOverlayEnabled;
    _Bool _didJumpTime;
    id <RCTimeController> _activeTimeController;
    RCHitTestForwardingView *_leftForwardingView;
    RCHitTestForwardingView *_rightForwardingView;
    _Bool _currentTimeTracksCapturedEndPoint;
    _Bool _autocenterCurrentTimeIndicatorAlways;
    _Bool _clipsTimeMarkersToDuration;
    _Bool _userInteractionEnabled;
    _Bool _selectionOverlayVisible;
    _Bool _isEditMode;
    _Bool _isOverview;
    RCWaveformDataSource *_waveformDataSource;
    id <RCAVWaveformViewControllerDelegate> _delegate;
    RCWaveformViewController *_waveformViewController;
    double _nextPreviewStartTime;
    double _currentTime;
    double _duration;
    RCLayoutMetrics *_layoutMetrics;
    double _maximumSelectionDuration;
    CDStruct_73a5d3ca _highlightTimeRange;
}

@property (nonatomic) double duration;
@property (nonatomic) _Bool isEditMode;
@property (nonatomic) _Bool isOverview;
@property (retain, nonatomic) RCWaveformDataSource *waveformDataSource;
@property (weak, nonatomic) id <RCAVWaveformViewControllerDelegate> delegate;
@property (retain, nonatomic) RCWaveformViewController *waveformViewController;
@property (retain, nonatomic) id <RCTimeController> activeTimeController;
@property (nonatomic, readonly) double nextPreviewStartTime;
@property (nonatomic, readonly) CDStruct_73a5d3ca nextPreviewTimeRange;
@property (nonatomic) CDStruct_73a5d3ca visibleTimeRange;
@property (nonatomic) CDStruct_73a5d3ca highlightTimeRange;
@property (nonatomic) double currentTime;
@property (nonatomic) _Bool currentTimeTracksCapturedEndPoint;
@property (nonatomic, readonly) double waveformBottomLineInset;
@property (nonatomic, readonly) double currentTimeIndicatorCoordinate;
@property (retain, nonatomic) RCLayoutMetrics *layoutMetrics;
@property (nonatomic) _Bool autocenterCurrentTimeIndicatorAlways;
@property (nonatomic) _Bool clipsTimeMarkersToDuration;
@property (nonatomic, getter=isUserInteractionEnabled) _Bool userInteractionEnabled;
@property (nonatomic, readonly, getter=isSelectionOverlayVisible) _Bool selectionOverlayVisible;
@property (nonatomic, readonly) CDStruct_73a5d3ca selectedTimeRange;
@property (nonatomic) double maximumSelectionDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)_selectionOverlay;
- (void)_setWaveformDataSource:(id)arg1 initialTime:(double)arg2;
- (struct CGRect)annotatedWaveformRectForLayoutBounds:(struct CGRect)arg1;
- (void)_updateCurrentTimeForCapturedInputAtTime:(double)arg1;
- (void)_updateDisplayableTimesWithBlock:(CDUnknownBlockType)arg1;
- (void)_updateInterfaceForTimeControllerState:(long long)arg1;
- (void)_didUpdateDisplayableTime;
- (struct CGRect)waveformRectForLayoutBounds:(struct CGRect)arg1;
- (unsigned long long)_currentTimeDisplayOptionsIgnoringSelectionOverlayState:(_Bool)arg1;
- (unsigned long long)_currentTimeDisplayOptions;
- (void)_beginShowingSelectionOverlayAndEnableInsertMode:(_Bool)arg1;
- (void)_endShowingSelectionOverlayWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setSelectedTimeRange:(CDStruct_73a5d3ca)arg1 animationDuration:(double)arg2;
- (void)_setSelectionOverlayEnabled:(_Bool)arg1;
- (void)resetSelectedTimeRangeToFullDuration;
- (void)waveformViewController:(id)arg1 didScrubToTime:(double)arg2 finished:(_Bool)arg3;
- (void)waveformViewControllerWillBeginEditingSelectedTimeRange:(id)arg1;
- (void)waveformViewControllerDidEndEditingSelectedTimeRange:(id)arg1;
- (void)waveformViewController:(id)arg1 didChangeToSelectedTimeRange:(CDStruct_73a5d3ca)arg2;
- (void)timeController:(id)arg1 didChangeRate:(float)arg2;
- (void)timeController:(id)arg1 didChangeState:(long long)arg2;
- (void)timeController:(id)arg1 didChangeCurrentTime:(double)arg2;
- (void)timeController:(id)arg1 didChangeCurrentTime:(double)arg2 didJumpTime:(_Bool)arg3;
- (void)timeController:(id)arg1 didChangeCurrentTime:(double)arg2 didChangeDuration:(double)arg3;
- (id)initWithWaveformDataSource:(id)arg1 isOverview:(_Bool)arg2 isLockScreen:(_Bool)arg3 delegate:(id)arg4;
- (void)reloadWaveformDataSource:(id)arg1 withActiveTimeController:(id)arg2;
- (void)reloadWaveformDataSource:(id)arg1 initialTime:(double)arg2;
- (CDStruct_73a5d3ca)setHighlightTimeRange;
- (void)showSelectionOverlayAndEnableInsertMode:(_Bool)arg1;
- (void)hidSelectionOverlayWithCompletionBlock:(CDUnknownBlockType)arg1;

@end
