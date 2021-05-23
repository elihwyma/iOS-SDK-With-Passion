/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUAssetsDataSourceManager.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface PUAssetExplorerReviewScreenAssetsDataSourceManager : PUAssetsDataSourceManager

{
    NSDictionary *__replacementAssetsByUUID;
    PUAssetsDataSourceManager *__originalDataSourceManager;
}

@property (copy, nonatomic, setter=_setReplacementAssetsByUUID:) NSDictionary *_replacementAssetsByUUID;
@property (retain, nonatomic, setter=_setOriginalDataSourceManager:) PUAssetsDataSourceManager *_originalDataSourceManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)_updateDataSource;
- (void)assetsDataSourceManager:(id)arg1 didChangeAssetsDataSource:(id)arg2;
- (id)assetsDataSourceManagerInterestingAssetReferences:(id)arg1;
- (id)initWithOriginalDataSourceManager:(id)arg1;
- (void)detachFromOriginalDataSourceManager;

@end
