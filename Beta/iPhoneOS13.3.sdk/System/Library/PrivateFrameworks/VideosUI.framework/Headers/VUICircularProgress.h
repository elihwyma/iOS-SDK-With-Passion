/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIView.h>

@class CAShapeLayer, UIColor;

__attribute__((visibility("hidden")))
@interface VUICircularProgress : UIView

{
    _Bool _indeterminate;
    double _indeterminateWidth;
    UIColor *_progressFillColor;
    double _progress;
    double _centerSquareWidth;
    CAShapeLayer *_indeterminateLayer;
    CAShapeLayer *_centerLayer;
    CAShapeLayer *_progressLayer;
    CAShapeLayer *_progressBackgroundLayer;
    double _progressWidth;
}

@property (retain, nonatomic) CAShapeLayer *indeterminateLayer;
@property (retain, nonatomic) CAShapeLayer *centerLayer;
@property (retain, nonatomic) CAShapeLayer *progressLayer;
@property (retain, nonatomic) CAShapeLayer *progressBackgroundLayer;
@property (nonatomic) double progressWidth;
@property (nonatomic) double indeterminateWidth;
@property (nonatomic, getter=isIndeterminate) _Bool indeterminate;
@property (retain, nonatomic) UIColor *progressFillColor;
@property (nonatomic) double progress;
@property (nonatomic) double centerSquareWidth;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_startIndeterminateAnimation;
- (struct CGRect)_progressFrame;
- (id)_progressPath;
- (id)_indeterminatePath;
- (void)_configureProgress:(_Bool)arg1;
- (void)_addProgressLayer;
- (void)_addIndeterminateLayer;
- (void)_removeProgressLayer;
- (void)_removeIndeterminateLayer;

@end
