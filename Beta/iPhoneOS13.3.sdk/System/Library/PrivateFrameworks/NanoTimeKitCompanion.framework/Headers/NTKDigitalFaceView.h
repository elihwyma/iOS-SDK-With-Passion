/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKFaceView.h>

@class NTKDigitalTimeLabel;

@interface NTKDigitalFaceView : NTKFaceView

{
    long long _viewMode;
}

@property (nonatomic, readonly) NTKDigitalTimeLabel *timeView;
@property (nonatomic) long long viewMode;

- (void)layoutSubviews;
- (void)_loadSnapshotContentViews;
- (void)_unloadSnapshotContentViews;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)setViewMode:(long long)arg1 updateTimeViewStyle:(_Bool)arg2;
- (id)_digitalTimeLabelStyleFromViewMode:(long long)arg1 faceBounds:(struct CGRect)arg2;
- (unsigned long long)_timeLabelOptions;
- (void)invalidateDigitalTimeLabelStyle;
- (void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3;
- (void)_cleanupAfterZoom;
- (_Bool)_timeLabelUsesLegibility;
- (void)_createTimeViewIfNecessary;

@end
