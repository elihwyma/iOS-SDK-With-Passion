/*
 Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

#import <UIKit/UIView.h>

@class MCDPlayModeButton, MCDRepeatButton, NSArray, UIStackView;

@interface MCDPlayModeControlView : UIView

{
    _Bool _fuseSubscriberLayout;
    _Bool _showsArtwork;
    MCDRepeatButton *_repeatButton;
    MCDPlayModeButton *_moreButton;
    MCDPlayModeButton *_shuffleButton;
    MCDPlayModeButton *_addToLibraryButton;
    MCDPlayModeButton *_playbackRateButton;
    UIStackView *_stackView;
    NSArray *_activeButtonLayoutConstraints;
}

@property (retain, nonatomic) NSArray *activeButtonLayoutConstraints;
@property (nonatomic, readonly) MCDRepeatButton *repeatButton;
@property (nonatomic, readonly) MCDPlayModeButton *moreButton;
@property (nonatomic, readonly) MCDPlayModeButton *shuffleButton;
@property (nonatomic, readonly) MCDPlayModeButton *addToLibraryButton;
@property (nonatomic, readonly) MCDPlayModeButton *playbackRateButton;
@property (nonatomic) _Bool fuseSubscriberLayout;
@property (nonatomic, readonly) UIStackView *stackView;
@property (nonatomic, readonly) double maximumButtonWidth;
@property (nonatomic) _Bool showsArtwork;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_updateButtonLayouts;
- (id)_visibleControlButtons;

@end
