/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <CoreThemeDefinition/TDRenditionSpec.h>

@class NSOrderedSet, NSString, TDImageStackAsset, TDThemeCompressionType;

@interface TDLayerStackRenditionSpec : TDRenditionSpec

{
    struct CGSize primitiveCanvasSize;
}

@property (retain, nonatomic) TDImageStackAsset *asset;
@property (nonatomic) struct CGSize primitiveCanvasSize;
@property (retain, nonatomic) NSString *canvasSizeString;
@property (nonatomic) struct CGSize canvasSize;
@property (retain, nonatomic) NSOrderedSet *layerReferences;
@property (retain, nonatomic) TDThemeCompressionType *compressionType;

- (void)awakeFromFetch;
- (void)prepareForDeletion;
- (id)createCSIRepresentationWithCompression:(_Bool)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;
- (_Bool)canBePackedWithDocument:(id)arg1;

@end
