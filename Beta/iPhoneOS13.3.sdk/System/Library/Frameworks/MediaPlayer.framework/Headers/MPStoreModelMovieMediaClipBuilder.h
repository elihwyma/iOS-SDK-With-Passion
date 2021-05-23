/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPStoreModelObjectBuilder.h>

@interface MPStoreModelMovieMediaClipBuilder : MPStoreModelObjectBuilder

{
    struct {
        unsigned int initialized:1;
        unsigned int title:1;
        unsigned int previewArtwork:1;
        struct {
            unsigned int identifiers:1;
            unsigned int duration:1;
            unsigned int flavorType:1;
            unsigned int mediaType:1;
            unsigned int url:1;
        } staticAssets;
    } _requestedClipProperties;
}

+ (id)allSupportedProperties;

- (id)modelObjectWithStoreItemMetadata:(id)arg1 sourceModelObject:(id)arg2 userIdentity:(id)arg3;
- (id)mediaClipWithStoreItemMetadata:(id)arg1 storeItemMovieClip:(id)arg2;

@end
