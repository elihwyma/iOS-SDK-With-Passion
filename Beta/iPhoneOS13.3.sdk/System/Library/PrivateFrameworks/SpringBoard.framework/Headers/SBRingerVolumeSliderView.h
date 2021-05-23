/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIView.h>

@interface SBRingerVolumeSliderView : UIView

{
    double _value;
    UIView *_backgroundView;
    UIView *_fillView;
}

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *fillView;
@property (nonatomic) double value;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
