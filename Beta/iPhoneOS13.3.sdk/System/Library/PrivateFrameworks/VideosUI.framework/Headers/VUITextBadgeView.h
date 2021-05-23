/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIView.h>

@class IKViewElement, NSAttributedString, NSTimer, UIImage, VUITextBadgeLayout, _TVImageView;

@protocol VUITextBadgeViewDelegate;

__attribute__((visibility("hidden")))
@interface VUITextBadgeView : UIView

{
    double _strokeSize;
    UIImage *_backgroundImage;
    _TVImageView *_imageView;
    VUITextBadgeLayout *_badgeLayout;
    id <VUITextBadgeViewDelegate> _delegate;
    NSAttributedString *_attributedTitle;
    IKViewElement *_viewElement;
    NSTimer *_expiryUpdateTimer;
    struct CGSize _glyphSize;
}

@property (copy, nonatomic) NSAttributedString *attributedTitle;
@property (nonatomic) struct CGSize glyphSize;
@property (retain, nonatomic) IKViewElement *viewElement;
@property (retain, nonatomic) NSTimer *expiryUpdateTimer;
@property (nonatomic) double strokeSize;
@property (retain, nonatomic) UIImage *backgroundImage;
@property (retain, nonatomic) _TVImageView *imageView;
@property (retain, nonatomic) VUITextBadgeLayout *badgeLayout;
@property (weak, nonatomic) id <VUITextBadgeViewDelegate> delegate;

+ (_Bool)badgeElementHasContent:(id)arg1;

- (void)dealloc;
- (void)reset;
- (void)_invalidateTimer;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)_textSize;
- (void)_imageLoaded;
- (void)setElement:(id)arg1 withBadgeLayout:(id)arg2;

@end
