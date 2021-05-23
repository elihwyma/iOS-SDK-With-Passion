/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUMediaItemCellConfiguration.h>

@interface SUNowPlayingTrackCellConfiguration : SUMediaItemCellConfiguration

+ (double)rowHeightForContext:(id)arg1 representedObject:(id)arg2;
+ (id)copyDefaultContext;

- (id)init;
- (id)fontForLabelAtIndex:(unsigned long long)arg1;
- (id)colorForLabelAtIndex:(unsigned long long)arg1 withModifiers:(unsigned long long)arg2;
- (void)reloadImages;
- (void)reloadStrings;
- (void)reloadLayoutInformation;
- (long long)mediaIconType;
- (_Bool)showContentRating;

@end
