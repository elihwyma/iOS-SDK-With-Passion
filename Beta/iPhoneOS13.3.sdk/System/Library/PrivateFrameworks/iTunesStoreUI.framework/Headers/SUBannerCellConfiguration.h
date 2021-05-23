/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUItemCellConfiguration.h>

@interface SUBannerCellConfiguration : SUItemCellConfiguration

+ (double)minimumRowHeight;
+ (double)rowHeightForContext:(id)arg1 representedObject:(id)arg2;
+ (id)copyDefaultContext;

- (id)init;
- (void)reloadData;
- (void)reloadImages;
- (void)reloadStrings;
- (void)reloadLayoutInformation;
- (id)copyImageDataProvider;
- (void)reloadAfterArtworkLoad;
- (struct CGSize)_imageSizeForLayoutSize:(struct CGSize)arg1;

@end
