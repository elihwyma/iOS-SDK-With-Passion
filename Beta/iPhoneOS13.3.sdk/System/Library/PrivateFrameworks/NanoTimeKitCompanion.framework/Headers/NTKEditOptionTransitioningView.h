/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

@class NTKEditOption, UIImageView;

@protocol NTKEditOptionTransitioningViewDelegate;

@interface NTKEditOptionTransitioningView : UIView

{
    UIView *_transitionContainer;
    UIView *_transitionDimmingView;
    double _breathScaleModifier;
    double _rubberBandScaleModifier;
    UIImageView *_toTransitionImageView;
    UIImageView *_fromTransitionImageView;
    id <NTKEditOptionTransitioningViewDelegate> _delegate;
    NTKEditOption *_toEditOption;
    NTKEditOption *_fromEditOption;
}

@property (retain, nonatomic) NTKEditOption *toEditOption;
@property (retain, nonatomic) NTKEditOption *fromEditOption;
@property (weak, nonatomic) id <NTKEditOptionTransitioningViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)didAddSubview:(id)arg1;
- (void)setOption:(id)arg1;
- (void)_updateUnifiedScaleTransform;
- (void)_resetTransitionImageView:(id)arg1;
- (void)setBreatheFraction:(double)arg1;
- (void)setRubberBandingFraction:(double)arg1;
- (void)setDimmingAlpha:(double)arg1;
- (void)setTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3;

@end
