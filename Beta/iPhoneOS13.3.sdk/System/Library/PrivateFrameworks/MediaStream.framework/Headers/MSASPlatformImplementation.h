/*
 Image: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
 */

#import <Foundation/NSObject.h>

@class ACAccountStore, NSString;

@interface MSASPlatformImplementation : NSObject

{
    ACAccountStore *_accountStore;
}

@property (retain, nonatomic) ACAccountStore *accountStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)pushTokenForPersonID:(id)arg1;
- (_Bool)shouldEnableNewFeatures;
- (_Bool)shouldLogAtLevel:(int)arg1;
- (Class)pluginClass;
- (id)_accountForPersonID:(id)arg1;
- (_Bool)personIDUsesProductionPushEnvironment:(id)arg1;
- (int)MMCSConcurrentConnectionsCount;
- (_Bool)deviceHasEnoughDiskSpaceRemainingToOperate;
- (_Bool)personIDEnabledForAlbumSharing:(id)arg1;
- (id)MMCSDownloadSocketOptionsForPersonID:(id)arg1;
- (id)MMCSUploadSocketOptionsForPersonID:(id)arg1;
- (void)logLevel:(int)arg1 personID:(id)arg2 albumGUID:(id)arg3 format:(id)arg4;
- (id)albumSharingDaemon;
- (id)pathAlbumSharingDir;
- (id)baseSharingURLForPersonID:(id)arg1;
- (id)personIDsEnabledForAlbumSharing;
- (_Bool)MSASIsAllowedToTransferMetadata;
- (_Bool)MSASIsAllowedToUploadAssets;
- (_Bool)MSASPersonIDIsAllowedToDownloadAssets:(id)arg1;

@end
