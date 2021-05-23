/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <CoreThemeDefinition/TDSimpleArtworkRenditionSpec.h>

@class NSOrderedSet, TDRadiosityImageRenditionSpec;

@interface TDFlattenedImageRenditionSpec : TDSimpleArtworkRenditionSpec

@property (retain, nonatomic) NSOrderedSet *layerReferences;
@property (retain, nonatomic) TDRadiosityImageRenditionSpec *radiosityImage;

- (id)createCSIRepresentationWithCompression:(_Bool)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;
- (void)drawFlattenedImageIntoContext:(struct CGContext *)arg1 document:(id)arg2;
- (void)addLayerReferencesObject:(id)arg1;
- (_Bool)updatePackingPropertiesWithDocument:(id)arg1;

@end
