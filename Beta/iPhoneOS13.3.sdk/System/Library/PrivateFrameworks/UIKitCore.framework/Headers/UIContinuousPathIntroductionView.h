/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIKBTutorialModalDisplay.h>

@class AVPlayerLayer, AVPlayerLooper, AVQueuePlayer, NSArray, NSLayoutConstraint, UIButton, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface UIContinuousPathIntroductionView : UIKBTutorialModalDisplay

{
    struct CGSize _videoSize;
    double _textMargin;
    double _paddingAdjust;
    AVPlayerLooper *_playerLooper;
    AVQueuePlayer *_player;
    UIView *_textVideoContainer;
    UILabel *_landscapeTextBody;
    UIView *_keyboardView;
    UIButton *_landscapeButton;
    NSArray *_portraitConstraints;
    NSArray *_landscapeConstraints;
    AVPlayerLayer *_videoLayer;
    NSLayoutConstraint *_videoWidth;
    NSLayoutConstraint *_videoHeight;
}

@property (retain, nonatomic) UIView *textVideoContainer;
@property (retain, nonatomic) UILabel *landscapeTextBody;
@property (retain, nonatomic) UIView *keyboardView;
@property (retain, nonatomic) UIButton *landscapeButton;
@property (retain, nonatomic) NSArray *portraitConstraints;
@property (retain, nonatomic) NSArray *landscapeConstraints;
@property (retain, nonatomic) AVPlayerLayer *videoLayer;
@property (retain, nonatomic) NSLayoutConstraint *videoWidth;
@property (retain, nonatomic) NSLayoutConstraint *videoHeight;

- (id)initWithKeyboardAppearance:(long long)arg1;
- (void)setupConstraintData;
- (void)updateVideoLayerWithNewVideo:(_Bool)arg1;
- (void)extraButtonTapAction;
- (id)_introductionMovieAssetURL;
- (id)mediaContents;
- (void)traitCollectionDidChange:(id)arg1;
- (id)textTitleDescriptions;
- (id)textBodyDescriptions;
- (double)mediaLayoutWidthAdjustment;
- (long long)textBodyMaxLines;

@end
