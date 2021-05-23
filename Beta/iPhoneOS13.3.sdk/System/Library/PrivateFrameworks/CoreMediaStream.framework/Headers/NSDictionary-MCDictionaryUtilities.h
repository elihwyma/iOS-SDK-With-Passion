/*
 Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <Foundation/NSDictionary.h>

@interface NSDictionary (MCDictionaryUtilities)

- (id)MSMutableDeepCopyWithZone:(struct _NSZone *)arg1;
- (id)MSDeepCopyWithZone:(struct _NSZone *)arg1;
- (id)MSMutableDeepCopy;
- (id)MSDeepCopy;
- (_Bool)MSASIsGlobalResetSync;
- (id)MSASAlbumResetSyncAlbumGUID;
- (_Bool)MSASIsLocalChange;
- (id)MSASEventIsDueToAlbumDeletionAlbumGUID;
- (id)MSASEventIsDueToAssetCollectionDeletionAssetCollectionGUID;
- (_Bool)MSASIsNotInteresting;
- (_Bool)MSASIsErrorRecovery;

@end
