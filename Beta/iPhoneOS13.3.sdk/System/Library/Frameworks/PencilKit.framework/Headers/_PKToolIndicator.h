/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <UIKit/UIView.h>

@class PKInk, UIButton;

@protocol PKInkToolButton, _PKToolIndicatorDelegate;

@interface _PKToolIndicator : UIView

{
    _Bool _isEmbossed;
    _Bool _isUsedOnDarkBackground;
    id <_PKToolIndicatorDelegate> _delegate;
    unsigned long long _sizeState;
    unsigned long long _attributeSet;
    PKInk *_ink;
    UIButton<PKInkToolButton> *_toolButton;
    unsigned long long _animationState;
}

@property (retain, nonatomic) UIButton<PKInkToolButton> *toolButton;
@property (nonatomic) unsigned long long animationState;
@property (weak, nonatomic) id <_PKToolIndicatorDelegate> delegate;
@property (nonatomic) _Bool isEmbossed;
@property (nonatomic) _Bool isUsedOnDarkBackground;
@property (nonatomic) unsigned long long sizeState;
@property (nonatomic) unsigned long long attributeSet;
@property (retain, nonatomic) PKInk *ink;

+ (void)_animationWithSetup:(CDUnknownBlockType)arg1 animationBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3 animated:(_Bool)arg4;
+ (id)_defaultAnimator;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setInk:(id)arg1 animated:(_Bool)arg2;
- (id)_createToolButtonForInk:(id)arg1;
- (void)_setupToolButton:(id)arg1 forInk:(id)arg2;
- (struct CGRect)_frameForVisibleToolButton;
- (struct CGRect)_frameForHiddenToolButton;
- (void)setAnimationState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)_switchToInkAnimation:(id)arg1 animated:(_Bool)arg2;
- (void)_presentInkAnimation:(id)arg1 animated:(_Bool)arg2;
- (void)_dismissInkAnimation:(id)arg1 animated:(_Bool)arg2;
- (struct CGRect)_toolIndicatorCenteringRect;
- (id)_toolButtonView;

@end
