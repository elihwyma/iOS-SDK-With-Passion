/*
 Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface MSASPendingChanges : NSObject

{
    NSMutableSet *_pendingAlbumGUIDsWithKeyValueChanges;
    NSMutableSet *_pendingAlbumChanges;
    NSMutableSet *_pendingAlbumGUIDsWithSharingInfoChanges;
    NSMutableDictionary *_pendingAlbumGUIDToAssetCollections;
}

@property (retain, nonatomic) NSMutableSet *pendingAlbumGUIDsWithKeyValueChanges;
@property (retain, nonatomic) NSMutableSet *pendingAlbumChanges;
@property (retain, nonatomic) NSMutableSet *pendingAlbumGUIDsWithSharingInfoChanges;
@property (retain, nonatomic) NSMutableDictionary *pendingAlbumGUIDToAssetCollections;

- (_Bool)hasPendingChanges;
- (id)initWithSyncedKeyValueChangesForAlbumGUIDS:(id)arg1 albumChanges:(id)arg2 accessControlChangesForAlbumGUIDS:(id)arg3;
- (void)removePendingKeyValueChangesForAlbumGUID:(id)arg1;
- (void)addPendingChangesForAlbumGUID:(id)arg1;
- (void)removePendingChangesForAlbumGUID:(id)arg1;
- (void)addPendingAssetCollectionChanges:(id)arg1 forAlbumGUID:(id)arg2;
- (void)removePendingAssetCollection:(id)arg1 forAlbumGUID:(id)arg2;
- (void)removePendingSharingInfoChangesForAlbumGUID:(id)arg1;

@end
