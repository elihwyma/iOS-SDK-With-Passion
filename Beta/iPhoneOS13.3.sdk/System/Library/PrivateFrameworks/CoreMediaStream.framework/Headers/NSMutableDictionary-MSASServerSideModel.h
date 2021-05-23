/*
 Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <Foundation/NSMutableDictionary.h>

@interface NSMutableDictionary (MSASServerSideModel)

+ (id)MSASDictionaryWithCopyOfDictionary:(id)arg1;

- (id)MSASAddDictionary:(id)arg1;
- (id)MSASAddIsGlobalResetSync;
- (id)MSASAddIsAlbumResetSyncAlbumGUID:(id)arg1;
- (id)MSASAddIsLocalChange;
- (id)MSASAddEventIsDueToAlbumDeletionAlbumGUID:(id)arg1;
- (id)MSASAddEventIsDueToAssetCollectionDeletionAssetCollectionGUID:(id)arg1;
- (id)MSASAddNotInterestingKey;
- (id)MSASAddIsErrorRecovery;

@end
