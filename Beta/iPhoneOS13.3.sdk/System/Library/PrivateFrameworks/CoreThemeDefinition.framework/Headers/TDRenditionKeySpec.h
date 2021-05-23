/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <CoreData/NSManagedObject.h>

@class TDAppearance, TDLocalization, TDThemeDeploymentTarget, TDThemeDirection, TDThemeDisplayGamut, TDThemeDrawingLayer, TDThemeElement, TDThemeGlyphSize, TDThemeGlyphWeight, TDThemeGraphicsFeatureSetClass, TDThemeIdiom, TDThemePart, TDThemePresentationState, TDThemeSize, TDThemeState, TDThemeUISizeClass, TDThemeValue;

@interface TDRenditionKeySpec : NSManagedObject

{
    unsigned int _dimension1;
    unsigned int _dimension2;
    unsigned int _scaleFactor;
    unsigned int _subtype;
    unsigned int _nameIdentifier;
    unsigned int _memoryClass;
    struct _renditionkeytoken _stackScratchKey[22];
    struct _renditionkeytoken *_scratchKey;
}

@property (retain, nonatomic) TDThemeState *state;
@property (retain, nonatomic) TDThemeState *previousState;
@property (retain, nonatomic) TDThemePresentationState *presentationState;
@property (retain, nonatomic) TDThemeValue *value;
@property (retain, nonatomic) TDThemeValue *previousValue;
@property (retain, nonatomic) TDThemeSize *size;
@property (retain, nonatomic) TDThemeDirection *direction;
@property (retain, nonatomic) TDThemePart *part;
@property (retain, nonatomic) TDThemeElement *element;
@property (retain, nonatomic) TDThemeDrawingLayer *layer;
@property (retain, nonatomic) TDThemeIdiom *idiom;
@property (retain, nonatomic) TDThemeGraphicsFeatureSetClass *graphicsFeatureSetClass;
@property (retain, nonatomic) TDThemeUISizeClass *sizeClassHorizontal;
@property (retain, nonatomic) TDThemeUISizeClass *sizeClassVertical;
@property (retain, nonatomic) TDThemeDisplayGamut *gamut;
@property (retain, nonatomic) TDThemeDeploymentTarget *target;
@property (retain, nonatomic) TDAppearance *appearance;
@property (retain, nonatomic) TDLocalization *localization;
@property (retain, nonatomic) TDThemeGlyphSize *glyphSize;
@property (retain, nonatomic) TDThemeGlyphWeight *glyphWeight;

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;

- (void)dealloc;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (const struct _renditionkeytoken *)key;
- (unsigned int)scaleFactor;
- (void)setScaleFactor:(unsigned int)arg1;
- (unsigned int)subtype;
- (void)setSubtype:(unsigned int)arg1;
- (const struct _renditionkeyfmt *)keyFormat;
- (unsigned int)dimension1;
- (unsigned int)dimension2;
- (void)setDimension1:(unsigned int)arg1;
- (unsigned int)memoryClass;
- (void)copyAttributesInto:(id)arg1;
- (id)copyDataFromAttributes;
- (void)setAttributesFromCopyData:(id)arg1;
- (void)setDimension2:(unsigned int)arg1;
- (id)dataFromAttributes;
- (void)setAttributesFromData:(id)arg1;
- (unsigned int)nameIdentifier;
- (void)setNameIdentifier:(unsigned int)arg1;
- (void)setMemoryClass:(unsigned int)arg1;
- (long long)attributeCount;
- (void)getKey:(struct _renditionkeytoken *)arg1;
- (id)scaleFactorString;
- (void)setScaleFactorString:(id)arg1;
- (void)setAttributesFromRenditionKey:(const struct _renditionkeytoken *)arg1 withDocument:(id)arg2;
- (id)keyDescription;

@end
