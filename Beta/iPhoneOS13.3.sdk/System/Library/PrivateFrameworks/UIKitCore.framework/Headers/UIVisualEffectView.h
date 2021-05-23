/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSString, UIImage, UIVisualEffect, _UIVisualEffectBackdropView, _UIVisualEffectEnvironment, _UIVisualEffectHost, _UIVisualEffectViewBackdropCaptureGroup, _UIVisualEffectViewCornerMask;

@interface UIVisualEffectView : UIView <Swift>

{
    UIView *_maskView;
    UIImage *_maskImage;
    _UIVisualEffectViewBackdropCaptureGroup *_captureGroup;
    _UIVisualEffectHost *_backgroundHost;
    _UIVisualEffectHost *_contentHost;
    _UIVisualEffectEnvironment *_environment;
    _Bool _backgroundHostNeedsUpdate;
    _Bool _contentHostNeedsUpdate;
    _Bool _isDependent;
    _Bool _isUpdatingSubviews;
    double _backdropViewBackgroundColorAlpha;
    _Bool _useReducedTransparencyForContentHost;
    _Bool __useKeyframeWorkaround;
    _Bool _useLiveMasking;
    _Bool _allowsDithering;
    _Bool _allowsBlurring;
    UIVisualEffect *_effect;
    _UIVisualEffectViewCornerMask *__cornerMask;
    NSArray *__captureDependents;
    NSArray *_backgroundEffects;
    NSArray *_contentEffects;
}

@property (nonatomic, setter=_setCornerRadius:) double _cornerRadius;
@property (retain, nonatomic, setter=_setCornerMask:) _UIVisualEffectViewCornerMask *_cornerMask;
@property (nonatomic, readonly) _Bool _applyCornerMaskToSelf;
@property (nonatomic, getter=_backdropViewBackgroundColorAlpha, setter=_setBackdropViewBackgroundColorAlpha:) double _backdropViewBackgroundColorAlpha;
@property (nonatomic, setter=_setUseKeyframeWorkaround:) _Bool _useKeyframeWorkaround;
@property (copy, nonatomic, setter=_setCaptureDependents:) NSArray *_captureDependents;
@property (copy, nonatomic) NSArray *backgroundEffects;
@property (copy, nonatomic) NSArray *contentEffects;
@property (nonatomic, getter=_useLiveMasking, setter=_setUseLiveMasking:) _Bool useLiveMasking;
@property (copy, nonatomic, setter=_setGroupName:) NSString *_groupName;
@property (weak, nonatomic, setter=_setCaptureView:) _UIVisualEffectBackdropView *_captureView;
@property (nonatomic, getter=_isNoiseEnabled, setter=_setNoiseEnabled:) _Bool _noiseEnabled;
@property (nonatomic) _Bool allowsDithering;
@property (nonatomic) _Bool allowsBlurring;
@property (nonatomic, readonly) _UIVisualEffectViewBackdropCaptureGroup *_captureGroup;
@property (retain, nonatomic, setter=_setMaskImage:) UIImage *_maskImage;
@property (nonatomic, setter=_setAllowsGroupFiltering:) _Bool _allowsGroupFiltering;
@property (nonatomic, getter=_useReducedTransparencyForContentEffects, setter=_setUseReducedTransparencyForContentEffects:) _Bool useReducedTransparencyForContentEffects;
@property (nonatomic, readonly) UIView *contentView;
@property (copy, nonatomic) UIVisualEffect *effect;

+ (_Bool)supportsSecureCoding;
+ (Class)_contentViewClass;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_commonInit;
- (void)setContentView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithEffect:(id)arg1;
- (void)layoutSubviews;
- (void)_setContinuousCornerRadius:(double)arg1;
- (void)_setCornerRadius:(double)arg1 continuous:(_Bool)arg2 maskedCorners:(unsigned long long)arg3;
- (void)_setEffect:(id)arg1;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)_applyCornerRadiusToSubviews;
- (void)_setMaskView:(id)arg1;
- (double)_continuousCornerRadius;
- (void)_updateEnvironmentAndFlagUpdatesIfNecessary:(CDUnknownBlockType)arg1;
- (void)_configureEffects;
- (void)_updateEffectForAccessibilityChanges:(id)arg1;
- (void)_registerNotifications;
- (void)_unregisterNotifications;
- (void)_updateEffectsFromLegacyEffect;
- (void)_ensureContentHostWithView:(id)arg1;
- (void)_updateSubviews;
- (id)_initialValueForKey:(id)arg1;
- (id)_effectDescriptorForEffects:(id)arg1 usage:(long long)arg2;
- (void)_ensureBackgroundHost;
- (void)_generateWorkaroundKeyframeAnimationsForEffects:(id)arg1;
- (void)_generateDeferredAnimations:(id)arg1;
- (void)_generateEffectAnimations:(id)arg1;
- (void)_generateBackgroundEffects:(id)arg1 contentEffects:(id)arg2;
- (void)_updateSubView:(id)arg1 frame:(struct CGRect)arg2;
- (id)_traitCollectionForChildEnvironment:(id)arg1;
- (id)_maskImageForMaskView:(id)arg1;
- (id)_maskView;
- (void)_addSubview:(id)arg1 positioned:(long long)arg2 relativeTo:(id)arg3;
- (void)_updateEffectForReducedTransparency;
- (void)_resetEffect;
- (void)_updateEffectBackgroundColor;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)_debug;
- (id)_whatsWrongWithThisEffect;
- (void)_updateEffectForSnapshotWillBegin:(id)arg1;
- (void)_updateEffectForSnapshotDidEnd:(id)arg1;
- (void)_updateEffectForAlphaTransitionWillBegin:(id)arg1;
- (void)_updateEffectForAlphaTransitionDidEnd:(id)arg1;
- (void)_setTintOpacity:(double)arg1;
- (id)_contentHost;
- (id)_backgroundHost;
- (id)_colorViewBoundsOverlayCreateIfNecessary:(_Bool)arg1;

@end
