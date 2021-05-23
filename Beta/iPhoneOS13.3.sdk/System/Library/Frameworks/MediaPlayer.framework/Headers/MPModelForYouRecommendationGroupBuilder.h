/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPModelForYouRecommendationItemBuilder, MPMutableSectionedCollection, MPPropertySet, NSDateFormatter, NSDictionary;

@interface MPModelForYouRecommendationGroupBuilder : NSObject

{
    struct {
        unsigned int initialized:1;
        unsigned int groupType:1;
        unsigned int lastUpdatedDate:1;
        unsigned int title:1;
        unsigned int subgroups:1;
        unsigned int loadAdditionalContentURL:1;
        unsigned int refreshURL:1;
    } _requestedGroupProperties;
    MPModelForYouRecommendationItemBuilder *_itemBuilder;
    NSDateFormatter *_lastUpdatedDateFormatter;
    MPPropertySet *_requestedGroupPropertySet;
    MPPropertySet *_requestedItemPropertySet;
    NSDictionary *_storeItemMetadataResults;
    MPMutableSectionedCollection *_flatSectionedItems;
}

@property (nonatomic, readonly) MPPropertySet *requestedGroupPropertySet;
@property (nonatomic, readonly) MPPropertySet *requestedItemPropertySet;
@property (nonatomic, readonly) NSDictionary *storeItemMetadataResults;
@property (nonatomic, readonly) MPMutableSectionedCollection *flatSectionedItems;

+ (id)allSupportedItemProperties;
+ (id)allSupportedGroupProperties;

- (id)modelObjectForRecommendationDictionary:(id)arg1 userIdentity:(id)arg2;
- (id)initWithRequestedGroupPropertySet:(id)arg1 requestedItemPropertySet:(id)arg2 storeItemMetadataResults:(id)arg3 flatSectionedItems:(id)arg4;

@end
