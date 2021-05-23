/*
 Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

#import <UIKit/UIView.h>

@interface MCDProgressBarView : UIView

{
    UIView *_overallBarView;
    UIView *_progressBarView;
    double _progress;
}

@property (retain, nonatomic) UIView *overallBarView;
@property (retain, nonatomic) UIView *progressBarView;
@property (nonatomic) double progress;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
