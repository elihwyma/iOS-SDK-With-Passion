/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIView.h>

@class NSString;

@interface SBCoverSheetBlurView : UIView

{
    double _blurRadius;
    double _weighting;
    CDUnknownBlockType _scaleAdjustment;
    CDUnknownBlockType _alphaAdjustment;
    UIView *_reduceTransparencyView;
    long long _variantToTrack;
}

@property (copy, nonatomic) CDUnknownBlockType scaleAdjustment;
@property (copy, nonatomic) CDUnknownBlockType alphaAdjustment;
@property (retain, nonatomic) UIView *reduceTransparencyView;
@property (nonatomic) long long variantToTrack;
@property (nonatomic) double blurRadius;
@property (nonatomic) double weighting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)layerClass;

- (void)dealloc;
- (void)layoutSubviews;
- (id)backdropLayer;
- (void)_createFilters;
- (void)_reduceTransparencyEnabledStateDidChange:(id)arg1;
- (void)wallpaperDidChangeForVariant:(long long)arg1;
- (void)setWeighting:(double)arg1 forPresentationValue:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1 scaleAdjustment:(CDUnknownBlockType)arg2 alphaAdjustment:(CDUnknownBlockType)arg3;
- (void)_configureForCurrentReduceTransparencySetting;
- (void)_updateForBlurRadius:(double)arg1 weighting:(double)arg2 forPresentationValue:(_Bool)arg3;
- (void)_createReduceTransparencyView;
- (void)_removeFilters;
- (void)_removeReduceTransparencyView;
- (id)_averageWallpaperColor;

@end
