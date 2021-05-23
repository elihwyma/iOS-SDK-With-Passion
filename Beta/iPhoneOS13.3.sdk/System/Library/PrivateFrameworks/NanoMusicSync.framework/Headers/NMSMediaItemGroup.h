/*
 Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

#import <Foundation/NSObject.h>

@class NMSMediaContainerQuotaData;

@interface NMSMediaItemGroup : NSObject

{
    _Bool _manuallyAdded;
    _Bool _downloadedItemsOnly;
    id _referenceObj;
    NMSMediaContainerQuotaData *_quotaData;
    unsigned long long _type;
}

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) id referenceObj;
@property (retain, nonatomic) NMSMediaContainerQuotaData *quotaData;
@property (nonatomic) _Bool manuallyAdded;
@property (nonatomic, readonly) _Bool isEstimate;
@property (nonatomic) _Bool downloadedItemsOnly;

+ (id)itemGroupWithSyncedPlaylistID:(id)arg1 downloadedItemsOnly:(_Bool)arg2;
+ (id)itemGroupWithSyncedAlbumID:(id)arg1 downloadedItemsOnly:(_Bool)arg2;
+ (id)itemGroupWithStoreRecommendation:(id)arg1 downloadedItemsOnly:(_Bool)arg2;
+ (id)itemGroupWithLibraryHeavyRotationRecommendation:(id)arg1 playlistID:(id)arg2 downloadedItemsOnly:(_Bool)arg3;
+ (id)itemGroupWithLibraryHeavyRotationRecommendation:(id)arg1 albumID:(id)arg2 downloadedItemsOnly:(_Bool)arg3;
+ (id)itemGroupWithPodcastStationUUID:(id)arg1 downloadedItemsOnly:(_Bool)arg2;
+ (id)itemGroupWithPodcastFeedURL:(id)arg1 downloadOrder:(unsigned long long)arg2 episodeLimit:(unsigned long long)arg3 manuallyAdded:(_Bool)arg4 downloadedItemsOnly:(_Bool)arg5;
+ (id)itemGroupWithAudiobookIdentifier:(id)arg1 downloadLimit:(unsigned long long)arg2 manuallyAdded:(_Bool)arg3 downloadedItemsOnly:(_Bool)arg4;
+ (id)_itemsForContainerClass:(Class)arg1 containerIDs:(id)arg2 includingNonLibraryContent:(_Bool)arg3 includingDownloadedContentOnly:(_Bool)arg4 manuallyAdded:(_Bool)arg5;
+ (id)itemGroupWithPodcastFeedURL:(id)arg1 downloadOrder:(unsigned long long)arg2;
+ (id)itemGroupWithQuotaRefObj:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)identifiers;
- (id)itemList;
- (id)identifiersForContainerType:(unsigned long long)arg1;
- (id)initWithType:(unsigned long long)arg1 refObj:(id)arg2 manuallyAdded:(_Bool)arg3 quotaRefObj:(id)arg4 downloadedItemsOnly:(_Bool)arg5;
- (_Bool)isEqualToContainer:(id)arg1;

@end
