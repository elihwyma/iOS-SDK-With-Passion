/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIView.h>

@class HKElectrocardiogram, HKElectrocardiogramGridView, HKElectrocardiogramWaveformView, NSArray, UIColor;

@interface HKElectrocardiogramChartView : UIView

{
    _Bool _edgeMaskEnabled;
    _Bool _allowsScrolling;
    HKElectrocardiogramGridView *_gridView;
    HKElectrocardiogramWaveformView *_waveformView;
    UIView *_waveformContainerView;
    HKElectrocardiogram *_sample;
    struct CGSize _lastSize;
}

@property (retain, nonatomic) HKElectrocardiogramGridView *gridView;
@property (retain, nonatomic) HKElectrocardiogramWaveformView *waveformView;
@property (retain, nonatomic) UIView *waveformContainerView;
@property (retain, nonatomic) HKElectrocardiogram *sample;
@property (nonatomic) _Bool allowsScrolling;
@property (nonatomic) struct CGSize lastSize;
@property (nonatomic, readonly) struct CGSize gridSize;
@property (copy, nonatomic, readonly) NSArray *gridOptions;
@property (nonatomic, readonly) double pointsPerSecond;
@property (nonatomic, readonly) double pointsPerMillivolt;
@property (nonatomic) double lineWidth;
@property (retain, nonatomic) UIColor *lineColor;
@property (nonatomic, getter=isDisplayingControlSignal) _Bool displayControlSignal;
@property (nonatomic, readonly) double controlSignalDuration;
@property (nonatomic, getter=isEdgeMaskEnabled) _Bool edgeMaskEnabled;

+ (id)defaultGridOptions;
+ (id)printedGridOptions;

- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)_setUpUI;
- (id)initWithGridSize:(struct CGSize)arg1 gridOptions:(id)arg2;
- (void)_updateChartForSizeChange;
- (void)setWaveformPaths:(id)arg1;
- (id)initWithGridSize:(struct CGSize)arg1;
- (void)setWaveformPath:(id)arg1;
- (void)displayElectrocardiogram:(id)arg1 allowsScrolling:(_Bool)arg2;

@end
