/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUAlbumGadget.h>

@class PUAlbumListCellContentView;

__attribute__((visibility("hidden")))
@interface PUSharedAlbumGadget : PUAlbumGadget

{
    PUAlbumListCellContentView *_albumCellContentView;
}

@property (retain, nonatomic) PUAlbumListCellContentView *albumCellContentView;

- (struct NSObject *)contentView;

@end
