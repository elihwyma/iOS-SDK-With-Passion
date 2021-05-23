/*
 Image: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
 */

#import <MediaStream/Swift-Protocol.h>

@protocol MSASPlatform <Swift>

- (unsigned short)pushTokenForPersonID: /* Error: Ran out of types for this method. */;
- (unsigned short)shouldLogAtLevel: /* Error: Ran out of types for this method. */;
- (unsigned short)pluginClass;
- (unsigned short)personIDUsesProductionPushEnvironment: /* Error: Ran out of types for this method. */;
- (unsigned short)logLevel:personID:albumGUID:format: /* Error: Ran out of types for this method. */;
- (unsigned short)albumSharingDaemon;
- (unsigned short)pathAlbumSharingDir;
- (unsigned short)baseSharingURLForPersonID: /* Error: Ran out of types for this method. */;
- (unsigned short)personIDsEnabledForAlbumSharing;
- (unsigned short)MSASIsAllowedToTransferMetadata;
- (unsigned short)MSASIsAllowedToUploadAssets;
- (unsigned short)MSASPersonIDIsAllowedToDownloadAssets: /* Error: Ran out of types for this method. */;

@end
