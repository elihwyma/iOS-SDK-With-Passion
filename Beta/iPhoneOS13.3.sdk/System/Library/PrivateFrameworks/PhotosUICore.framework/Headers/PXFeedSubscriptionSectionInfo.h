/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXFeedAssetsSectionInfo.h>

@interface PXFeedSubscriptionSectionInfo : PXFeedAssetsSectionInfo

- (long long)sectionType;
- (_Bool)isMine;
- (void)updateFromCloudFeedEntry;

@end
