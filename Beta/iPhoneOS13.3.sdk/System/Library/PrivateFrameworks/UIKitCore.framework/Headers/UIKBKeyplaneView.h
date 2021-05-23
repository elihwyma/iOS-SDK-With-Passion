/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIKBSplitImageView.h>

@class NSMutableDictionary, NSString, NSTimer, UIKBCacheToken, UIKBKeyView, UIKBKeyViewAnimator, UIKBRenderConfig, UIKBRenderFactory, UIKBRenderingContext, UIKBTree, UIKeyboardEmojiKeyDisplayController, UIView;

__attribute__((visibility("hidden")))
@interface UIKBKeyplaneView : UIKBSplitImageView

{
    UIKBTree *_keyplane;
    UIKBTree *_defaultKeyplane;
    UIKBCacheToken *_cacheToken;
    UIKBCacheToken *_defaultKeyplaneCacheToken;
    UIKBKeyViewAnimator *_keyViewAnimator;
    UIKeyboardEmojiKeyDisplayController *_emojiKeyManager;
    UIKBKeyView *_candidateGapView;
    NSMutableDictionary *_subviewIndex;
    NSMutableDictionary *_activeViewIndex;
    NSMutableDictionary *_renderedKeyViews;
    NSMutableDictionary *_delayedDeactivationKeys;
    NSTimer *_activatedTimer;
    _Bool _performingDeactivation;
    _Bool _shouldDrawRect;
    UIKBRenderConfig *_renderConfig;
    UIKBRenderingContext *_renderingContext;
    UIKBRenderFactory *_factory;
    UIKBSplitImageView *_keyBorders;
    UIKBSplitImageView *_keyBackgrounds;
    UIKBSplitImageView *_keyCaps;
    UIView *_keyplaneMaskView;
}

@property (retain, nonatomic) UIKBTree *keyplane;
@property (retain, nonatomic) UIKBTree *defaultKeyplane;
@property (retain, nonatomic) UIKBCacheToken *cacheToken;
@property (retain, nonatomic) UIKBCacheToken *defaultKeyplaneCacheToken;
@property (retain, nonatomic) UIKBRenderConfig *renderConfig;
@property (retain, nonatomic) UIKBRenderingContext *renderingContext;
@property (retain, nonatomic) UIKBRenderFactory *factory;
@property (retain, nonatomic) UIKBKeyViewAnimator *keyViewAnimator;
@property (retain, nonatomic) UIKeyboardEmojiKeyDisplayController *emojiKeyManager;
@property (nonatomic, readonly) UIView *keyplaneMaskView;
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
- (void)layoutSubviews;
- (void)setContentScaleFactor:(double)arg1;
- (void)displayLayer:(id)arg1;
- (_Bool)_shouldInheritScreenScaleAsContentScaleFactor;
- (void)willMoveToWindow:(id)arg1;
- (void)prepareForDisplay;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)_canDrawContent;
- (id)viewForKey:(id)arg1;
- (void)dimKeys:(id)arg1;
- (void)setState:(int)arg1 forKey:(id)arg2;
- (id)cacheKeysForRenderFlags:(id)arg1;
- (void)drawContentsOfRenderers:(id)arg1;
- (void)purgeKeyViews;
- (_Bool)isPasscodeStyle;
- (void)purgeFactory;
- (void)_generateFactoryIfNeeded;
- (void)_generateRenderingContextIfNeeded;
- (void)_updateKeyplaneMaskView;
- (_Bool)useDefaultKeyplaneCacheTokenForRenderFlags:(long long)arg1;
- (unsigned long long)cornerMaskForKey:(id)arg1 recursive:(_Bool)arg2;
- (void)cancelDelayedDeactivation;
- (void)performDelayedDeactivation:(id)arg1;
- (void)scheduleDelayedDeactivation;
- (_Bool)_shouldAllowKey:(id)arg1;
- (void)removeKeyFromDelayedDeactivationSet:(id)arg1;
- (id)_existingVariantsKeyViewForKey:(id)arg1;
- (void)deactivateKey:(id)arg1 previousState:(int)arg2;
- (id)containingViewForKey:(id)arg1 withState:(int)arg2 wantsActiveOut:(_Bool *)arg3;
- (id)cacheIdentifierForKey:(id)arg1 withState:(int)arg2;
- (_Bool)shouldAnimateInKeyView:(id)arg1;
- (void)retestSelectedVariantIndexForKey:(id)arg1 atPoint:(struct CGPoint)arg2;
- (_Bool)shouldAnimateOutKeyView:(id)arg1;
- (void)deactivateKeys;
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2;
- (_Bool)validForKeyplane:(id)arg1 withVisualStyle:(int)arg2;
- (void)addKeyToDelayedDeactivationSet:(id)arg1;
- (id)cacheIdentifierForKey:(id)arg1;
- (int)stateForKey:(id)arg1;
- (id)activeKeyViews;
- (void)updateFrameForKey:(id)arg1;
- (id)viewForKey:(id)arg1 state:(int)arg2;
- (void)deactivateAdaptiveKey:(id)arg1;
- (void)hideKeyCaps:(_Bool)arg1;
- (void)activateKeys;
- (void)purgeActiveKeyViews;
- (void)purgeSubviews;
- (void)purgeLayerContents;

@end
