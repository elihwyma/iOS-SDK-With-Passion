/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UIButton.h>

@class NSString, UIGestureRecognizer, UIVibrancyEffect, UIView, UIVisualEffectView, _SFNavigationBarTheme;

@protocol _SFNavigationBarURLButtonDelegate;

__attribute__((visibility("hidden")))
@interface _SFNavigationBarURLButton : UIButton

{
    UIVibrancyEffect *_highlightedVibrancyEffect;
    UIVibrancyEffect *_vibrancyEffect;
    UIVisualEffectView *_effectView;
    UIView *_effectMask;
    UIGestureRecognizer *_longPressGestureRecognizer;
    double _backgroundAlphaFactor;
    _SFNavigationBarTheme *_theme;
    id <_SFNavigationBarURLButtonDelegate> _delegate;
    double _urlOutlineCornerRadius;
}

@property (nonatomic) double backgroundAlphaFactor;
@property (retain, nonatomic) _SFNavigationBarTheme *theme;
@property (weak, nonatomic) id <_SFNavigationBarURLButtonDelegate> delegate;
@property (nonatomic, setter=setURLOutlineCornerRadius:) double urlOutlineCornerRadius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (_Bool)pointMostlyInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)copy:(id)arg1;
- (void)_handleLongPress:(id)arg1;
- (id)_accessibilityQuickSpeakContent;
- (void)_dismissMenu:(id)arg1;
- (void)_updateEffectView;
- (void)_updateBackgroundImageAnimated:(_Bool)arg1;
- (void)pasteAndNavigate:(id)arg1;

@end
