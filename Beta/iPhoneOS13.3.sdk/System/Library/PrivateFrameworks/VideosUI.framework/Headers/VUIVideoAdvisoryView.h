/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIView.h>

@class NSArray, VUIVideoAdvisoryViewLayout, _TVImageView;

__attribute__((visibility("hidden")))
@interface VUIVideoAdvisoryView : UIView

{
    VUIVideoAdvisoryViewLayout *_layout;
    _TVImageView *_logoImageView;
    UIView *_dividerView;
    NSArray *_legendViews;
}

@property (retain, nonatomic) VUIVideoAdvisoryViewLayout *layout;
@property (retain, nonatomic) _TVImageView *logoImageView;
@property (retain, nonatomic) UIView *dividerView;
@property (copy, nonatomic) NSArray *legendViews;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (struct UIEdgeInsets)_margin;
- (_Bool)_isPortrait;
- (struct CGSize)_dividerSize;
- (struct CGSize)_logoSize;
- (id)initWithRatingInfoDictionary:(id)arg1;
- (void)show:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (struct CGSize)_legendSize;
- (struct UIEdgeInsets)_logoMargin;
- (struct UIEdgeInsets)_legendsMargin;
- (struct UIEdgeInsets)_dividerMargin;
- (void)_configureSubviewsWithDictionary:(id)arg1;
- (void)_showAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_hideAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_showWithAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (void)_hideWithAnimationWithCompletion:(CDUnknownBlockType)arg1;

@end
