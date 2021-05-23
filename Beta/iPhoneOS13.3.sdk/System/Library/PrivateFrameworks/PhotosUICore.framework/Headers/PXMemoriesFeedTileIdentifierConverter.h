/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSectionedTileIdentifierConverter.h>

@interface PXMemoriesFeedTileIdentifierConverter : PXSectionedTileIdentifierConverter

- (_Bool)reverseTransformTileIdentifier:(struct PXTileIdentifier *)arg1;
- (_Bool)transformTileIdentifier:(struct PXTileIdentifier *)arg1 group:(unsigned long long *)arg2;
- (_Bool)_shouldConvertIdentifierFromMemory:(id)arg1 toMemory:(id)arg2;
- (_Bool)_shouldConvertIdentifierFromMemoryInfo:(id)arg1 toMemoryInfo:(id)arg2;

@end
