/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUFeedViewControllerSpec.h>

__attribute__((visibility("hidden")))
@interface PUFeedViewControllerPadSpec : PUFeedViewControllerSpec

- (struct CGSize)thumbnailSize;
- (long long)promptStyle;
- (_Bool)shouldShowCommentBadgesInCollectionViewType:(long long)arg1;
- (void)configureFeedCollectionViewLayout:(id)arg1 forCollectionViewType:(long long)arg2 collectionViewSize:(struct CGSize)arg3;
- (struct CGSize)minimumVideoTileSize;
- (long long)largeNumberOfSubjectsForLikes;
- (void)configureCommentSeparatorMetrics:(inout struct PUFeedSeparatorMetrics *)arg1;
- (_Bool)shouldUseAspectThumbnails;
- (struct CGSize)thumbnailSizeForImageSize:(struct CGSize)arg1;
- (long long)configurationForSectionHeaderType:(long long)arg1 collectionViewType:(long long)arg2;
- (void)configureSeparatorMetrics:(inout struct PUFeedSeparatorMetrics *)arg1 betweenSectionWithInfo:(id)arg2 andSectionWithInfo:(id)arg3 joined:(_Bool)arg4 collectionViewType:(long long)arg5;
- (void)getReferenceMaximumLength:(double *)arg1 minimumNumberOfTilesToOmit:(long long *)arg2 forSectionType:(long long)arg3 collectionViewType:(long long)arg4;
- (_Bool)shouldHideBarsInLandscape;
- (_Bool)shouldShowInvitationsInPopover;
- (id)gridSpec;
- (id)photosPickerSpec;
- (id)popoverFeedViewControllerSpec;
- (_Bool)shouldUseFullscreenLayout;
- (double)collectionViewContentInset;
- (id)defaultTextAttributesForCollectionViewType:(long long)arg1;
- (id)emphasizedTextAttributesForCollectionViewType:(long long)arg1;
- (void)configureTextCell:(id)arg1 forSectionHeaderWithDescriptionPhrase:(id)arg2 streamDisclosureLabel:(id)arg3 actionText:(id)arg4 buttonType:(long long)arg5 collectionViewType:(long long)arg6 animated:(_Bool)arg7;
- (void)configureTextCell:(id)arg1 forSectionFooterWithActionText:(id)arg2 collectionViewType:(long long)arg3;
- (void)configureTextCell:(id)arg1 forSectionFooterWithDateText:(id)arg2 collectionViewType:(long long)arg3;
- (void)configureTextCell:(id)arg1 forSectionGroupHeaderWithText:(id)arg2 collectionViewType:(long long)arg3;

@end
