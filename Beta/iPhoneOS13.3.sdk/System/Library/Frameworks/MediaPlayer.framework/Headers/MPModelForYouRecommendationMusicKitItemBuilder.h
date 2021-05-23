/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPModelForYouRecommendationMusicKitGroupBuilder, MPModelStoreBrowseContentItemBuilder, MPMutableSectionedCollection, MPPropertySet, NSDictionary;

@interface MPModelForYouRecommendationMusicKitItemBuilder : NSObject

{
    struct {
        _Bool isInitialized;
        _Bool itemType;
        _Bool backedByStoreItemMetadata;
        _Bool album;
        _Bool playlist;
        _Bool subgroup;
    } _requestedItemProperties;
    MPModelStoreBrowseContentItemBuilder *_contentItemBuilder;
    MPModelForYouRecommendationMusicKitGroupBuilder *_subgroupBuilder;
    NSDictionary *_storeBagDictionary;
    MPPropertySet *_requestedPropertySet;
    NSDictionary *_storeItemMetadataResults;
    MPMutableSectionedCollection *_flatSectionedItems;
}

@property (nonatomic, readonly) MPPropertySet *requestedPropertySet;
@property (nonatomic, readonly) NSDictionary *storeItemMetadataResults;
@property (nonatomic, readonly) MPMutableSectionedCollection *flatSectionedItems;

+ (id)allSupportedProperties;

- (id)initWithRequestedPropertySet:(id)arg1 storeItemMetadataResults:(id)arg2 flatSectionedItems:(id)arg3 storeBagDictionary:(id)arg4;
- (id)modelObjectForRecommendationChildDictionary:(id)arg1 parentGroup:(id)arg2 subgroupsAccumulator:(id)arg3 userIdentity:(id)arg4;
- (id)storeItemMetadataWithMusicAPIMetadataDictionary:(id)arg1;
- (id)convertToStoreItemMetadataDictionary:(id)arg1;

@end
