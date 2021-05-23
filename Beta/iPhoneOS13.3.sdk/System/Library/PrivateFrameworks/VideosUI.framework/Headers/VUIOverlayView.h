/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIView.h>

@class CALayer, IKViewElement, NSArray, VUILabel, VUIOverlayLayout, VUITextBadgeView, _TVProgressView;

__attribute__((visibility("hidden")))
@interface VUIOverlayView : UIView

{
    CALayer *_gradientLayer;
    VUIOverlayLayout *_overlayLayout;
    IKViewElement *_viewElement;
    VUILabel *_titleLabel;
    IKViewElement *_titleElement;
    VUITextBadgeView *_textBadge;
    IKViewElement *_textBadgeElement;
    NSArray *_badgeViewWrappers;
    _TVProgressView *_progressView;
    UIView *_gradientView;
}

@property (retain, nonatomic) VUIOverlayLayout *overlayLayout;
@property (retain, nonatomic) IKViewElement *viewElement;
@property (retain, nonatomic) VUILabel *titleLabel;
@property (retain, nonatomic) IKViewElement *titleElement;
@property (retain, nonatomic) VUITextBadgeView *textBadge;
@property (retain, nonatomic) IKViewElement *textBadgeElement;
@property (retain, nonatomic) NSArray *badgeViewWrappers;
@property (retain, nonatomic) _TVProgressView *progressView;
@property (retain, nonatomic) UIView *gradientView;
@property (retain, nonatomic) CALayer *gradientLayer;

+ (id)overlayViewFromElement:(id)arg1 overlayLayout:(id)arg2 existingView:(id)arg3;
+ (id)overlayViewFromMediaItem:(id)arg1 overlayLayout:(id)arg2 existingView:(id)arg3;

- (void)reset;
- (void)layoutSubviews;

@end
