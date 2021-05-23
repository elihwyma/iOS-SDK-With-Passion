/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUItemCellConfiguration.h>

@interface SULoadMoreMediaCellConfiguration : SUItemCellConfiguration

{
    double _previousCellHeight;
}

@property (nonatomic) double previousCellHeight;

+ (double)rowHeightForContext:(id)arg1 representedObject:(id)arg2;

- (id)init;
- (id)fontForLabelAtIndex:(unsigned long long)arg1;
- (id)colorForLabelAtIndex:(unsigned long long)arg1 withModifiers:(unsigned long long)arg2;
- (void)reloadImages;
- (void)reloadStrings;
- (void)reloadLayoutInformation;

@end
