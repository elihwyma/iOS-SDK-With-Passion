/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSMutableDictionary, NSString, UIKBRenderConfig, UIKBRenderFactory, UIKBTree, UIKeyboardMenuView;

__attribute__((visibility("hidden")))
@interface UIKBKeyView : UIView

{
    UIKBTree *m_keyplane;
    UIKBTree *m_key;
    struct CGRect m_drawFrame;
    struct __CFBoolean *m_allowsCaching;
    UIKBRenderConfig *m_renderConfig;
    UIKBRenderFactory *m_factory;
    NSMutableDictionary *_keyLayers;
    int _renderedKeyState;
    NSString *_cachedTraitsHashString;
    struct CGColor *_activeBackgroundColor;
    id _activeCompositingFilter;
    _Bool _singleRerender;
    double _cachedBackgroundOpacity;
    _Bool _cachedControlKeyRenderingPreference;
    _Bool _renderAsMask;
    unsigned long long _cachedAnchorCorner;
    unsigned long long _cachedShiftState;
    long long _cachedSelector;
    UIKeyboardMenuView *_popupMenu;
    double _endingTransitionDuration;
}

@property (nonatomic) _Bool renderAsMask;
@property (readonly) long long cachedRenderFlags;
@property (nonatomic, readonly) struct UIEdgeInsets displayInsets;
@property (retain, nonatomic) NSString *cachedTraitsHashString;
@property (nonatomic) unsigned long long cachedAnchorCorner;
@property (nonatomic) unsigned long long cachedShiftState;
@property (nonatomic) long long cachedSelector;
@property (nonatomic) _Bool cachedControlKeyRenderingPreference;
@property (nonatomic, readonly) UIKBTree *keyplane;
@property (nonatomic, readonly) UIKBTree *key;
@property (nonatomic) struct CGRect drawFrame;
@property (retain, nonatomic) UIKBRenderConfig *renderConfig;
@property (retain, nonatomic) UIKBRenderFactory *factory;
@property (nonatomic) UIKeyboardMenuView *popupMenu;
@property (nonatomic, readonly) struct CGRect variantFrame;
@property (nonatomic, readonly) UIKBKeyView *contentsKeyView;
@property (nonatomic, readonly) _Bool hasRendered;
@property (nonatomic) double endingTransitionDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *cacheKey;
@property (nonatomic, readonly) _Bool cacheDeferable;
@property (nonatomic, readonly) double cachedWidth;
@property (nonatomic, readonly) _Bool keepNonPersistent;
@property (nonatomic, readonly) long long cacheDeferPriority;

- (void)dealloc;
- (void)removeFromSuperview;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)displayLayer:(id)arg1;
- (void)prepareForDisplay;
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;
- (_Bool)_canDrawContent;
- (int)textEffectsVisibilityLevel;
- (void)dimKeys:(id)arg1;
- (void)configureBackdropView:(id)arg1 forRenderConfig:(id)arg2;
- (void)updateForKeyplane:(id)arg1 key:(id)arg2;
- (unsigned long long)focusableVariantCount;
- (id)layerForRenderFlags:(long long)arg1;
- (_Bool)_viewShouldBeOpaque;
- (_Bool)allowBackgroundCachingForRenderFlags:(long long)arg1;
- (id)renderFlagsForTraits:(id)arg1;
- (_Bool)requiresSublayers;
- (_Bool)_shouldUpdateLayers;
- (void)_populateLayer:(id)arg1 withContents:(id)arg2;
- (id)_generateBackdropMaskImage;
- (id)cacheKeysForRenderFlags:(id)arg1;
- (void)drawContentsOfRenderers:(id)arg1;
- (void)_applyAppearanceInvocations;
- (id)subTreeHitTest:(struct CGPoint)arg1;
- (long long)didInputSubTree:(id)arg1;
- (void)willDisplayModalActionView:(id)arg1 withSubTreeKeyView:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)hideKeyCap:(_Bool)arg1;
- (long long)imageOrientationForLayer:(id)arg1;
- (void)changeBackgroundToEnabled;
- (void)changeBackgroundToActiveIfNecessary;

@end
