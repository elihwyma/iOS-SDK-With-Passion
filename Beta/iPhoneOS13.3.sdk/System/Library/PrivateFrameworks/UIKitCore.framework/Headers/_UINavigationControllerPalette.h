/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSArray, NSString, UINavigationController, UIViewController, _UIBarBackground, _UIBarBackgroundLayoutLegacy;

@interface _UINavigationControllerPalette : UIView

{
    _UIBarBackground *_backgroundView;
    _UIBarBackgroundLayoutLegacy *_backgroundViewLayout;
    double _backgroundUnderlapHeight;
    struct {
        unsigned int isAttached:1;
        unsigned int attachmentIsChanging:1;
        unsigned int restartPaletteTransitionIfNecessary:1;
        unsigned int pinned:1;
        unsigned int pinningBarShadowIsHidden:1;
        unsigned int paletteShadowIsHidden:1;
        unsigned int pinningBarShadowWasHidden:1;
    } _paletteFlags;
    _Bool __paletteOverridesPinningBar;
    _Bool _visibleWhenPinningBarIsHidden;
    _Bool __palettePinningBarHidden;
    unsigned long long _boundaryEdge;
    UINavigationController *_navController;
    UIViewController *__unpinnedController;
    id __pinningBar;
    NSArray *__constraints;
    NSArray *__backgroundConstraints;
    struct CGSize __size;
    struct UIEdgeInsets _preferredContentInsets;
}

@property (nonatomic) UIViewController *_unpinnedController;
@property (nonatomic, setter=_setPinningBar:) id _pinningBar;
@property (nonatomic, readonly, getter=_attachmentIsChanging) _Bool _attachmentIsChanging;
@property (nonatomic, setter=_setRestartPaletteTransitionIfNecessary:) _Bool _restartPaletteTransitionIfNecessary;
@property (retain, nonatomic, setter=_setConstraints:) NSArray *_constraints;
@property (nonatomic, setter=_setSize:) struct CGSize _size;
@property (retain, nonatomic, setter=_setBackgroundConstraints:) NSArray *_backgroundConstraints;
@property (nonatomic, getter=_isPalettePinningBarHidden, setter=_setPalettePinningBarHidden:) _Bool _palettePinningBarHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
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

- (void)dealloc;
- (void)setFrame:(struct CGRect)arg1;
- (void)didMoveToSuperview;
- (id)_backgroundViewLayout;
- (_Bool)_supportsSpecialSearchBarTransitions;
- (void)_propagateBackgroundToContents;
- (void)_setTopConstraintConstant:(double)arg1;
- (void)_setLeftConstraintConstant:(double)arg1;
- (void)setFrame:(struct CGRect)arg1 isAnimating:(_Bool)arg2;
- (_Bool)isAttached;
- (_Bool)paletteIsHidden;
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
- (void)_setVisualAltitude:(double)arg1;
- (void)_setVisualAltitudeBias:(struct CGSize)arg1;
- (id)_initWithNavigationController:(id)arg1 forEdge:(unsigned long long)arg2;
- (void)_updateLayoutForCurrentConfiguration;
- (void)_setAttachmentIsChanging:(_Bool)arg1;

@end
