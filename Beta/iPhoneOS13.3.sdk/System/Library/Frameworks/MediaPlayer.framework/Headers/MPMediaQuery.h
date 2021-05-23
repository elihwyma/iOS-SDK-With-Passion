/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

#import <MediaPlayer/Swift-Protocol.h>

@class MPMediaItemCollection, MPMediaLibrary, MPMediaPlaylist, MPMediaQueryCriteria, MPMediaQuerySectionInfo, NSArray, NSDictionary, NSSet, NSString;

@interface MPMediaQuery : NSObject <Swift>

{
    MPMediaLibrary *_mediaLibrary;
    MPMediaQueryCriteria *_criteria;
    int _isFilteringDisabled;
    NSArray *_staticEntities;
    long long _staticEntityType;
}

@property (nonatomic, readonly) MPMediaPlaylist *containingPlaylist;
@property (nonatomic, readonly) MPMediaItemCollection *collectionByJoiningCollections;
@property (retain, nonatomic) MPMediaLibrary *mediaLibrary;
@property (copy, nonatomic) NSSet *itemPropertiesToFetch;
@property (copy, nonatomic) NSSet *collectionPropertiesToFetch;
@property (copy, nonatomic, getter=_orderingProperties, setter=_setOrderingProperties:) NSArray *orderingProperties;
@property (copy, nonatomic, getter=_orderingDirectionMappings, setter=_setOrderingDirectionMappings:) NSDictionary *orderingDirectionMappings;
@property (nonatomic) _Bool sortItems;
@property (nonatomic) _Bool useSections;
@property (nonatomic) unsigned long long entityLimit;
@property (nonatomic, readonly) _Bool _hasItems;
@property (nonatomic, readonly) _Bool _hasCollections;
@property (nonatomic, readonly) unsigned long long _countOfItems;
@property (nonatomic, readonly) unsigned long long _countOfCollections;
@property (nonatomic, readonly) _Bool _hasStaticEntities;
@property (nonatomic, readonly) NSArray *itemPersistentIdentifiers;
@property (nonatomic, readonly) NSArray *collectionPersistentIdentifiers;
@property (nonatomic, readonly) MPMediaQuerySectionInfo *itemSectionInfo;
@property (nonatomic, readonly) MPMediaQuerySectionInfo *collectionSectionInfo;
@property (nonatomic, readonly) _Bool excludesEntitiesWithBlankNames;
@property (nonatomic) _Bool includeEntitiesWithBlankNames;
@property (nonatomic, readonly) _Bool specifiesPlaylistItems;
@property (nonatomic) _Bool shouldIncludeNonLibraryEntities;
@property (nonatomic, readonly) _Bool willGroupEntities;
@property (nonatomic) _Bool ignoreSystemFilterPredicates;
@property (nonatomic) _Bool ignoreRestrictionsPredicates;
@property (nonatomic, readonly) MPMediaItemCollection *_representativeCollection;
@property (nonatomic, readonly) long long _representativeCollectionGroupingType;
@property (nonatomic, readonly, getter=isPlaylistItemsQuery) _Bool playlistItemsQuery;
@property (retain, nonatomic) NSSet *filterPredicates;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, readonly) NSArray *collections;
@property (nonatomic) long long groupingType;
@property (nonatomic, readonly) NSArray *itemSections;
@property (nonatomic, readonly) NSArray *collectionSections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (_Bool)supportsSecureCoding;
+ (_Bool)isFilteringDisabled;
+ (void)setFilteringDisabled:(_Bool)arg1;
+ (id)albumsQuery;
+ (id)artistsQuery;
+ (id)songsQuery;
+ (id)playlistsQuery;
+ (id)podcastsQuery;
+ (id)ITunesUQuery;
+ (id)ITunesUAudioQuery;
+ (id)videoITunesUQuery;
+ (id)audiobooksQuery;
+ (id)audibleAudiobooksQuery;
+ (id)compilationsQuery;
+ (id)composersQuery;
+ (id)genresQuery;
+ (void)initFilteringDisabled;
+ (id)albumArtistsQuery;
+ (id)videosQuery;
+ (id)musicVideosQuery;
+ (id)tvShowsQuery;
+ (id)homeVideosQuery;
+ (id)moviesQuery;
+ (id)movieRentalsQuery;
+ (id)audioPodcastsQuery;
+ (id)videoPodcastsQuery;
+ (id)geniusMixesQuery;
+ (id)playlistsRecentlyAddedQuery;
+ (id)playbackHistoryPlaylist;
+ (id)activeGeniusPlaylist;
+ (id)currentDevicePurchasesPlaylist;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_enumerateItemsUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)_isFilteringDisabled;
- (id)initWithProtobufferDecodableObject:(id)arg1 library:(id)arg2;
- (id)initWithProtobufferDecodableObject:(id)arg1;
- (id)protobufferEncodableObjectFromLibrary:(id)arg1;
- (id)protobufferEncodableObject;
- (id)initWithFilterPredicates:(id)arg1;
- (id)initWithFilterPredicates:(id)arg1 library:(id)arg2;
- (id)initWithCriteria:(id)arg1 library:(id)arg2;
- (id)initWithEntities:(id)arg1 entityType:(long long)arg2;
- (id)copyByRemovingStaticEntities;
- (id)copyBySanitizingStaticEntities;
- (void)addFilterPredicate:(id)arg1;
- (void)removeFilterPredicate:(id)arg1;
- (void)_getRepresentativeCollectionGrouping:(long long *)arg1 propertyPredicate:(id *)arg2;
- (unsigned long long)groupingThreshold;
- (id)_valueForAggregateFunction:(id)arg1 onProperty:(id)arg2 entityType:(long long)arg3;
- (id)valueForAggregateFunction:(id)arg1 onItemsForProperty:(id)arg2;
- (id)valueForAggregateFunction:(id)arg1 onCollectionsForProperty:(id)arg2;
- (void)_enumerateUnorderedItemsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateItemPersistentIDsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateUnorderedItemPersistentIDsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateItemsInOrder:(_Bool)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_enumerateItemPersistentIDsInOrder:(_Bool)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_enumerateCollectionsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateUnorderedCollectionsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateCollectionPersistentIDsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateUnorderedCollectionPersistentIDsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateCollectionPersistentIDsInOrder:(_Bool)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_enumerateCollectionsInOrder:(_Bool)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)setStaticEntities:(id)arg1 entityType:(long long)arg2;
- (unsigned long long)_playlistItemPersistentIDForItemPersistentID:(unsigned long long)arg1;
- (id)criteria;
- (void)setCriteria:(id)arg1;
- (id)predicateForProperty:(id)arg1;
- (void)removePredicatesForProperty:(id)arg1;
- (void)setFilterPredicate:(id)arg1 forProperty:(id)arg2;
- (void)setFilterPropertyPredicate:(id)arg1;
- (_Bool)_updatePredicateForProperty:(id)arg1 withPropertyPredicate:(id)arg2;
- (id)MPSD_mediaQueryForDownloadableEntities;
- (id)MPSD_mediaQueryForDownloadingEntities;
- (_Bool)MPSD_hasDownloadableEntities;
- (_Bool)MPSD_hasDownloadingEntities;

@end
