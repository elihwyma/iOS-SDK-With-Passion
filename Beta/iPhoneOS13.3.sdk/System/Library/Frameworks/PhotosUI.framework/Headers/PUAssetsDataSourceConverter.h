/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUTilingDataSourceConverter.h>

@interface PUAssetsDataSourceConverter : PUTilingDataSourceConverter

+ (id)defaultConverter;

- (_Bool)convertIndexPath:(id *)arg1 tileKind:(id *)arg2 fromDataSource:(id)arg3 toDataSource:(id)arg4;
- (_Bool)shouldReloadTileControllerFromAsset:(id)arg1 toAsset:(id)arg2 tileKind:(id)arg3;

@end
