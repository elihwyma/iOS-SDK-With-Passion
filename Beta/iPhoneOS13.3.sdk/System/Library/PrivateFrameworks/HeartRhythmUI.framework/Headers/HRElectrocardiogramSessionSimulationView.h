/*
 Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
 */

#import <UIKit/UIView.h>

@class HRElectrocardiogramSessionScreenView;

@interface HRElectrocardiogramSessionSimulationView : UIView

{
    _Bool _isLargeDevice;
    HRElectrocardiogramSessionScreenView *_screenView;
}

@property (nonatomic, readonly) HRElectrocardiogramSessionScreenView *screenView;
@property (nonatomic) double cornerRadius;
@property (nonatomic, readonly) _Bool isLargeDevice;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setTimeRemaining:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1 isLargeDevice:(_Bool)arg2;
- (void)_setUpUI;

@end
