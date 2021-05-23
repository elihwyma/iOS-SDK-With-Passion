/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <CoreThemeDefinition/TDSimpleArtworkRenditionSpec.h>

@class TDFlattenedImageRenditionSpec;

@interface TDRadiosityImageRenditionSpec : TDSimpleArtworkRenditionSpec

@property (retain, nonatomic) TDFlattenedImageRenditionSpec *flattenedImage;

- (id)createCSIRepresentationWithCompression:(_Bool)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;
- (_Bool)updatePackingPropertiesWithDocument:(id)arg1;

@end
