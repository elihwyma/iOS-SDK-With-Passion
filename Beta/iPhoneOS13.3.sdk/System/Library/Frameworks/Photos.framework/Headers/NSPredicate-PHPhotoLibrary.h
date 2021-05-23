/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSPredicate.h>

@interface NSPredicate (PHPhotoLibrary)

+ (id)predicateForAssetsInAssetCollectionWithID:(id)arg1;
+ (id)predicateForCloudInvitationsInAssetCollection:(id)arg1;
+ (id)predicateForCommentsInAsset:(id)arg1;
+ (id)predicateForLikesInAsset:(id)arg1;

@end
