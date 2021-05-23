/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UIView.h>

@class CAGradientLayer, _TVStackBackdropView;

@interface _TVStackBackdropMaskingView : UIView

{
    CAGradientLayer *_gradientLayer;
    _TVStackBackdropView *_backdropView;
    double _gradientScale;
    double _gradientStop;
}

@property (retain, nonatomic) _TVStackBackdropView *backdropView;
@property (nonatomic) double gradientScale;
@property (nonatomic) double gradientStop;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
