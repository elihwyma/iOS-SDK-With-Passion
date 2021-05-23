/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPModelForYouRecommendationGroupBuilder, MPModelStoreBrowseContentItemBuilder, MPMutableSectionedCollection, MPPropertySet, NSDictionary;

@interface MPModelForYouRecommendationItemBuilder : NSObject

{
    struct {
        unsigned int initialized:1;
        unsigned int itemType:1;
        unsigned int backedByStoreItemMetadata:1;
        unsigned int album:1;
        unsigned int playlist:1;
        unsigned int subgroup:1;
    } _requestedItemProperties;
    MPModelStoreBrowseContentItemBuilder *_contentItemBuilder;
    MPModelForYouRecommendationGroupBuilder *_subgroupBuilder;
    MPPropertySet *_requestedPropertySet;
    NSDictionary *_storeItemMetadataResults;
    MPMutableSectionedCollection *_flatSectionedItems;
}

@property (nonatomic, readonly) MPPropertySet *requestedPropertySet;
@property (nonatomic, readonly) NSDictionary *storeItemMetadataResults;
@property (nonatomic, readonly) MPMutableSectionedCollection *flatSectionedItems;

+ (id)allSupportedProperties;

- (id)modelObjectForRecommendationChildDictionary:(id)arg1 parentGroup:(id)arg2 subgroupsAccumulator:(id)arg3 userIdentity:(id)arg4;
- (id)initWithRequestedPropertySet:(id)arg1 storeItemMetadataResults:(id)arg2 flatSectionedItems:(id)arg3;

@end
