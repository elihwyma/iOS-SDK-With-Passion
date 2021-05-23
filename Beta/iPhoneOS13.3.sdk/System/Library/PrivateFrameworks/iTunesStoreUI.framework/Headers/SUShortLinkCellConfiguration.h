/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUMediaItemCellConfiguration.h>

@interface SUShortLinkCellConfiguration : SUMediaItemCellConfiguration

+ (double)rowHeightForContext:(id)arg1 representedObject:(id)arg2;
+ (id)copyDefaultContext;

- (id)init;
- (id)fontForLabelAtIndex:(unsigned long long)arg1;
- (id)colorForLabelAtIndex:(unsigned long long)arg1 withModifiers:(unsigned long long)arg2;
- (void)reloadStrings;
- (void)reloadLayoutInformation;
- (id)copyImageDataProvider;
- (_Bool)showContentRating;

@end
