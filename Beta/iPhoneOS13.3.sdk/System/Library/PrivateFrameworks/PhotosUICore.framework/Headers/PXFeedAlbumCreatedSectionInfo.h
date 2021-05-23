/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXFeedSectionInfo.h>

@interface PXFeedAlbumCreatedSectionInfo : PXFeedSectionInfo

- (long long)sectionType;
- (_Bool)isMine;
- (void)updateFromCloudFeedEntry;
- (long long)typeForItemAtIndex:(long long)arg1;

@end
