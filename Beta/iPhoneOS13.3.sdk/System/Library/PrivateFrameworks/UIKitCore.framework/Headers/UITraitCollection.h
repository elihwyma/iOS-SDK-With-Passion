/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSDictionary, NSString, UIImageConfiguration;

@protocol _UIThemeKey;

@interface UITraitCollection : NSObject <Swift>

{
    CDStruct_9b1704d8 _builtinTraits;
    NSDictionary *_clientDefinedTraits;
    NSObject *_environmentWrapper;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=_isFallback) _Bool isFallback;
@property (nonatomic, readonly, getter=_imageConfiguration) UIImageConfiguration *_imageConfiguration;
@property (nonatomic, readonly, getter=_themeKey) id <_UIThemeKey> _themeKey;
@property (nonatomic, readonly) NSString *_appearanceName;
@property (nonatomic, readonly) NSString *_styleEffectAppearanceName;
@property (nonatomic, readonly) long long _semanticContext;
@property (nonatomic, readonly) long long _presentationSemanticContext;
@property (nonatomic, readonly) long long userInterfaceIdiom;
@property (nonatomic, readonly) long long userInterfaceStyle;
@property (nonatomic, readonly) long long layoutDirection;
@property (nonatomic, readonly) double displayScale;
@property (nonatomic, readonly) long long horizontalSizeClass;
@property (nonatomic, readonly) long long verticalSizeClass;
@property (nonatomic, readonly) long long forceTouchCapability;
@property (copy, nonatomic, readonly) NSString *preferredContentSizeCategory;
@property (nonatomic, readonly) long long displayGamut;
@property (nonatomic, readonly) long long accessibilityContrast;
@property (nonatomic, readonly) long long userInterfaceLevel;
@property (nonatomic, readonly) long long legibilityWeight;

+ (_Bool)supportsSecureCoding;
+ (id)traitCollectionWithPreferredContentSizeCategory:(id)arg1;
+ (id)_fallbackTraitCollection;
+ (id)traitCollectionWithUserInterfaceIdiom:(long long)arg1;
+ (id)traitCollectionWithTraitsFromCollections:(id)arg1;
+ (id)_traitCollectionWithVibrancy:(long long)arg1;
+ (id)traitCollectionWithUserInterfaceStyle:(long long)arg1;
+ (id)_currentTraitCollectionIfExists;
+ (void)_setCurrentTraitCollection:(id)arg1;
+ (id)_emptyTraitCollection;
+ (id)traitCollectionWithHorizontalSizeClass:(long long)arg1;
+ (id)traitCollectionWithVerticalSizeClass:(long long)arg1;
+ (id)_defaultTraitCollection;
+ (id)_descriptionForChangeFromTraitCollection:(id)arg1 toTraitCollection:(id)arg2;
+ (id)_traitCollectionWithSemanticContext:(long long)arg1;
+ (void)_performWithCurrentTraitCollection:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (id)traitCollectionWithForceTouchCapability:(long long)arg1;
+ (id)_currentTraitCollectionWithUnmarkedFallback;
+ (id)_traitCollectionForThemeKey:(id)arg1;
+ (id)traitCollectionWithAccessibilityContrast:(long long)arg1;
+ (id)traitCollectionWithDisplayScale:(double)arg1;
+ (void)_setBackgroundThreadFallbackTraitCollection:(id)arg1;
+ (id)traitCollectionWithUserInterfaceLevel:(long long)arg1;
+ (id)traitCollectionWithLegibilityWeight:(long long)arg1;
+ (id)_backgroundThreadFallbackTraitCollection;
+ (id)_threadSafeFallbackTraitCollection;
+ (id)_currentTraitCollectionWithFallback:(_Bool)arg1 markFallback:(_Bool)arg2;
+ (id)traitCollectionWithDisplayGamut:(long long)arg1;
+ (id)traitCollectionWithLayoutDirection:(long long)arg1;
+ (id)traitCollectionWithDisplayCornerRadius:(double)arg1;
+ (id)traitCollectionWithTouchLevel:(long long)arg1;
+ (id)traitCollectionWithInteractionModel:(unsigned long long)arg1;
+ (id)traitCollectionWithPrimaryInteractionModel:(unsigned long long)arg1;
+ (id)traitCollectionWithArtworkSubtype:(unsigned long long)arg1;
+ (id)_traitCollectionWithPresentationSemanticContext:(long long)arg1;
+ (id)_traitCollectionWithDebugHighlight:(long long)arg1;
+ (id)_traitCollectionWithContrast:(long long)arg1;
+ (id)_traitCollectionWithBackgroundLevel:(long long)arg1;
+ (id)_traitCollectionWithEnvironmentWrapper:(id)arg1;
+ (id)traitCollectionWithTextLegibility:(long long)arg1;
+ (id)_traitCollectionWithValue:(id)arg1 forTraitNamed:(id)arg2;
+ (id)currentTraitCollection;
+ (void)setCurrentTraitCollection:(id)arg1;
+ (id)_currentTraitCollection;
+ (id)_traitCollectionFromImageConfiguration:(id)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_description;
- (long long)_textLegibility;
- (_Bool)hasDifferentColorAppearanceComparedToTraitCollection:(id)arg1;
- (id)_fallbackTraitCollection;
- (long long)_vibrancy;
- (_Bool)_changedLegibilityWeightFromTraitCollection:(id)arg1;
- (_Bool)_changedContentSizeCategoryOrLegibilityWeightFromTraitCollection:(id)arg1;
- (unsigned long long)primaryInteractionModel;
- (double)displayCornerRadius;
- (id)_traitCollectionWithIncrementedBackgroundLevel;
- (id)_initWithBuiltinTraitStorage:(CDStruct_9b1704d8 *)arg1 clientDefinedTraits:(id)arg2;
- (unsigned long long)interactionModel;
- (id)_traitCollectionByReplacingValue:(id)arg1 forTraitName:(id)arg2;
- (_Bool)_changedContentSizeCategoryFromTraitCollection:(id)arg1;
- (unsigned long long)artworkSubtype;
- (_Bool)containsTraitsInCollection:(id)arg1;
- (long long)_compare:(id)arg1;
- (long long)_debugHighlight;
- (long long)_contrast;
- (void)_enumerateThemeKeysForLookup:(CDUnknownBlockType)arg1;
- (_Bool)_matchesIntersectionWithTraitCollection:(id)arg1;
- (id)_namedImageDescription;
- (void)_enumerateThemeAppearanceNamesForLookup:(CDUnknownBlockType)arg1;
- (id)_initWithBuiltinTraitStorage:(CDStruct_9b1704d8 *)arg1 clientDefinedTraits:(id)arg2 environmentWrapper:(id)arg3;
- (id)_descriptionWithPrivateTraits:(_Bool)arg1;
- (id)_fallbackCopy;
- (long long)_themeLevelForKey;
- (id)imageConfiguration;
- (id)_traitCollectionRelevantForImageConfiguration;
- (id)_traitsDescription;
- (id)_traitNamesForUnspecifiedBuiltInTraits;
- (long long)_countOfIntersectionWithTraitCollection:(id)arg1;
- (id)_traitNamesOfIntersectionWithTraitCollection:(id)arg1;
- (id)_valueForTraitNamed:(id)arg1;
- (long long)touchLevel;
- (long long)_backgroundLevel;
- (id)_environmentWrapper;
- (id)_invertedTraitCollection;
- (void)performAsCurrentTraitCollection:(CDUnknownBlockType)arg1;

@end
