/*
 Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSString, UIButton, UIImage;

@interface MCDTransportControlView : UIView

{
    _Bool _progressActive;
    UIButton *_leftButton;
    UIButton *_playPauseButton;
    UIButton *_fastForwardButton;
    NSString *_playButtonImageName;
    NSString *_pauseButtonImageName;
    UIImage *_defaultLeftButtonImage;
    UIImage *_defaultFastForwardButtonImage;
    UIImage *_playImage;
    UIImage *_pauseImage;
    NSLayoutConstraint *_containerHeightConstraint;
    struct CGSize _buttonSize;
}

@property (retain, nonatomic) UIImage *playImage;
@property (retain, nonatomic) UIImage *pauseImage;
@property (retain, nonatomic) UIImage *defaultLeftButtonImage;
@property (retain, nonatomic) UIImage *defaultFastForwardButtonImage;
@property (retain, nonatomic) NSLayoutConstraint *containerHeightConstraint;
@property (nonatomic) struct CGSize buttonSize;
@property (nonatomic, readonly) UIButton *leftButton;
@property (nonatomic, readonly) UIButton *playPauseButton;
@property (nonatomic, readonly) UIButton *fastForwardButton;
@property (nonatomic) _Bool progressActive;
@property (retain, nonatomic) NSString *playButtonImageName;
@property (retain, nonatomic) NSString *pauseButtonImageName;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateConstraints;
- (void)setupConstraints;
- (void)_updateProgressActive;
- (id)_defaultImageForIdentifier:(id)arg1;

@end
