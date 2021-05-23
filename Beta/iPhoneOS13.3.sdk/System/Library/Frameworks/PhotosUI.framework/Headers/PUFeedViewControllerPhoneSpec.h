/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUFeedViewControllerSpec.h>

__attribute__((visibility("hidden")))
@interface PUFeedViewControllerPhoneSpec : PUFeedViewControllerSpec

- (struct CGSize)thumbnailSize;
- (long long)promptStyle;
- (void)configureFeedCollectionViewLayout:(id)arg1 forCollectionViewType:(long long)arg2 collectionViewSize:(struct CGSize)arg3;
- (struct CGSize)minimumVideoTileSize;
- (long long)largeNumberOfSubjectsForLikes;
- (long long)configurationForSectionHeaderType:(long long)arg1 collectionViewType:(long long)arg2;
- (void)getReferenceMaximumLength:(double *)arg1 minimumNumberOfTilesToOmit:(long long *)arg2 forSectionType:(long long)arg3 collectionViewType:(long long)arg4;
- (_Bool)shouldHideBarsInLandscape;
- (id)gridSpec;
- (id)photosPickerSpec;
- (_Bool)shouldUseFullscreenLayout;
- (double)collectionViewContentInset;
- (id)defaultTextAttributesForCollectionViewType:(long long)arg1;
- (id)emphasizedTextAttributesForCollectionViewType:(long long)arg1;
- (void)configureTextCell:(id)arg1 forSectionHeaderWithDescriptionPhrase:(id)arg2 streamDisclosureLabel:(id)arg3 actionText:(id)arg4 buttonType:(long long)arg5 collectionViewType:(long long)arg6 animated:(_Bool)arg7;
- (void)configureTextCell:(id)arg1 forSectionFooterWithActionText:(id)arg2 collectionViewType:(long long)arg3;
- (void)configureTextCell:(id)arg1 forSectionGroupHeaderWithText:(id)arg2 collectionViewType:(long long)arg3;
- (_Bool)canUseSimplePreheatManager;
- (struct UIEdgeInsets)textInsetsForHeadersAndFootersInSectionType:(long long)arg1 collectionViewType:(long long)arg2;

@end
