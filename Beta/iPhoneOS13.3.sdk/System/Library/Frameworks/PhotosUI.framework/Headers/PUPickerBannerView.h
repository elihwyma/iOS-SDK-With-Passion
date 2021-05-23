/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIView.h>

@class NSArray, NSString, PUStackView, UILabel;

__attribute__((visibility("hidden")))
@interface PUPickerBannerView : UIView

{
    _Bool __animatingStackView;
    unsigned long long _style;
    NSArray *_images;
    NSString *_title;
    UIView *_leftView;
    UIView *_rightView;
    long long __alignment;
    UILabel *__label;
    PUStackView *__stackView;
    CDUnknownBlockType __animationCompletionHandler;
}

@property (nonatomic, setter=_setAlignment:) long long _alignment;
@property (retain, nonatomic, setter=_setLabel:) UILabel *_label;
@property (retain, nonatomic, setter=_setStackView:) PUStackView *_stackView;
@property (nonatomic, setter=_setAnimatingStackView:) _Bool _animatingStackView;
@property (copy, nonatomic, setter=_setAnimationCompletionHandler:) CDUnknownBlockType _animationCompletionHandler;
@property (nonatomic) unsigned long long style;
@property (copy, nonatomic) NSArray *images;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIView *leftView;
@property (retain, nonatomic) UIView *rightView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)_updateLabel;
- (void)setLeftView:(id)arg1 animated:(_Bool)arg2;
- (void)setRightView:(id)arg1 animated:(_Bool)arg2;
- (struct CGRect)_frameReversedIfRightToLeft:(_Bool)arg1 frame:(struct CGRect)arg2 bounds:(struct CGRect)arg3;
- (void)_updateAlignment;
- (void)_updateStackView;
- (void)animateImagesOntoView:(id)arg1 inContainerView:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
