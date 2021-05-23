/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSData, NSMutableOrderedSet, NSNumber, NSString, NSURL, PLGenericAlbum;

@interface PLPersistedAlbumMetadata : NSObject

{
    _Bool _isFolder;
    _Bool _pinned;
    _Bool _inTrash;
    _Bool _customSortAscending;
    _Bool _allowsOverwrite;
    int _customSortKey;
    NSString *_title;
    NSString *_uuid;
    NSString *_cloudGUID;
    NSNumber *_kind;
    NSString *_customKeyAssetUUID;
    NSMutableOrderedSet *_assetUUIDs;
    NSString *_importSessionID;
    NSData *_userQueryData;
    PLGenericAlbum *_genericAlbum;
    NSURL *_metadataURL;
}

@property (retain, nonatomic) PLGenericAlbum *genericAlbum;
@property (retain, nonatomic) NSURL *metadataURL;
@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSString *cloudGUID;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSNumber *kind;
@property (nonatomic, getter=isPinned) _Bool pinned;
@property (nonatomic, getter=isInTrash) _Bool inTrash;
@property (nonatomic) _Bool customSortAscending;
@property (nonatomic) int customSortKey;
@property (retain, nonatomic) NSString *customKeyAssetUUID;
@property (retain, nonatomic) NSMutableOrderedSet *assetUUIDs;
@property (retain, nonatomic) NSString *importSessionID;
@property (retain, nonatomic) NSData *userQueryData;
@property (nonatomic, readonly) _Bool isFolder;
@property (nonatomic) _Bool allowsOverwrite;

+ (_Bool)isValidPath:(id)arg1;

- (id)init;
- (id)description;
- (_Bool)_readMetadata;
- (id)insertAlbumFromDataInManagedObjectContext:(id)arg1;
- (id)initWithPersistedDataAtURL:(id)arg1;
- (void)_saveMetadata;
- (id)initWithPLGenericAlbum:(id)arg1 pathManager:(id)arg2;
- (id)initWithTitle:(id)arg1 uuid:(id)arg2 cloudGUID:(id)arg3 kind:(id)arg4 assetUUIDs:(id)arg5 persistedAlbumDataDirectory:(id)arg6;
- (void)persistAlbumData;
- (void)removePersistedAlbumData;
- (void)updateChildrenOrderingInAlbum:(id)arg1 includePendingAssetChanges:(_Bool)arg2;

@end
