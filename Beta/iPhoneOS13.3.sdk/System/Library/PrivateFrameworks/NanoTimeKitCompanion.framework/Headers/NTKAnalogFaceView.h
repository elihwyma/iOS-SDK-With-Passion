/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKFaceView.h>

@class NTKAnalogHandsView, UIView;

@interface NTKAnalogFaceView : NTKFaceView

{
    _Bool __contentViewsOpaque;
    _Bool __timeViewBehindContentView;
    UIView *_dialComplicationContainerView;
    UIView *_zoomingClippingView;
    UIView *_borrowedCircleView;
    UIView *_borrowedHandsView;
    double _maxZoomingIconDiameter;
}

@property (retain, nonatomic) UIView *zoomingClippingView;
@property (weak, nonatomic) UIView *borrowedCircleView;
@property (weak, nonatomic) UIView *borrowedHandsView;
@property (nonatomic) double maxZoomingIconDiameter;
@property (nonatomic, getter=_contentViewsAreOpaque, setter=_setContentViewsOpaque:) _Bool _contentViewsOpaque;
@property (nonatomic, setter=_setTimeViewBehindContentView:) _Bool _timeViewBehindContentView;
@property (nonatomic, readonly) UIView *dialComplicationContainerView;
@property (retain, nonatomic) NTKAnalogHandsView *timeView;

+ (Class)_timeViewClass;

- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3;
- (void)_loadSnapshotContentViews;
- (void)_unloadSnapshotContentViews;
- (void)_configureForEditMode:(long long)arg1;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_prepareForEditing;
- (void)_cleanupAfterEditing;
- (_Bool)_needsForegroundContainerView;
- (_Bool)_supportsTimeScrubbing;
- (_Bool)_usesCustomZoom;
- (void)_applyDataMode;
- (void)_applyShowContentForUnadornedSnapshot;
- (void)_startScrubbingAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_endScrubbingAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3;
- (void)_setZoomFraction:(double)arg1 iconDiameter:(double)arg2;
- (void)_cleanupAfterZoom;
- (void)_scrubToDate:(id)arg1 animated:(_Bool)arg2;
- (_Bool)_canStartTimeScrubbing;
- (void)_configureTimeView:(id)arg1;
- (_Bool)_wantsConstantSpeedZoom;
- (void)applyToForegroundZoomFraction:(double)arg1 faceScale:(double)arg2;
- (struct CGPoint)_contentCenterOffset;
- (double)_timeTravelCaptionLabelMaxWidth;
- (void)_updateDateComplicationPositionIfNecessary;
- (struct CGPoint)_dateComplicationCenterOffset;
- (struct CGPoint)_dateComplicationRightAlignment;
- (_Bool)_isComplicationSlotInsideDial:(id)arg1;
- (id)_complicationContainerViewForSlot:(id)arg1;
- (_Bool)_isAnalog;
- (void)_createTimeViewIfNecessary;
- (void)_handleLocaleDidChange;
- (id)_timeTravelCaptionFontSizeOverrides;
- (void)_loadContentToReplaceUnadornedSnapshot;
- (_Bool)_timeViewBehindContentForEditMode:(long long)arg1;
- (_Bool)_shouldRasterizeForegroundContainerViewForEditMode:(long long)arg1;
- (long long)_backgroundedTimeViewEditModes;

@end
