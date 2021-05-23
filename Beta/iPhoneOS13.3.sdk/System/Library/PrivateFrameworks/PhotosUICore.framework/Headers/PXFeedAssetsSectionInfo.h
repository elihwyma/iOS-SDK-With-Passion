/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXFeedSectionInfo.h>

@interface PXFeedAssetsSectionInfo : PXFeedSectionInfo

- (id)assets;
- (long long)sectionType;
- (void)getPhotoCount:(out unsigned long long *)arg1 videoCount:(out unsigned long long *)arg2;
- (unsigned long long)assetsCount;
- (_Bool)isMine;
- (id)cloudFeedAssetsEntry;
- (void)updateFromCloudFeedEntry;
- (long long)typeForItemAtIndex:(long long)arg1;
- (id)assetForItemAtIndex:(long long)arg1;
- (id)commentForItemAtIndex:(long long)arg1;
- (id)likesForItemAtIndex:(long long)arg1;
- (_Bool)containsAsset:(id)arg1;
- (long long)indexOfItemWithAsset:(id)arg1;
- (_Bool)hasPlayableAssetForItemAtIndex:(long long)arg1;
- (id)captionForItemAtIndex:(long long)arg1;
- (id)batchIDForItemAtIndex:(long long)arg1;
- (long long)indexOfFirstItemFromLastBatch;
- (id)commentsForItemAtIndex:(long long)arg1;
- (id)countsByAssetDisplayType;
- (_Bool)areAllAssetsLiked;

@end
