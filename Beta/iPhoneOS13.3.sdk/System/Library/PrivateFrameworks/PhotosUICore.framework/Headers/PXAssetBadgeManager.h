/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@interface PXAssetBadgeManager : NSObject

+ (id)defaultManager;

- (struct PXAssetBadgeInfo)badgeInfoForAsset:(id)arg1 inCollection:(id)arg2 options:(unsigned long long)arg3;
- (struct PXAssetBadgeInfo)badgeInfoForCollection:(id)arg1 options:(unsigned long long)arg2;

@end
