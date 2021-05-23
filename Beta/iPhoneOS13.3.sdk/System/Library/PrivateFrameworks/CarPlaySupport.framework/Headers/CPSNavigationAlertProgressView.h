/*
 Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

#import <UIKit/UIView.h>

@interface CPSNavigationAlertProgressView : UIView

{
    _Bool _hasStartedAnimating;
    double _duration;
    UIView *_progressView;
}

@property (nonatomic) double duration;
@property (retain, nonatomic) UIView *progressView;
@property (nonatomic) _Bool hasStartedAnimating;

- (void)startAnimating;
- (id)initWithFrame:(struct CGRect)arg1 duration:(double)arg2;

@end
