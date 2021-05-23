/*
 Image: /System/Library/PrivateFrameworks/CoreMaterial.framework/CoreMaterial
 */

#import <QuartzCore/CABackdropLayer.h>

@class MTMaterialSettingsInterpolator, NSMutableDictionary, NSString;

@protocol MTRecipeMaterialSettingsProviding;

@interface MTMaterialLayer : CABackdropLayer

{
    MTMaterialSettingsInterpolator *_settingsInterpolator;
    _Bool _needsConfiguring;
    _Bool _blurEnabled;
    _Bool _zoomEnabled;
    CDUnknownBlockType _backdropScaleAdjustment;
    CDUnknownBlockType _defaultBackdropScaleAdjustment;
    _Bool _shouldCrossfade;
    _Bool _contentReplacedWithSnapshot;
    NSMutableDictionary *_pendingChange;
    NSMutableDictionary *_visualStyleCategoriesToProviders;
    struct {
        unsigned int delegateManagesWeighting:1;
        unsigned int delegateImplementsManagingOpacity:1;
        unsigned int delegateImplementsManagingInterpolation:1;
    } _materialLayerDelegateFlags;
    _Bool _reduceTransparencyEnabled;
    _Bool _reduceMotionEnabled;
}

@property (copy, nonatomic) NSString *recipeName;
@property (nonatomic, getter=isBlurEnabled) _Bool blurEnabled;
@property (nonatomic, getter=isZoomEnabled) _Bool zoomEnabled;
@property (copy, nonatomic) CDUnknownBlockType backdropScaleAdjustment;
@property (nonatomic, readonly, getter=_backdropScale) double backdropScale;
@property (copy, nonatomic) CDUnknownBlockType blurRadiusTransformer;
@property (nonatomic) _Bool shouldCrossfade;
@property (nonatomic, getter=isContentReplacedWithSnapshot) _Bool contentReplacedWithSnapshot;
@property (nonatomic, readonly, getter=_privateOpacity) double privateOpacity;
@property (retain, nonatomic, getter=_recipeSettings, setter=_setRecipeSettings:) id <MTRecipeMaterialSettingsProviding> recipeSettings;
@property (copy, nonatomic) CDUnknownBlockType defaultBackdropScaleAdjustment;
@property (copy, nonatomic) NSString *recipe;
@property (copy, nonatomic) NSString *configuration;
@property (nonatomic) double weighting;
@property (nonatomic, getter=isReduceTransparencyEnabled) _Bool reduceTransparencyEnabled;
@property (nonatomic, getter=isReduceMotionEnabled) _Bool reduceMotionEnabled;

+ (void)initialize;
+ (id)_attributeKeys;
+ (id)mt_implicitlyAnimatableKeys;
+ (id)mt_animatableKeys;
+ (id)_unserializedAttributeKeys;
+ (void)_pruneMaterialLayerAtCompletionOfCurrentTransaction:(id)arg1;

- (id)init;
- (void)setDelegate:(id)arg1;
- (void)willChangeValueForKey:(id)arg1;
- (void)didChangeValueForKey:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)setUnsafeUnretainedDelegate:(id)arg1;
- (void)layoutSublayers;
- (_Bool)shouldArchiveValueForKey:(id)arg1;
- (void)prune;
- (void)_reevaluateDefaultShouldCrossfade;
- (void)_setNeedsConfiguring;
- (void)_updateVisualStylingProviders;
- (_Bool)_needsPruning;
- (void)_configureIfNecessaryWithSettingsInterpolator:(id)arg1;
- (void)_configureDelegateFlagsForDelegate:(id)arg1;
- (_Bool)_delegateManagesWeighting;
- (_Bool)_didValueChangeForKey:(id)arg1 withPendingChange:(id)arg2;
- (void)_updateForChangeInRecipeAndConfiguration;
- (void)_updateForChangeInWeighting;
- (_Bool)_isDelegateManagingOpacity;
- (_Bool)_isDelegateManagingInterpolation;
- (void)_configureBackdropLayerIfNecessaryWithSettingsInterpolator:(id)arg1;
- (void)_configureBackdropLayer:(id)arg1 withSettingsInterpolator:(id)arg2 preservingFiltersIfIdentity:(_Bool)arg3;
- (void)_adjustScaleOfBackdropLayer:(id)arg1 ifNecessaryWithSettingsInterpolator:(id)arg2;
- (void)_setPrivateOpacity:(double)arg1 removingIfIdentity:(_Bool)arg2;
- (id)visualStylingProviderForCategory:(id)arg1;
- (void)setRecipeName:(id)arg1 fromBundle:(id)arg2;

@end
