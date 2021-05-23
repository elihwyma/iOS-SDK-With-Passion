/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSArray, NSLayoutConstraint, NSString, UIButton, UIFont, UIKBTutorialModalDisplayStyling, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface UIKBTutorialModalDisplay : UIView

{
    long long _appearance;
    UIView *_containerView;
    UIView *_mediaView;
    UIButton *_button;
    UIKBTutorialModalDisplayStyling *_styling;
    UIVisualEffectView *_backgroundBlurView;
    NSLayoutConstraint *_containerViewTopConstraits;
    NSArray *_adjustableConstraints;
    NSLayoutConstraint *_widthAdjustmentConstraint;
}

@property (retain, nonatomic) UIKBTutorialModalDisplayStyling *styling;
@property (retain, nonatomic) UIVisualEffectView *backgroundBlurView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) NSLayoutConstraint *containerViewTopConstraits;
@property (retain, nonatomic) NSArray *adjustableConstraints;
@property (retain, nonatomic) NSLayoutConstraint *widthAdjustmentConstraint;
@property (retain, nonatomic) UIView *mediaView;
@property (retain, nonatomic) UIButton *button;
@property (nonatomic) long long appearance;
@property (nonatomic, readonly) NSString *buttonTitle;
@property (nonatomic, readonly) NSArray *textTitleDescriptions;
@property (nonatomic, readonly) UIFont *textTitleFont;
@property (nonatomic, readonly) NSArray *textBodyDescriptions;
@property (nonatomic, readonly) UIFont *textBodyFont;
@property (nonatomic, readonly) NSString *largeTitle;
@property (nonatomic, readonly) UIFont *largeTitleFont;
@property (nonatomic, readonly) NSArray *mediaContents;
@property (nonatomic, readonly) double pagingInterval;
@property (nonatomic, readonly) double mediaLayoutWidthAdjustment;
@property (nonatomic, readonly) long long textBodyMaxLines;
@property (nonatomic, readonly) _Bool presentsFullScreen;

- (_Bool)isPortrait;
- (id)initWithKeyboardAppearance:(long long)arg1;
- (struct UIEdgeInsets)safeAreaInsets;
- (void)extraButtonTapAction;
- (void)updateMediaViewTextAndPlacement;
- (void)layoutSubviews;
- (void)restartPagingAnimation;
- (id)constructMediaView;
- (void)tapInsideButton:(id)arg1;
- (void)configBackgroundBlur;
- (void)configContainerView;
- (void)containerForFullScreenView;
- (void)containerForAlertPresentation;
- (void)containerForKeyboardView;
- (double)containerTopPadding;
- (double)containerBottomPadding;
- (struct CGSize)sizeForTutorialPageView;

@end
