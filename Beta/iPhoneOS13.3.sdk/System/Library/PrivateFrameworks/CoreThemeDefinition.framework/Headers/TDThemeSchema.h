/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <Foundation/NSObject.h>

@class CoreThemeDocument;

@interface TDThemeSchema : NSObject

{
    CoreThemeDocument *_doc;
}

+ (_Bool)loadThemeConstantsForEntity:(id)arg1 inContext:(id)arg2;

- (void)dealloc;
- (id)initWithThemeDocument:(id)arg1;
- (void)loadArtworkDraftTypes;
- (void)resetThemeConstants;
- (void)sanityCheckAndUpdateDocumentIfNecessary;
- (void)_sanityCheckSchemaPartDefinitionsForStandardElement:(const CDStruct_e3362728 *)arg1 withElement:(id)arg2;
- (void)_addSchemaPartDefinitionsForStandardElement:(const CDStruct_e3362728 *)arg1 withElement:(id)arg2;
- (_Bool)_renditionKey:(const struct _renditionkeytoken *)arg1 isEqualToKeyIgnoringLook:(const struct _renditionkeytoken *)arg2;
- (void)_sanityCheckObjectsWithEntityName:(id)arg1 globalDescriptor:(void *)arg2 matchIdentifierOnly:(_Bool)arg3;
- (void)_sanityCheckMetafontSizeSelectorsAndUpdateIfNecessary;
- (void)_sanityCheckSchemaCategoriesAndUpdateIfNecessary;
- (void)_sanityCheckSchemaDefinitionsAndUpdateIfNecessary;
- (void)_sanityCheckSchemaAssets;
- (void)_sanityCheckColorNamesAndUpdateIfNecessary;
- (void)_sanityCheckEffectRenditionsAndUpdateIfNecessary;
- (void)_sanityCheckMicaRenditionsAndUpdateIfNecessary;
- (void)_loadConstantForEntity:(id)arg1 withDescriptor:(const struct _themeconstant *)arg2;
- (void)loadThemeSizes;
- (void)loadThemeValues;
- (void)loadThemeElements;
- (void)loadThemeParts;
- (void)loadThemeStates;
- (void)loadThemePresentationStates;
- (void)loadThemeDirections;
- (void)loadThemeDrawingLayers;
- (void)loadThemeIdioms;
- (void)loadThemeDisplayGamuts;
- (void)loadThemeDeploymentTargets;
- (void)loadThemeCompressionTypes;
- (void)loadTexturePixelFormats;
- (void)loadThemeTextureFaces;
- (void)loadThemeTextureInterpretations;
- (void)loadThemeGraphicsFeatureSetClasses;
- (void)loadThemeUISizeClasses;
- (void)loadIterationTypes;
- (void)loadRenditionTypes;
- (void)loadRenditionSubtypes;
- (void)loadColorStatuses;
- (void)loadMetafontSelectors;
- (void)loadMetafontSizes;
- (void)loadColorNames;
- (void)loadSchemaCategories;
- (void)loadSchemaDefinitions;
- (void)loadEffectConstants;
- (void)loadTemplateRenderingModeConstants;
- (void)loadGlyphSizeConstants;
- (void)loadGlyphWeightConstants;
- (void)loadBasicThemePart;
- (void)loadStandardEffectDefinitions;

@end
