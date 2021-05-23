/*
 Image: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/StoreBookkeeperClient
 */

#import <StoreBookkeeperClient/Swift-Protocol.h>

@protocol SBCDomainSyncServiceProtocol <Swift>

- (unsigned short)beginAccessingPlaybackPositionEntities;
- (unsigned short)endAccessingPlaybackPositionEntities;
- (unsigned short)persistPlaybackPositionEntity:isCheckpoint:completionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)pullLocalPlaybackPositionForEntityIdentifiers:completionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)deletePlaybackPositionEntity: /* Error: Ran out of types for this method. */;
- (unsigned short)updateForeignDatabaseWithValuesFromPlaybackPositionEntity: /* Error: Ran out of types for this method. */;
- (unsigned short)deletePlaybackPositionEntities;

@end
