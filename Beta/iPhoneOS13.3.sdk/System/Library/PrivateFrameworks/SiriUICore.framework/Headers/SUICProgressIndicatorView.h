/*
 Image: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
 */

#import <UIKit/UIView.h>

@class UIImageView, _SUICCheckGlyphLayer, _SUICProgressRingLayer, _SUICRingLayer;

@interface SUICProgressIndicatorView : UIView

{
    _SUICRingLayer *_shadowRingLayer;
    _SUICProgressRingLayer *_progressRingLayer;
    _SUICCheckGlyphLayer *_checkGlyphLayer;
    UIImageView *_actionArrowImageView;
}

@property (nonatomic, getter=isArrowVisible) _Bool arrowVisible;
@property (nonatomic) double progressValue;
@property (nonatomic, getter=isSpinning) _Bool spinning;
@property (nonatomic, getter=isCheckmarkVisible) _Bool checkmarkVisible;
@property (nonatomic, getter=isDarkened) _Bool darkened;

- (void)setShadowColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)setRingColor:(id)arg1;
- (void)setProgressValue:(double)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setArrowVisible:(_Bool)arg1 delay:(double)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setDarkened:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setCheckmarkVisible:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;

@end
