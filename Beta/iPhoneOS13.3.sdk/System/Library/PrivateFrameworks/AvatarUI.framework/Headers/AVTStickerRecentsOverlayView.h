/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <UIKit/UIVisualEffectView.h>

@class AVTCircularButton, AVTStickerRecentsOverlayViewLayout, NSArray, NSLayoutConstraint, NSString, UIButton, UIImage, UIImageView, UILabel, UITapGestureRecognizer, UIView;

@protocol AVTStickerRecentsOverlayDelegate;

@interface AVTStickerRecentsOverlayView : UIVisualEffectView

{
    NSString *_title;
    NSString *_subtitle;
    UIImage *_image;
    id <AVTStickerRecentsOverlayDelegate> _delegate;
    UIView *_centeredContainerView;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIButton *_continueButton;
    AVTCircularButton *_closeButton;
    AVTStickerRecentsOverlayViewLayout *_portraitLayout;
    AVTStickerRecentsOverlayViewLayout *_landscapeLayout;
    AVTStickerRecentsOverlayViewLayout *_currentLayout;
    NSArray *_layoutConstraints;
    NSLayoutConstraint *_containerTopConstraint;
    NSLayoutConstraint *_containerLeadingConstraint;
    NSLayoutConstraint *_containerTrailingConstraint;
    NSLayoutConstraint *_imageHeightConstraint;
    NSLayoutConstraint *_imageToTitleConstraint;
    NSLayoutConstraint *_titleToSubtitleConstraint;
    NSLayoutConstraint *_hideSubtitleConstraint;
}

@property (retain, nonatomic) UIView *centeredContainerView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) UIButton *continueButton;
@property (retain, nonatomic) AVTCircularButton *closeButton;
@property (retain, nonatomic) AVTStickerRecentsOverlayViewLayout *portraitLayout;
@property (retain, nonatomic) AVTStickerRecentsOverlayViewLayout *landscapeLayout;
@property (retain, nonatomic) AVTStickerRecentsOverlayViewLayout *currentLayout;
@property (retain, nonatomic) NSArray *layoutConstraints;
@property (retain, nonatomic) NSLayoutConstraint *containerTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *containerLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *containerTrailingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *imageHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *imageToTitleConstraint;
@property (retain, nonatomic) NSLayoutConstraint *titleToSubtitleConstraint;
@property (retain, nonatomic) NSLayoutConstraint *hideSubtitleConstraint;
@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) UIView *animatableView;
@property (weak, nonatomic) id <AVTStickerRecentsOverlayDelegate> delegate;

+ (id)stickerButtonImage;
+ (id)overlayViewForMemojiCreation;
+ (id)standardOverlayView;
+ (id)disclosureOverlayView;

- (void)layoutSubviews;
- (void)updateConstraints;
- (void)setupConstraints;
- (void)didTapContinueButton:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 subtitle:(id)arg3 buttonTitle:(id)arg4 image:(id)arg5;
- (void)didTapCloseButton:(id)arg1;
- (void)didTapContentView:(id)arg1;
- (id)appropriateLayout;
- (void)dismissAnimatedWithDuration:(double)arg1;

@end
