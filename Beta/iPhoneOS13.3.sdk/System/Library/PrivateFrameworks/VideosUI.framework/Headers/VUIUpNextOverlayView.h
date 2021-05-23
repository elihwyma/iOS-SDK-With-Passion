/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIView.h>

@class CALayer, IKViewElement, NSNumber, NSString, VUICountDownProgressIndicator, VUILabel, VUITextBadgeView, VUIUpNextOverlayLayout, _TVImageView, _TVProgressView;

__attribute__((visibility("hidden")))
@interface VUIUpNextOverlayView : UIView

{
    _Bool _progressViewShowOnlyOnFocus;
    _Bool _appImageViewShowOnlyOnFocus;
    _Bool _logoImageViewShowOnlyOnFocus;
    _Bool _textLabelShowOnlyOnFocus;
    _Bool _subtitleLabelShowOnlyOnFocus;
    _Bool _badgeShowOnlyOnFocus;
    _Bool _isFocused;
    VUIUpNextOverlayLayout *_overlayLayout;
    CALayer *_gradientLayer;
    IKViewElement *_viewElement;
    _TVProgressView *_progressView;
    IKViewElement *_progressViewElement;
    _TVImageView *_appImageView;
    IKViewElement *_appImageElement;
    _TVImageView *_logoImageView;
    IKViewElement *_logoImageElement;
    VUILabel *_textLabel;
    IKViewElement *_textElement;
    VUILabel *_subtitleLabel;
    IKViewElement *_subtitleElement;
    _TVImageView *_badgeView;
    IKViewElement *_badgeElement;
    VUITextBadgeView *_textBadge;
    IKViewElement *_textBadgeElement;
    UIView *_gradientView;
    CALayer *_blurMaskLayer;
    NSNumber *_autoPlayDuration;
    VUICountDownProgressIndicator *_autoPlayIndicator;
}

@property (retain, nonatomic) VUIUpNextOverlayLayout *overlayLayout;
@property (retain, nonatomic) IKViewElement *viewElement;
@property (retain, nonatomic) _TVProgressView *progressView;
@property (retain, nonatomic) IKViewElement *progressViewElement;
@property (retain, nonatomic) _TVImageView *appImageView;
@property (retain, nonatomic) IKViewElement *appImageElement;
@property (retain, nonatomic) _TVImageView *logoImageView;
@property (retain, nonatomic) IKViewElement *logoImageElement;
@property (retain, nonatomic) VUILabel *textLabel;
@property (retain, nonatomic) IKViewElement *textElement;
@property (retain, nonatomic) VUILabel *subtitleLabel;
@property (retain, nonatomic) IKViewElement *subtitleElement;
@property (retain, nonatomic) _TVImageView *badgeView;
@property (retain, nonatomic) IKViewElement *badgeElement;
@property (retain, nonatomic) VUITextBadgeView *textBadge;
@property (retain, nonatomic) IKViewElement *textBadgeElement;
@property (retain, nonatomic) UIView *gradientView;
@property (retain, nonatomic) CALayer *blurMaskLayer;
@property (nonatomic) _Bool progressViewShowOnlyOnFocus;
@property (nonatomic) _Bool appImageViewShowOnlyOnFocus;
@property (nonatomic) _Bool logoImageViewShowOnlyOnFocus;
@property (nonatomic) _Bool textLabelShowOnlyOnFocus;
@property (nonatomic) _Bool subtitleLabelShowOnlyOnFocus;
@property (nonatomic) _Bool badgeShowOnlyOnFocus;
@property (nonatomic) _Bool isFocused;
@property (retain, nonatomic) NSNumber *autoPlayDuration;
@property (retain, nonatomic) VUICountDownProgressIndicator *autoPlayIndicator;
@property (retain, nonatomic) CALayer *gradientLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)overlayViewFromElement:(id)arg1 overlayLayout:(id)arg2 existingView:(id)arg3;

- (void)dealloc;
- (void)reset;
- (void)layoutSubviews;
- (void)textBadgeViewContentsUpdated:(id)arg1;

@end
