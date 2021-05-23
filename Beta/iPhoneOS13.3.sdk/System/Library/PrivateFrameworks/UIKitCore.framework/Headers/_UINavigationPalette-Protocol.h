/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class UINavigationController, UIView;

@protocol _UINavigationPalette <Swift>

@property (retain, nonatomic, setter=_setBackgroundView:) UIView *_backgroundView;
@property (nonatomic, setter=_setPaletteOverridesPinningBar:) _Bool _paletteOverridesPinningBar;
@property (nonatomic, readonly) UINavigationController *navController;
@property (nonatomic, readonly) unsigned long long boundaryEdge;
@property (nonatomic, getter=isPinned) _Bool pinned;
@property (nonatomic) _Bool pinningBarShadowWasHidden;
@property (nonatomic) _Bool pinningBarShadowIsHidden;
@property (nonatomic) _Bool paletteShadowIsHidden;
@property (nonatomic, getter=isVisibleWhenPinningBarIsHidden) _Bool visibleWhenPinningBarIsHidden;
@property (nonatomic) struct UIEdgeInsets preferredContentInsets;

- (unsigned short)_setTopConstraintConstant: /* Error: Ran out of types for this method. */;
- (unsigned short)_setLeftConstraintConstant: /* Error: Ran out of types for this method. */;
- (unsigned short)setFrame:isAnimating: /* Error: Ran out of types for this method. */;
- (unsigned short)isAttached;
- (unsigned short)paletteIsHidden;

@end
