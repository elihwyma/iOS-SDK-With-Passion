/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUItemCellContext.h>

@interface SUMediaItemCellContext : SUItemCellContext

{
    double _artworkWidth;
    long long _hiddenMediaIconTypes;
    _Bool _itemsHaveArtwork;
}

@property (nonatomic) double artworkWidth;
@property (nonatomic) long long hiddenMediaIconTypes;
@property (nonatomic) _Bool itemsHaveArtwork;

- (id)init;

@end
