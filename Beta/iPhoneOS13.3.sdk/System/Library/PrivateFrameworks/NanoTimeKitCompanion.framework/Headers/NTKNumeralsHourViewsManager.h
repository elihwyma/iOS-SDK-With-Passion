/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class CLKDevice, NSArray;

@interface NTKNumeralsHourViewsManager : NSObject

{
    CLKDevice *_device;
    NSArray *_hourViews;
    long long _visibleHour;
    long long _visibleComplicationSlot;
    _Bool _areComplicationsOff;
    _Bool _adjustingForStatusIndicator;
    _Bool _hasUpperComplication;
}

- (void)configureForEditMode:(long long)arg1;
- (void)applyFaceColorFromFaceConfiguration:(id)arg1;
- (void)applyTransitionFraction:(double)arg1 fromFaceColor:(unsigned long long)arg2 toFaceColor:(unsigned long long)arg3 faceConfiguration:(id)arg4;
- (void)setAdjustsForStatusIndicator:(_Bool)arg1 animated:(_Bool)arg2;
- (void)applyTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3 faceConfiguration:(id)arg4;
- (void)removeHourViews;
- (id)initWithStyleFromFaceConfiguration:(id)arg1 forDevice:(id)arg2;
- (void)updateVisibleHour:(long long)arg1 targetUtilitySlot:(long long)arg2 faceConfiguration:(id)arg3 animationProgress:(double)arg4 forEditMode:(long long)arg5;
- (void)addHourViewsToSuperview:(id)arg1;
- (void)applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2;
- (void)applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2;
- (_Bool)needHourAnimationForChangeToHour:(long long)arg1 toFaceConfiguration:(id)arg2;
- (id)_visibleHourView;
- (id)_hourViewForHour:(long long)arg1 loadIfNeeded:(_Bool)arg2;
- (void)_update12AdjustmentForStatusIndicator;
- (double)_hourAlphaForEditMode:(long long)arg1;
- (struct CGPoint)_currentHourViewPlacementForEditMode:(long long)arg1 faceConfiguration:(id)arg2;

@end
