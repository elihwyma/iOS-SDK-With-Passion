/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIView.h>

@class NSMutableArray, UIImageView, UILabel, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface CKMessageEntryWaveformView : UIView

{
    double _duration;
    NSMutableArray *_powerLevels;
    UIImageView *_waveformImageView;
    unsigned long long _maxPowerLevelsCount;
    UIVisualEffectView *_blurView;
    UIImageView *_balloonImageView;
    UILabel *_timeLabel;
    double _minTimeLabelWidth;
}

@property (nonatomic) unsigned long long maxPowerLevelsCount;
@property (retain, nonatomic) NSMutableArray *powerLevels;
@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (retain, nonatomic) UIImageView *balloonImageView;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UIImageView *waveformImageView;
@property (nonatomic) double minTimeLabelWidth;
@property (nonatomic) double duration;

+ (id)waveformCurveTransform;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)clearPowerLevels;
- (void)appendPowerLevel:(double)arg1;
- (void)updateWaveform;

@end
