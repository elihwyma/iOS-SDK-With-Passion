/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <CoreThemeDefinition/TDSimpleArtworkRenditionSpec.h>

@class NSSet;

@interface TDVectorGlyphRenditionSpec : TDSimpleArtworkRenditionSpec

@property (retain, nonatomic) NSSet *avaliablePointSizes;

+ (id)fetchRequest;

- (id)createCSIRepresentationWithCompression:(_Bool)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;
- (_Bool)canBePackedWithDocument:(id)arg1;

@end
