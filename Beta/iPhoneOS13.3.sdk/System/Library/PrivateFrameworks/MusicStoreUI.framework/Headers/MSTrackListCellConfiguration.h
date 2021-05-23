/*
 Image: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
 */

#import <SUMediaItemCellConfiguration.h>

@interface MSTrackListCellConfiguration : SUMediaItemCellConfiguration

{
    CDStruct_3e55db63 _position;
}

@property (nonatomic) CDStruct_3e55db63 position;

+ (double)rowHeightForContext:(id)arg1 representedObject:(id)arg2;
+ (id)copyDefaultContext;

- (id)init;
- (unsigned long long)indexOfLabelForPurchaseAnimation;
- (void)drawBackgroundWithModifiers:(unsigned long long)arg1;
- (id)fontForLabelAtIndex:(unsigned long long)arg1;
- (id)colorForLabelAtIndex:(unsigned long long)arg1 withModifiers:(unsigned long long)arg2;
- (void)reloadImages;
- (void)reloadStrings;
- (void)reloadLayoutInformation;
- (_Bool)showContentRating;

@end
