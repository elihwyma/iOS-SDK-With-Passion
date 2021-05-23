/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPModelObject.h>

@class MPModelAlbum, MPModelForYouRecommendationGroup, MPModelPlaylist;

@interface MPModelForYouRecommendationItem : MPModelObject

@property (nonatomic) unsigned long long itemType;
@property (retain, nonatomic) MPModelAlbum *album;
@property (retain, nonatomic) MPModelPlaylist *playlist;
@property (weak, nonatomic) MPModelForYouRecommendationGroup *parentGroup;
@property (nonatomic) long long subgroupIndex;
@property (nonatomic, getter=isBackedByStoreItemMetadata) _Bool backedByStoreItemMetadata;
@property (nonatomic, readonly) MPModelForYouRecommendationGroup *subgroup;

+ (id)__album_KEY;
+ (id)__playlist_KEY;
+ (id)__itemType_KEY;
+ (id)requiredStoreLibraryPersonalizationProperties;
+ (id)__backedByStoreItemMetadata_KEY;
+ (id)__parentGroup_KEY;
+ (id)__subgroupIndex_KEY;

- (id)personalizationScopedPropertiesForProperties:(id)arg1;
- (id)relativeModelObjectForStoreLibraryPersonalization;
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1;

@end
