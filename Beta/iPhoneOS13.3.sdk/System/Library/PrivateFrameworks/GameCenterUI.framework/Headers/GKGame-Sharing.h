/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterFoundation/GKGame.h>

@interface GKGame (Sharing)

+ (void)removeHistoryForGameWithBundleIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (struct CGSize)serverImageSizeForIconStyle:(long long)arg1;
+ (void)preloadIconsForGames:(id)arg1 style:(long long)arg2 handler:(CDUnknownBlockType)arg3;
+ (void)launchAppStoreWithGameCenterGames;
+ (void)gameCenterGamePurchasedWithBundleIdentifier:(id)arg1;

- (id)activityViewControllerPlaceholderItems:(id)arg1;
- (id)activityViewController:(id)arg1 thumbnailForActivityType:(id)arg2;
- (long long)activityViewController:(id)arg1 attachmentULRTypeForActivityType:(id)arg2;
- (id)activityViewControllerSubject:(id)arg1;
- (id)activityViewController:(id)arg1 itemsForActivityType:(id)arg2;
- (id)activityViewControllerOperation:(id)arg1;
- (void)productViewControllerDidFinish:(id)arg1;
- (id)loadIconForStyle:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_gkSetSharingInfo:(id)arg1;
- (id)fetchSharingInfo;
- (id)_gkSharingInfo;
- (id)imageSourceForiOSIconStyle:(long long)arg1;
- (id)macBrushForIconStyle:(long long)arg1;
- (id)_imageURLForIconStyle:(long long)arg1;
- (id)imageSourceForIconStyle:(long long)arg1;
- (id)_imageSourceForIconSize:(struct CGSize)arg1;
- (id)iconForStyle:(long long)arg1;
- (id)cachedIconForStyle:(long long)arg1;
- (id)URLStringForImageWithShineIfNeeded;
- (id)loadIconForSize:(struct CGSize)arg1 scale:(double)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)logoImageWithMaximumSize:(struct CGSize)arg1;
- (void)presentStoreSheetFromViewController:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)launchAppOrPresentStoreSheetFromViewController:(id)arg1;

@end
