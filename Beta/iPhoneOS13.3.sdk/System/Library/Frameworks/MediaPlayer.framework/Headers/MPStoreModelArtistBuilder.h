/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPStoreModelObjectBuilder.h>

@interface MPStoreModelArtistBuilder : MPStoreModelObjectBuilder

{
    struct {
        unsigned int initialized:1;
        unsigned int name:1;
        unsigned int hasBiography:1;
        unsigned int hasSocialPosts:1;
        unsigned int artwork:1;
        unsigned int editorialArtwork:1;
        CDStruct_63a3d127 genre;
    } _requestedArtistProperties;
}

+ (id)allSupportedProperties;

- (id)modelObjectWithStoreItemMetadata:(id)arg1 sourceModelObject:(id)arg2 userIdentity:(id)arg3;

@end
