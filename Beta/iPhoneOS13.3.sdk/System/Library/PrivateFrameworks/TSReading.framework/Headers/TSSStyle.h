/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSPObject.h>

#import <TSReading/Swift-Protocol.h>

@class NSSet, NSString, TSSPropertyMap, TSSStylesheet;

@interface TSSStyle : TSPObject <Swift>

{
    TSSPropertyMap *mOverridePropertyMap;
    NSString *mName;
    NSString *mStyleIdentifier;
    TSSStyle *mParent;
    _Bool mIsVariation;
    TSSStylesheet *mStylesheet;
}

@property (copy, nonatomic) NSString *name;
@property (nonatomic, readonly) NSString *styleIdentifier;
@property (nonatomic, readonly) TSSStyle *parent;
@property (nonatomic, readonly) TSSStyle *rootAncestor;
@property (nonatomic, readonly) TSSStyle *baseStyleForVariation;
@property (nonatomic, readonly) TSSStyle *firstIdentifiedAncestor;
@property (nonatomic, readonly) TSSStyle *rootIdentifiedAncestor;
@property (nonatomic, readonly) _Bool isVariation;
@property (nonatomic, readonly) _Bool isNamed;
@property (nonatomic, readonly) _Bool isIdentified;
@property (nonatomic, readonly) TSSStylesheet *stylesheet;
@property (nonatomic, readonly) TSSPropertyMap *overridePropertyMap;
@property (nonatomic, readonly) NSSet *children;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)description;
+ (id)properties;
+ (id)defaultStyleWithContext:(id)arg1;
+ (id)defaultValueForProperty:(int)arg1;
+ (int)defaultIntValueForProperty:(int)arg1;
+ (float)defaultFloatValueForProperty:(int)arg1;
+ (double)defaultDoubleValueForProperty:(int)arg1;
+ (id)boxedDefaultValueForProperty:(int)arg1;
+ (_Bool)validateIntValue:(int *)arg1 forProperty:(int)arg2;
+ (_Bool)validateIntValue:(int *)arg1 forProperty:(int)arg2 min:(int)arg3 max:(int)arg4;
+ (_Bool)validateIntValueAsBool:(int *)arg1 forProperty:(int)arg2;
+ (_Bool)validateFloatValue:(float *)arg1 forProperty:(int)arg2;
+ (_Bool)validateDoubleValue:(double *)arg1 forProperty:(int)arg2;
+ (_Bool)validateObjectValue:(id *)arg1 withClass:(Class)arg2 forProperty:(int)arg3;
+ (double)fontSizeForFontSize:(double)arg1 scalingFactor:(double)arg2;
+ (id)defaultPropertyMap;
+ (id)propertiesAllowingNSNull;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setParent:(id)arg1;
- (id)initWithContext:(id)arg1;
- (void)removeAllValues;
- (id)valueForProperty:(int)arg1;
- (void)setValue:(id)arg1 forProperty:(int)arg2;
- (id)objectForProperty:(int)arg1;
- (id)valuesForProperties:(id)arg1;
- (void)setStylesheet:(id)arg1;
- (id)copyWithContext:(id)arg1;
- (void)setIntValue:(int)arg1 forProperty:(int)arg2;
- (float)floatValueForProperty:(int)arg1;
- (void)setFloatValue:(float)arg1 forProperty:(int)arg2;
- (id)propertyMap;
- (_Bool)containsProperty:(int)arg1;
- (void)setDoubleValue:(double)arg1 forProperty:(int)arg2;
- (id)boxedObjectForProperty:(int)arg1;
- (void)removeValueForProperty:(int)arg1;
- (int)intValueForProperty:(int)arg1;
- (double)doubleValueForProperty:(int)arg1;
- (double)CGFloatValueForProperty:(int)arg1;
- (void)setCGFloatValue:(double)arg1 forProperty:(int)arg2;
- (_Bool)definesProperty:(int)arg1;
- (id)initWithContext:(id)arg1 name:(id)arg2 overridePropertyMap:(id)arg3 isVariation:(_Bool)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1 context:(id)arg2;
- (id)boxedValueForProperty:(int)arg1;
- (id)copyPropertyMap;
- (_Bool)overridesProperty:(int)arg1;
- (id)overrideValueForProperty:(int)arg1;
- (int)overrideIntValueForProperty:(int)arg1;
- (float)overrideFloatValueForProperty:(int)arg1;
- (double)overrideDoubleValueForProperty:(int)arg1;
- (id)propertyMapIgnoringStyle:(id)arg1;
- (_Bool)hasEqualValues:(id)arg1 forProperties:(id)arg2;
- (_Bool)p_hasEqualValuesTo:(id)arg1 forProperty:(int)arg2;
- (_Bool)isDescendentOf:(id)arg1;
- (_Bool)isAncestorOf:(id)arg1;
- (_Bool)validateIntValue:(int *)arg1 forProperty:(int)arg2;
- (_Bool)validateIntValue:(int *)arg1 forProperty:(int)arg2 min:(int)arg3 max:(int)arg4;
- (_Bool)validateIntValueAsBool:(int *)arg1 forProperty:(int)arg2;
- (_Bool)validateFloatValue:(float *)arg1 forProperty:(int)arg2;
- (_Bool)validateDoubleValue:(double *)arg1 forProperty:(int)arg2;
- (_Bool)validateObjectValue:(id *)arg1 withClass:(Class)arg2 forProperty:(int)arg3;
- (_Bool)transformsFontSizes;
- (_Bool)isThemeEquivalent:(id)arg1;
- (SEL)mapThemeAssetSelector;
- (id)referencedStyles;
- (void)replaceReferencedStylesUsingBlock:(CDUnknownBlockType)arg1;
- (void)setStyleIdentifier:(id)arg1;
- (id)copyFlattenedWithContext:(id)arg1;
- (void)setBoxedValue:(id)arg1 forProperty:(int)arg2;
- (void)setValuesForProperties:(id)arg1;
- (_Bool)overridesAnyProperty;
- (id)overriddenProperties;
- (unsigned long long)overrideCount;
- (id)boxedOverrideValueForProperty:(int)arg1;
- (double)overrideCGFloatValueForProperty:(int)arg1;
- (id)fullPropertyMap;
- (id)overridePropertyMapWithPropertyMap:(id)arg1 overridePropertyMap:(id)arg2 collapseSourceOverrides:(_Bool)arg3;
- (id)newOverridePropertyMapWithPropertyMap:(id)arg1;
- (_Bool)hasEqualPropertyValues:(id)arg1;
- (_Bool)hasEqualValuesToPropertyMap:(id)arg1 forProperties:(id)arg2;
- (void)setOverridePropertyMap:(id)arg1;
- (_Bool)overridePropertyMapIsEqualTo:(id)arg1;
- (_Bool)isChildOf:(id)arg1;
- (_Bool)isParentOf:(id)arg1;
- (id)boxedValueForProperty:(int)arg1 oldBoxedValue:(id)arg2 transformedByTransform:(struct CGAffineTransform)arg3;
- (void)constrainShadowForSwatchGeneration;
- (void)constrainStrokeForSwatchGeneration;
- (void)fadeReflectionForSwatchGeneration;
- (id)constrainShapeStyleForContext:(id)arg1;

@end
