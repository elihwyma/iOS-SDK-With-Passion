/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <UIKit/UIView.h>

@class NUCrossFadeViewAnimator, NUTextAndGlyphView, NUTitleViewUpdate, UIImageView, UILabel;

@protocol NUTitleViewStyler;

@interface NUCrossFadeTitleView : UIView

{
    id <NUTitleViewStyler> _styler;
    UIImageView *_titleImageView;
    UILabel *_titleLabel;
    NUTextAndGlyphView *_textAndGlyphView;
    unsigned long long _displayValueType;
    NUCrossFadeViewAnimator *_animator;
    NUTitleViewUpdate *_update;
}

@property (nonatomic, readonly) UIImageView *titleImageView;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, readonly) NUTextAndGlyphView *textAndGlyphView;
@property (nonatomic) unsigned long long displayValueType;
@property (nonatomic, readonly) NUCrossFadeViewAnimator *animator;
@property (retain, nonatomic) NUTitleViewUpdate *update;
@property (retain, nonatomic) id <NUTitleViewStyler> styler;
@property (nonatomic, readonly) struct CGRect visibleFrame;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithStyler:(id)arg1;
- (void)relayoutWithAnimation:(_Bool)arg1;
- (id)viewForValueType:(unsigned long long)arg1;
- (id)applyStylesToValueFromTitleViewUpdate:(id)arg1;
- (void)updateTitleViewWithUpdate:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_applyStylesToTextAndGlyph:(id)arg1 styleType:(unsigned long long)arg2;
- (id)_applyStylesToText:(id)arg1 styleType:(unsigned long long)arg2;

@end
