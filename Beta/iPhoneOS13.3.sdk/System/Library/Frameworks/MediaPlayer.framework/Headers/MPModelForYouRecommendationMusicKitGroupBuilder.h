/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPModelForYouRecommendationMusicKitItemBuilder, MPMutableSectionedCollection, MPPropertySet, NSDateFormatter, NSDictionary;

@interface MPModelForYouRecommendationMusicKitGroupBuilder : NSObject

{
    struct {
        unsigned int initialized:1;
        unsigned int groupType:1;
        unsigned int lastUpdatedDate:1;
        unsigned int title:1;
        unsigned int subgroups:1;
        unsigned int loadAdditionalContentURL:1;
        unsigned int refreshURL:1;
        unsigned int displaysAsGridCellInCarPlay:1;
    } _requestedGroupProperties;
    MPModelForYouRecommendationMusicKitItemBuilder *_itemBuilder;
    NSDateFormatter *_lastUpdatedDateFormatter;
    NSDictionary *_storeBagDictionary;
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

- (id)initWithRequestedGroupPropertySet:(id)arg1 requestedItemPropertySet:(id)arg2 storeItemMetadataResults:(id)arg3 flatSectionedItems:(id)arg4 storeBagDictionary:(id)arg5;
- (void)initializeRequestedGroupProperties;
- (id)modelObjectForRecentlyPlayedArray:(id)arg1 userIdentity:(id)arg2;
- (id)modelObjectForRecommendationDictionary:(id)arg1 userIdentity:(id)arg2;

@end
