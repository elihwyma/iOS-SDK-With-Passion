/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSString, UIAccessibilityHUDGestureManager, UIBarButtonItem, UIColor, UIToolbarAppearance, _UIToolbarVisualProvider;

@protocol UIToolbarDelegate;

@interface UIToolbar : UIView <Swift>

{
    id <UIToolbarDelegate> _delegate;
    NSArray *_items;
    UIColor *_barTintColor;
    struct {
        unsigned int barStyle:3;
        unsigned int barTranslucence:3;
        unsigned int isLocked:1;
        unsigned int linkedBeforeWhitetailAndInitializedFromCoder:1;
        unsigned int disableBlurTinting:1;
    } _toolbarFlags;
    id __appearanceStorage;
    _UIToolbarVisualProvider *_visualProvider;
    UIAccessibilityHUDGestureManager *_axHUDGestureManager;
    unsigned long long _disableAutolayoutWarnings;
    _Bool _autoHidesToolbarInFullscreen;
    _Bool __wantsLetterpressContent;
    _Bool _centerTextButtons;
    UIView *_shadowView;
    long long _barPosition;
    UIToolbarAppearance *_standardAppearance;
    UIToolbarAppearance *_compactAppearance;
    UIBarButtonItem *_centerItem;
    NSArray *_backgroundEffects;
}

@property (nonatomic, getter=_isLocked, setter=_setLocked:) _Bool _locked;
@property (retain, nonatomic, setter=_setShadowView:) UIView *_shadowView;
@property (copy, nonatomic, getter=_backdropViewLayerGroupName, setter=_setBackdropViewLayerGroupName:) NSString *_backdropViewLayerGroupName;
@property (nonatomic, readonly) long long _barTranslucence;
@property (retain, nonatomic) UIBarButtonItem *centerItem;
@property (nonatomic) _Bool autoHidesToolbarInFullscreen;
@property (retain, nonatomic, setter=_setBackgroundView:) UIView *_backgroundView;
@property (nonatomic, setter=_setHidesShadow:) _Bool _hidesShadow;
@property (nonatomic, setter=_setDisableBlurTinting:) _Bool _disableBlurTinting;
@property (copy, nonatomic) NSArray *backgroundEffects;
@property (nonatomic, setter=_setWantsLetterpressContent:) _Bool _wantsLetterpressContent;
@property (nonatomic, readonly) _Bool _shouldStretchDuringCrossfadeTransition;
@property (nonatomic, setter=_setItemDistribution:) long long _itemDistribution;
@property (nonatomic) _Bool centerTextButtons;
@property (nonatomic, readonly, getter=isMinibar) _Bool minibar;
@property (nonatomic) long long barStyle;
@property (copy, nonatomic) NSArray *items;
@property (nonatomic, getter=isTranslucent) _Bool translucent;
@property (retain, nonatomic) UIColor *tintColor;
@property (retain, nonatomic) UIColor *barTintColor;
@property (copy, nonatomic) UIToolbarAppearance *standardAppearance;
@property (copy, nonatomic) UIToolbarAppearance *compactAppearance;
@property (weak, nonatomic) id <UIToolbarDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long barPosition;

+ (double)defaultHeight;
+ (id)defaultButtonFont;
+ (_Bool)_forceLegacyVisualProvider;
+ (id)_visualProviderForToolbar:(id)arg1;
+ (double)defaultHeightForBarSize:(int)arg1;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(_Bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)isElementAccessibilityExposedToInterfaceBuilder;
- (_Bool)_accessibilityHUDGestureManager:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)_accessibilityHUDGestureManager:(id)arg1 HUDItemForPoint:(struct CGPoint)arg2;
- (void)_accessibilityHUDGestureManager:(id)arg1 gestureLiftedAtPoint:(struct CGPoint)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)invalidateIntrinsicContentSize;
- (void)backdropView:(id)arg1 didChangeToGraphicsQuality:(long long)arg2;
- (id)_traitCollectionForChildEnvironment:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (_Bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (long long)_barPosition;
- (void)_sendAction:(id)arg1 withEvent:(id)arg2;
- (void)_customViewChangedForButtonItem:(id)arg1;
- (void)_positionToolbarButtonsAndResetFontScaleAdjustment:(_Bool)arg1;
- (void)_installDefaultAppearance;
- (id)_effectiveBarTintColor;
- (void)_effectiveBarTintColorDidChangeWithPreviousColor:(id)arg1;
- (void)_setNeedsBackgroundViewUpdate;
- (void)_setupAXHUDGestureIfNecessary;
- (struct CGSize)defaultSizeForOrientation:(long long)arg1;
- (void)setItems:(id)arg1 animated:(_Bool)arg2;
- (void)_setBarPosition:(long long)arg1;
- (void)_setButtonBackgroundImage:(id)arg1 mini:(id)arg2 forStates:(unsigned long long)arg3;
- (_Bool)_subclassImplementsDrawRect;
- (_Bool)_hostsLayoutEngineAllowsTAMIC_NO;
- (void)_updateBackgroundView;
- (void)_doCommonToolbarInit;
- (void)_updateBarForStyle;
- (id)_itemAtPoint:(struct CGPoint)arg1;
- (void)_frameOrBoundsChangedWithVisibleSizeChange:(_Bool)arg1 wasMinibar:(_Bool)arg2;
- (void)_setVisualAltitude:(double)arg1;
- (void)_setVisualAltitudeBias:(struct CGSize)arg1;
- (_Bool)_linkedBeforeWhitetailAndInitializedFromCoder;
- (id)__appearanceStorage;
- (struct CGRect)_frameOfBarButtonItem:(id)arg1;
- (void)setBackgroundImage:(id)arg1 forToolbarPosition:(long long)arg2 barMetrics:(long long)arg3;
- (id)backgroundImageForToolbarPosition:(long long)arg1 barMetrics:(long long)arg2;
- (void)setShadowImage:(id)arg1 forToolbarPosition:(long long)arg2;
- (id)shadowImageForToolbarPosition:(long long)arg1;
- (void)_setForceTopBarAppearance:(_Bool)arg1;
- (id)initInView:(id)arg1 withFrame:(struct CGRect)arg2 withItemList:(id)arg3;
- (void)_46877859;
- (_Bool)_hasCustomAutolayoutNeighborSpacingForAttribute:(long long *)arg1;
- (double)_defaultAutolayoutSpacing;
- (double)_autolayoutSpacingAtEdge:(int)arg1 forAttribute:(long long)arg2 inContainer:(id)arg3 isGuide:(_Bool)arg4;

@end
