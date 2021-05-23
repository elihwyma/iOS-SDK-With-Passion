/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/_UIFloatingContentView.h>

@class NSString, UIImage, UIView;

@interface _TVCardFloatingContentView : _UIFloatingContentView

{
    UIView *_unfocusedShadowView;
    UIView *_focusedShadowView;
    double _unfocusedAlpha;
    _Bool _isSelected;
    double _unfocusedShadowAlpha;
    double _focusedShadowAlpha;
    UIImage *_unfocusedShadowImage;
    UIImage *_focusedShadowImage;
    CDUnknownBlockType _pressCompletionBlock;
    struct CGSize _focusedShadowCardSize;
    struct CGSize _unfocusedShadowCardSize;
}

@property (copy, nonatomic) CDUnknownBlockType pressCompletionBlock;
@property (nonatomic) double unfocusedShadowAlpha;
@property (nonatomic) double focusedShadowAlpha;
@property (retain, nonatomic) UIImage *unfocusedShadowImage;
@property (retain, nonatomic) UIImage *focusedShadowImage;
@property (nonatomic) struct CGSize focusedShadowCardSize;
@property (nonatomic) struct CGSize unfocusedShadowCardSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)floatingContentView:(id)arg1 didFinishTransitioningToState:(unsigned long long)arg2;
- (void)floatingContentView:(id)arg1 isTransitioningFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)setPressed:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 withAnimationCoordinator:(id)arg3;
- (void)_updateForAccessibilityChange;
- (struct UIEdgeInsets)selectionMarginsForSize:(struct CGSize)arg1;
- (void)setBgColor:(id)arg1 highlightBgColor:(id)arg2 cornerRadius:(double)arg3;

@end
