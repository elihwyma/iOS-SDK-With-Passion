/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSData, NSDate, NSDictionary, NSSet, NSString, NSURL, PLMemory;

@interface PLPersistedMemoryMetadata : NSObject

{
    _Bool _rejected;
    _Bool _favorite;
    _Bool _pending;
    _Bool _userCreated;
    short _category;
    short _subcategory;
    short _notificationState;
    NSString *_uuid;
    NSString *_title;
    NSString *_subtitle;
    NSDate *_creationDate;
    NSString *_keyAssetUUID;
    NSSet *_representativeAssetUUIDs;
    NSSet *_curatedAssetUUIDs;
    NSSet *_extendedCuratedAssetUUIDs;
    NSSet *_movieCuratedAssetUUIDs;
    NSData *_movieData;
    NSDictionary *_movieAssetState;
    long long _photosGraphVersion;
    NSData *_photosGraphData;
    NSData *_assetListPredicate;
    double _score;
    long long _version;
    NSData *_blacklistedFeature;
    long long _playCount;
    long long _shareCount;
    long long _viewCount;
    long long _pendingPlayCount;
    long long _pendingShareCount;
    long long _pendingViewCount;
    PLMemory *_memory;
    NSURL *_metadataURL;
}

@property (retain, nonatomic) PLMemory *memory;
@property (retain, nonatomic) NSURL *metadataURL;
@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSDate *creationDate;
@property (nonatomic, getter=isRejected) _Bool rejected;
@property (nonatomic, getter=isFavorite) _Bool favorite;
@property (nonatomic, getter=isPending) _Bool pending;
@property (nonatomic, getter=isUserCreated) _Bool userCreated;
@property (nonatomic) short category;
@property (nonatomic) short subcategory;
@property (retain, nonatomic) NSString *keyAssetUUID;
@property (retain, nonatomic) NSSet *representativeAssetUUIDs;
@property (retain, nonatomic) NSSet *curatedAssetUUIDs;
@property (retain, nonatomic) NSSet *extendedCuratedAssetUUIDs;
@property (retain, nonatomic) NSSet *movieCuratedAssetUUIDs;
@property (retain, nonatomic) NSData *movieData;
@property (retain, nonatomic) NSDictionary *movieAssetState;
@property (nonatomic) long long photosGraphVersion;
@property (retain, nonatomic) NSData *photosGraphData;
@property (retain, nonatomic) NSData *assetListPredicate;
@property (nonatomic) double score;
@property (nonatomic) short notificationState;
@property (nonatomic) long long version;
@property (retain, nonatomic) NSData *blacklistedFeature;
@property (nonatomic) long long playCount;
@property (nonatomic) long long shareCount;
@property (nonatomic) long long viewCount;
@property (nonatomic) long long pendingPlayCount;
@property (nonatomic) long long pendingShareCount;
@property (nonatomic) long long pendingViewCount;

+ (_Bool)isValidPath:(id)arg1;

- (id)init;
- (id)description;
- (_Bool)_readMetadata;
- (_Bool)isObsolete;
- (id)initWithPLMemory:(id)arg1 metadataURL:(id)arg2;
- (id)initWithPLMemory:(id)arg1 pathManager:(id)arg2;
- (id)initWithPersistedDataAtURL:(id)arg1;
- (void)writePersistedData;
- (void)removePersistedData;
- (id)insertMemoryFromDataInManagedObjectContext:(id)arg1;
- (_Bool)_updateAssetsInMemory:(id)arg1 relationshipName:(id)arg2 persistedAssetUUIDs:(id)arg3 includePendingChanges:(_Bool)arg4;
- (_Bool)updateAssetsInMemory:(id)arg1 includePendingAssetChanges:(_Bool)arg2;
- (_Bool)hasAllAssetsAvailableInManagedObjectContext:(id)arg1 includePendingAssetChanges:(_Bool)arg2;
- (id)_metadataData;
- (void)_saveMetadata;

@end
