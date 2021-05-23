/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIStatusBarRoundedCornerView.h>

@class CALayer, NSString, UIAccessibilityHUDItem, UIColor, UIView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarPillView : _UIStatusBarRoundedCornerView

{
    _Bool _pulsing;
    UIColor *_pillColor;
    UIView *_subviewForBaselineAlignment;
    CALayer *_pulseLayer;
    struct UIEdgeInsets _alignmentRectInsets;
}

@property (retain, nonatomic) CALayer *pulseLayer;
@property (nonatomic) struct UIEdgeInsets alignmentRectInsets;
@property (nonatomic) _Bool pulsing;
@property (retain, nonatomic) UIColor *pillColor;
@property (weak, nonatomic) UIView *subviewForBaselineAlignment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool wantsCrossfade;
@property (nonatomic, readonly) _Bool prefersBaselineAlignment;
@property (nonatomic, readonly) long long overriddenVerticalAlignment;
@property (nonatomic, readonly) UIAccessibilityHUDItem *accessibilityHUDRepresentation;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)canBecomeFocused;
- (void)layoutSubviews;
- (id)viewForLastBaselineLayout;
- (_Bool)isUserInteractionEnabled;
- (void)_updateBackgroundColor;
- (void)resumePersistentAnimation;
- (void)applyStyleAttributes:(id)arg1;

@end
