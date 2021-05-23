/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <CoreThemeDefinition/TDRenditionSpec.h>

@class NSSet, TDModelAsset;

@interface TDModelRenditionSpec : TDRenditionSpec

@property (retain, nonatomic) TDModelAsset *asset;
@property (retain, nonatomic) NSSet *childRenditions;
@property (nonatomic) int modelAssetIndex;

+ (id)fetchRequest;

- (id)createCSIRepresentationWithCompression:(_Bool)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;
- (void)processModelObjectsInDocument:(id)arg1;
- (void)processMesh:(id)arg1 withAssetMeshIndex:(unsigned int *)arg2 assetKeySpec:(id)arg3 inDocument:(id)arg4;

@end
