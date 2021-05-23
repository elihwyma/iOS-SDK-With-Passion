/*
 Image: /System/Library/PrivateFrameworks/AssetViewer.framework/AssetViewer
 */

#import <AssetViewer/ASVTextureConverter.h>

@interface ASVImageIOTextureConverter : ASVTextureConverter

- (_Bool)canConvertTextureWithDescription:(id)arg1;
- (long long)converterType;
- (CDStruct_ba838cea)estimatedMemoryDeltaForTextureWithDescription:(id)arg1;
- (long long)maxNativeDownsamplingFactorForDownsamplingFactor:(long long)arg1 fileType:(long long)arg2;

@end
