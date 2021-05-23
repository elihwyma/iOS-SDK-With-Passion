/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@interface PXBadgeHelper : NSObject

+ (id)gradientImage;
+ (id)languageAwareBadgeGradient;
+ (id)loopingBadgeImage;
+ (id)loopingBadgeTemplateImage;
+ (id)cloudBadgeImage;
+ (id)suggestionOnThisDayImage;
+ (id)suggestionRecentlyEditedImage;
+ (id)suggestionRecentFavoriteImage;
+ (id)suggestionGreatPhotoImage;
+ (id)suggestionFacesImage;
+ (id)autoReframingImage;
+ (struct PXAssetBadgeInfo)topLeftPrimaryBadgeInfoForBadgeInfo:(struct PXAssetBadgeInfo)arg1;
+ (struct PXAssetBadgeInfo)topRightBadgeInfoForBadgeInfo:(struct PXAssetBadgeInfo)arg1;
+ (id)livePhotoBadgeShadowedImage;
+ (struct PXAssetBadgeInfo)topLeftSecondaryBadgeInfoForBadgeInfo:(struct PXAssetBadgeInfo)arg1;
+ (id)imageForBadgeInfo:(struct PXAssetBadgeInfo)arg1 style:(long long)arg2 isOverContent:(_Bool)arg3;
+ (id)textForBadgeInfo:(struct PXAssetBadgeInfo)arg1 style:(long long)arg2;
+ (id)favoriteBadgeImage;
+ (id)favoritesCollectionBadgeImage;
+ (id)panoramaBadgeImage;
+ (id)debugBackgroundImageWithBadges:(unsigned long long)arg1;
+ (id)_smallSymbolConfiguration;
+ (id)_favoriteBadgeImageWithSymbolConfiguration:(id)arg1;
+ (id)_mediumSymbolConfiguration;

@end
