/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UIView.h>

@interface PMSpinnerPlayPauseOverlay : UIView

{
    unsigned long long _displayState;
    UIView *_spinnerView;
    UIView *_playPauseButton;
}

@property (retain, nonatomic) UIView *spinnerView;
@property (retain, nonatomic) UIView *playPauseButton;
@property (nonatomic) unsigned long long displayState;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setup;
- (void)setShowAsPause:(_Bool)arg1;

@end
