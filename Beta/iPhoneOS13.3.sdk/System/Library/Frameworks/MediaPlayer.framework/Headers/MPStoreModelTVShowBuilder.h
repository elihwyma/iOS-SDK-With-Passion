/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPStoreModelObjectBuilder.h>

@class MPPropertySet, MPStoreModelStoreAssetBuilder;

@interface MPStoreModelTVShowBuilder : MPStoreModelObjectBuilder

{
    MPStoreModelStoreAssetBuilder *_storeAssetBuilder;
    MPPropertySet *_storeAssetProperties;
    struct {
        unsigned int initialized:1;
        unsigned int title:1;
        unsigned int shortTitle:1;
        unsigned int editorNotes:1;
        unsigned int shortEditorNotes:1;
        unsigned int editorialArtwork:1;
        unsigned int artwork:1;
        unsigned int episodeCount:1;
        unsigned int tagline:1;
    } _requestedTVShowProperties;
}

+ (id)allSupportedProperties;

- (id)modelObjectWithStoreItemMetadata:(id)arg1 sourceModelObject:(id)arg2 userIdentity:(id)arg3;

@end
