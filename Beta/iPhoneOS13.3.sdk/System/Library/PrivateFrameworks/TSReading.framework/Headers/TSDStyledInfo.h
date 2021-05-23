/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDDrawableInfo.h>

@class NSString, TSDReflection, TSDShadow, TSDStroke, TSSStyle;

@interface TSDStyledInfo : TSDDrawableInfo

@property (retain, nonatomic) TSSStyle *style;
@property (copy, nonatomic) TSDReflection *reflection;
@property (copy, nonatomic) TSDShadow *shadow;
@property (copy, nonatomic) TSDStroke *stroke;
@property (nonatomic) float opacity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)objectForProperty:(int)arg1;
- (id)boxedValueForProperty:(int)arg1;
- (id)referencedStyles;
- (void)replaceReferencedStylesUsingBlock:(CDUnknownBlockType)arg1;
- (void)setBoxedValue:(id)arg1 forProperty:(int)arg2;
- (void)setValuesForProperties:(id)arg1;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (void)i_setValue:(id)arg1 forProperty:(int)arg2;
- (Class)styleClass;
- (id)stylesForCopyStyle;
- (id)propertyMapForNewPreset;
- (id)styleIdentifierTemplateForNewPreset;

@end
