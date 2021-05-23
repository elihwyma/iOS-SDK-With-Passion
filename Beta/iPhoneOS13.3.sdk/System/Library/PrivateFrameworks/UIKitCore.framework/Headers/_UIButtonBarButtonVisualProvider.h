/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class UIView, _UIButtonBarButton;

@interface _UIButtonBarButtonVisualProvider : NSObject <Swift>

{
    _UIButtonBarButton *_button;
}

@property (nonatomic, readonly) UIView *backIndicatorView;
@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic) _Bool backButtonConstraintsActive;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)supportsBackButtons;
- (_Bool)buttonSelectionState:(id)arg1 forRequestedState:(_Bool)arg2;
- (_Bool)buttonHighlitedState:(id)arg1 forRequestedState:(_Bool)arg2;
- (_Bool)buttonEnabledState:(id)arg1 forRequestedState:(_Bool)arg2;
- (void)updateButton:(id)arg1 forSelectedState:(_Bool)arg2;
- (void)updateButton:(id)arg1 forHighlightedState:(_Bool)arg2;
- (void)updateButton:(id)arg1 forEnabledState:(_Bool)arg2;
- (void)updateButton:(id)arg1 forFocusedState:(_Bool)arg2;
- (void)configureButton:(id)arg1 withAppearanceDelegate:(id)arg2 fromBarItem:(id)arg3;
- (void)updateButton:(id)arg1 appearance:(id)arg2;
- (void)updateButton:(id)arg1 toUseButtonShapes:(_Bool)arg2;
- (void)buttonLayoutSubviews:(id)arg1 baseImplementation:(CDUnknownBlockType)arg2;
- (void)buttonWillMoveToWindow:(id)arg1;
- (void)buttonWillMoveToSuperview:(id)arg1;
- (void)button:(id)arg1 traitCollectionDidChange:(id)arg2;
- (struct CGSize)buttonIntrinsicContentSize:(id)arg1;
- (struct UIEdgeInsets)buttonAlignmentRectInsets:(id)arg1;
- (void)resetButtonHasHighlighted;

@end
