/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXFeedTestSectionInfo.h>

@class NSArray;

@interface PXFeedTestAssetsSectionInfo : PXFeedTestSectionInfo

{
    NSArray *_plAssets;
}

@property (nonatomic, readonly) NSArray *plAssets;

- (long long)sectionType;
- (id)initWithPhotoLibrary:(id)arg1;
- (long long)typeForItemAtIndex:(long long)arg1;
- (id)assetForItemAtIndex:(long long)arg1;
- (id)countsByAssetDisplayType;
- (id)_fetchPhotoAssets:(long long)arg1;

@end
