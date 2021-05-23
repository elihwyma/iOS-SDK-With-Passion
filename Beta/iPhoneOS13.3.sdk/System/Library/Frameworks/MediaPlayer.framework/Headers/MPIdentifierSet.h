/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

#import <MediaPlayer/Swift-Protocol.h>

@class MPModelKind, NSArray, NSString;

@protocol MPLocalLibraryIdentifiers, MPPersonalStoreIdentifiers, MPRadioIdentifiers, MPUniversalStoreIdentifiers;

@interface MPIdentifierSet : NSObject <Swift>

{
    _Bool _shouldExcludeFromShuffle;
    _Bool _placeholder;
    NSString *_databaseID;
    long long _persistentID;
    long long _containedPersistentID;
    long long _syncID;
    NSString *_personID;
    unsigned long long _cloudID;
    NSString *_cloudAlbumID;
    NSString *_recommendationID;
    NSString *_globalPlaylistID;
    long long _adamID;
    NSArray *_formerAdamIDs;
    NSString *_universalCloudLibraryID;
    long long _purchasedAdamID;
    long long _subscriptionAdamID;
    NSString *_socialProfileID;
    NSString *_informalMediaClipID;
    NSString *_informalStaticAssetID;
    NSString *_stationStringID;
    NSString *_stationHash;
    long long _stationID;
    NSString *_containerUniqueID;
    NSString *_handoffCorrelationID;
    NSString *_contentItemID;
    NSString *_lyricsID;
    NSString *_vendorID;
    MPModelKind *_modelKind;
}

@property (copy, nonatomic) NSString *containerUniqueID;
@property (copy, nonatomic) NSString *handoffCorrelationID;
@property (copy, nonatomic) NSString *lyricsID;
@property (nonatomic) _Bool shouldExcludeFromShuffle;
@property (nonatomic, getter=isPlaceholder) _Bool placeholder;
@property (copy, nonatomic) NSString *vendorID;
@property (nonatomic, readonly) NSString *humanDescription;
@property (copy, nonatomic) NSString *globalPlaylistID;
@property (nonatomic) long long deviceLibraryPersistentID;
@property (nonatomic) long long storeAdamID;
@property (nonatomic) long long storeSubscriptionAdamID;
@property (copy, nonatomic) NSString *radioStationStringID;
@property (nonatomic) long long radioStationID;
@property (nonatomic) long long storePurchasedAdamID;
@property (copy, nonatomic) NSString *cloudUniversalLibraryID;
@property (nonatomic) long long syncID;
@property (copy, nonatomic) NSString *contentItemID;
@property (copy, nonatomic) NSArray *formerStoreAdamIDs;
@property (copy, nonatomic) NSString *socialProfileID;
@property (copy, nonatomic) NSString *storeCloudAlbumID;
@property (nonatomic) unsigned long long storeCloudID;
@property (copy, nonatomic) NSString *radioStationHash;
@property (copy, nonatomic) NSString *storeRecommendationID;
@property (copy, nonatomic) NSString *informalMediaClipID;
@property (copy, nonatomic) NSString *informalStaticAssetID;
@property (nonatomic, readonly) MPModelKind *modelKind;
@property (nonatomic, readonly) id <MPLocalLibraryIdentifiers> library;
@property (nonatomic, readonly) id <MPPersonalStoreIdentifiers> personalizedStore;
@property (nonatomic, readonly) id <MPUniversalStoreIdentifiers> universalStore;
@property (nonatomic, readonly) id <MPRadioIdentifiers> radio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *databaseID;
@property (nonatomic, readonly) long long persistentID;
@property (nonatomic, readonly) long long containedPersistentID;
@property (nonatomic, readonly) NSString *personID;
@property (nonatomic, readonly) unsigned long long cloudID;
@property (copy, nonatomic, readonly) NSString *cloudAlbumID;
@property (copy, nonatomic, readonly) NSString *recommendationID;
@property (nonatomic, readonly) long long adamID;
@property (copy, nonatomic, readonly) NSArray *formerAdamIDs;
@property (copy, nonatomic, readonly) NSString *universalCloudLibraryID;
@property (nonatomic, readonly) long long purchasedAdamID;
@property (nonatomic, readonly) long long subscriptionAdamID;
@property (copy, nonatomic, readonly) NSString *stationStringID;
@property (copy, nonatomic, readonly) NSString *stationHash;
@property (nonatomic, readonly) long long stationID;

+ (_Bool)supportsSecureCoding;
+ (id)emptyIdentifierSet;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)unionSet:(id)arg1;
- (_Bool)intersectsSet:(id)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (void)setCloudID:(unsigned long long)arg1;
- (void)setPersistentID:(long long)arg1;
- (id)_stateDumpObject;
- (void)setStationStringID:(id)arg1;
- (void)setLibraryIdentifiersWithDatabaseID:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)setPersonalStoreIdentifiersWithPersonID:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)setUniversalStoreIdentifiersWithBlock:(CDUnknownBlockType)arg1;
- (void)setRadioIdentifiersWithBlock:(CDUnknownBlockType)arg1;
- (void)setStationHash:(id)arg1;
- (void)setStationID:(long long)arg1;
- (void)setAdamID:(long long)arg1;
- (void)setFormerAdamIDs:(id)arg1;
- (void)setUniversalCloudLibraryID:(id)arg1;
- (void)setPurchasedAdamID:(long long)arg1;
- (void)setSubscriptionAdamID:(long long)arg1;
- (void)setCloudAlbumID:(id)arg1;
- (void)setRecommendationID:(id)arg1;
- (void)setContainedPersistentID:(long long)arg1;
- (id)_initWithModelKind:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)initWithModelKind:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)copyWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)hasCommonIdentifierWithIdentifierSet:(id)arg1;
- (id)identifierDescriptions;
- (void)_setDefaultDatabaseIDIfNeeded;
- (void)_setDefaultPersonIDIfNeeded;

@end
