/*
 Image: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
 */

#import <SUMediaItemCellContext.h>

@interface MSTrackListCellContext : SUMediaItemCellContext

{
    _Bool _shouldHideContentRating;
    _Bool _showSubtitle;
}

@property (nonatomic) _Bool showSubtitle;
@property (nonatomic) _Bool shouldHideContentRating;

@end
