/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIControl.h>

@class NSLayoutConstraint, NSString, _UIBarButtonItemData, _UIButtonBarButtonVisualProvider;

@interface _UIButtonBarButton : UIControl

{
    _UIButtonBarButtonVisualProvider *_visualProvider;
    NSLayoutConstraint *_widthMinimizingConstraint;
    NSLayoutConstraint *_heightMinimizingConstraint;
    struct CGRect _hitRect;
    _Bool _backButton;
    _UIBarButtonItemData *_appearanceData;
}

@property (copy, nonatomic, readonly) _UIButtonBarButtonVisualProvider *visualProvider;
@property (nonatomic, readonly, getter=isBackButton) _Bool backButton;
@property (retain, nonatomic) _UIBarButtonItemData *appearanceData;
@property (nonatomic, readonly) NSLayoutConstraint *widthMinimizingConstraint;
@property (nonatomic, readonly) NSLayoutConstraint *heightMinimizingConstraint;
@property (nonatomic, getter=_buttonBarHitRect, setter=_setButtonBarHitRect:) struct CGRect buttonBarHitRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, getter=isSpringLoaded) _Bool springLoaded;

- (id)init;
- (void)dealloc;
- (void)setEnabled:(_Bool)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (struct UIEdgeInsets)alignmentRectInsets;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setSelected:(_Bool)arg1;
- (id)initWithVisualProvider:(id)arg1;
- (void)setNeedsAppearanceUpdate;
- (void)configureFromBarItem:(id)arg1 withAppearanceDelegate:(id)arg2;
- (void)_accessibilitySettingsChanged:(id)arg1;
- (void)_setTouchHasHighlighted:(_Bool)arg1;
- (void)_configureFromBarItem:(id)arg1 appearanceDelegate:(id)arg2 isBackButton:(_Bool)arg3;
- (void)willMoveToSuperview:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (unsigned long long)_controlEventsForActionTriggered;
- (void)configureBackButtonFromBarItem:(id)arg1 withAppearanceDelegate:(id)arg2;
- (_Bool)pointMostlyInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)_accessibilityShouldActivateOnHUDLift;

@end
