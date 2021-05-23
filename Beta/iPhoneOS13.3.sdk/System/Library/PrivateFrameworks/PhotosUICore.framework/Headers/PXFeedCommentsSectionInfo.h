/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXFeedSectionInfo.h>

@interface PXFeedCommentsSectionInfo : PXFeedSectionInfo

{
    _Bool __hasLikes;
}

@property (nonatomic, setter=_setHasLikes:) _Bool _hasLikes;

- (id)assets;
- (long long)sectionType;
- (unsigned long long)assetsCount;
- (_Bool)isMine;
- (id)cloudFeedCommentsEntry;
- (void)updateFromCloudFeedEntry;
- (long long)typeForItemAtIndex:(long long)arg1;
- (id)assetForItemAtIndex:(long long)arg1;
- (_Bool)hasMultipleAssetsForItemAtIndex:(long long)arg1;
- (id)assetsForItemAtIndex:(long long)arg1 maximumCount:(long long)arg2;
- (id)commentForItemAtIndex:(long long)arg1;
- (id)commentTextForItemAtIndex:(long long)arg1;
- (id)likesForItemAtIndex:(long long)arg1;
- (void)getCommentCount:(out unsigned long long *)arg1 likeCount:(out unsigned long long *)arg2;
- (_Bool)containsAsset:(id)arg1;
- (long long)indexOfItemWithAsset:(id)arg1;
- (long long)indexOfItemWithComment:(id)arg1;

@end
