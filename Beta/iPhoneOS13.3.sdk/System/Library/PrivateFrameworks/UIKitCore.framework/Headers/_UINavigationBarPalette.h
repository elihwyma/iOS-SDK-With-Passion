/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSString, UINavigationController, UINavigationItem;

@interface _UINavigationBarPalette : UIView

{
    _Bool _didSetMinimumHeight;
    _Bool _transitioning;
    _Bool _pinned;
    _Bool __displaysWhenSearchActive;
    UIView *_contentView;
    double _preferredHeight;
    double _minimumHeight;
    UIView *_temporaryBackgroundView;
    UINavigationItem *_owningNavigationItem;
    unsigned long long __contentViewMarginType;
    long long __layoutPriority;
}

@property (retain, nonatomic) UIView *temporaryBackgroundView;
@property (nonatomic) _Bool didSetMinimumHeight;
@property (nonatomic) _Bool transitioning;
@property (nonatomic, getter=isPinned) _Bool pinned;
@property (weak, nonatomic) UINavigationItem *owningNavigationItem;
@property (nonatomic, setter=_setContentViewMarginType:) unsigned long long _contentViewMarginType;
@property (nonatomic, setter=_setDisplaysWhenSearchActive:) _Bool _displaysWhenSearchActive;
@property (nonatomic, setter=_setLayoutPriority:) long long _layoutPriority;
@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic) double preferredHeight;
@property (nonatomic) double minimumHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic, setter=_setBackgroundView:) UIView *_backgroundView;
@property (nonatomic, setter=_setPaletteOverridesPinningBar:) _Bool _paletteOverridesPinningBar;
@property (nonatomic, readonly) UINavigationController *navController;
@property (nonatomic, readonly) unsigned long long boundaryEdge;
@property (nonatomic) _Bool pinningBarShadowWasHidden;
@property (nonatomic) _Bool pinningBarShadowIsHidden;
@property (nonatomic) _Bool paletteShadowIsHidden;
@property (nonatomic, getter=isVisibleWhenPinningBarIsHidden) _Bool visibleWhenPinningBarIsHidden;
@property (nonatomic) struct UIEdgeInsets preferredContentInsets;

+ (id)defaultContentViewWithFrame:(struct CGRect)arg1;

- (id)initWithContentView:(id)arg1;
- (void)addSubview:(id)arg1;
- (void)layoutSubviews;
- (void)_setTopConstraintConstant:(double)arg1;
- (void)_setLeftConstraintConstant:(double)arg1;
- (void)setFrame:(struct CGRect)arg1 isAnimating:(_Bool)arg2;
- (_Bool)isAttached;
- (_Bool)paletteIsHidden;
- (void)_setSize:(struct CGSize)arg1;
- (void)resetBackgroundConstraints;
- (id)_attachedPinningTopBar;
- (void)_updateBackgroundView;
- (void)_setAttached:(_Bool)arg1 didComplete:(_Bool)arg2;
- (void)_configureConstraintsForBackground:(id)arg1;
- (_Bool)_shouldUpdateBackground;
- (void)_updateBackgroundConstraintsIfNecessary;
- (void)_configurePaletteConstraintsForBoundary;
- (void)_disableConstraints;
- (void)_enableConstraints;
- (void)_resetConstraintConstants:(double)arg1;
- (void)_resetHeightConstraintConstant;
- (void)_setupBackgroundViewIfNecessary;

@end
