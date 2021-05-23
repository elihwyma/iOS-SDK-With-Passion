/*
 Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
 */

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface HRElectrocardiogramSessionScreenView : UIView

{
    _Bool _isLargeDevice;
    UIImageView *_waveformView;
    UILabel *_countdownValueLabel;
    UILabel *_countdownUnitLabel;
}

@property (nonatomic, readonly) _Bool isLargeDevice;
@property (nonatomic, readonly) UIImageView *waveformView;
@property (nonatomic, readonly) UILabel *countdownValueLabel;
@property (nonatomic, readonly) UILabel *countdownUnitLabel;

- (void)_setUpUI;
- (id)initWithLargeDevice:(_Bool)arg1;

@end
