/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPMediaItemArtwork.h>

@class MPArtworkCatalog;

@interface MPConcreteMediaItemArtwork : MPMediaItemArtwork

{
    MPArtworkCatalog *_catalog;
    struct CGRect _bounds;
}

@property (nonatomic, readonly) MPArtworkCatalog *artworkCatalog;

- (struct CGRect)bounds;
- (id)initWithArtworkCatalog:(id)arg1;
- (id)initWithArtworkCatalog:(id)arg1 allowsNetworking:(_Bool)arg2;

@end
