/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIView.h>

@class CAMExposureBiasSlider, CAMFocusIndicatorRectView;

@protocol CAMFocusIndicatorViewDelegate;

@interface CAMFocusIndicatorView : UIView

{
    _Bool _inactive;
    _Bool _showExposureBias;
    float _exposureBiasMaximum;
    float _exposureBiasMinimum;
    float _exposureBiasValue;
    int __exposureBiasSide;
    long long _style;
    id <CAMFocusIndicatorViewDelegate> _delegate;
    CAMFocusIndicatorRectView *__rectView;
    CAMExposureBiasSlider *__exposureBiasSlider;
}

@property (nonatomic, readonly) CAMFocusIndicatorRectView *_rectView;
@property (nonatomic, readonly) CAMExposureBiasSlider *_exposureBiasSlider;
@property (nonatomic) int _exposureBiasSide;
@property (nonatomic) long long style;
@property (weak, nonatomic) id <CAMFocusIndicatorViewDelegate> delegate;
@property (nonatomic, getter=isInactive) _Bool inactive;
@property (nonatomic, getter=isPulsing) _Bool pulsing;
@property (nonatomic) _Bool showExposureBias;
@property (nonatomic) float exposureBiasMaximum;
@property (nonatomic) float exposureBiasMinimum;
@property (nonatomic) float exposureBiasValue;

- (void)setCenter:(struct CGPoint)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1;
- (void)_updateTintColor;
- (void)setStyle:(long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)startScalingWithExpansionWidth:(double)arg1 duration:(double)arg2 repeatCount:(unsigned long long)arg3;
- (void)_createRectViewAndUpdateBounds;
- (void)_commonCAMFocusIndicatorViewInitialization;
- (void)_layoutRectView:(id)arg1;
- (void)_layoutExposureBiasSlider;
- (void)_createExposureBiasSlider;
- (void)setExposureBiasSide:(int)arg1 animated:(_Bool)arg2;

@end
