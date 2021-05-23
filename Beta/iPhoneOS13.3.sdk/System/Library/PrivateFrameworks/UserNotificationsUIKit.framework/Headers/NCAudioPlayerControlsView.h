/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

#import <UIKit/UIView.h>

@class NCAudioPlayerTimelineSlider, UIButton;

@protocol NCAudioPlayerControlsDelegate;

@interface NCAudioPlayerControlsView : UIView

{
    _Bool _enabled;
    _Bool _contentViewLoaded;
    _Bool _contentViewLayoutConstraintsLoaded;
    id <NCAudioPlayerControlsDelegate> _delegate;
    UIButton *_pauseButton;
    UIButton *_playButton;
    long long _state;
    NCAudioPlayerTimelineSlider *_timelineSlider;
    UIView *_contentView;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIButton *pauseButton;
@property (retain, nonatomic) UIButton *playButton;
@property (retain, nonatomic) NCAudioPlayerTimelineSlider *timelineSlider;
@property (nonatomic) _Bool contentViewLoaded;
@property (nonatomic) _Bool contentViewLayoutConstraintsLoaded;
@property (weak, nonatomic) id <NCAudioPlayerControlsDelegate> delegate;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (nonatomic) long long state;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)loadContentView;
- (void)setState:(long long)arg1 animated:(_Bool)arg2;
- (void)transitionToState:(long long)arg1 animated:(_Bool)arg2;
- (void)loadContentViewLayoutConstraints;
- (void)pauseButtonTapped:(id)arg1 withEvent:(id)arg2;
- (void)playButtonTapped:(id)arg1 withEvent:(id)arg2;
- (void)stopButtonTapped:(id)arg1 withEvent:(id)arg2;

@end
