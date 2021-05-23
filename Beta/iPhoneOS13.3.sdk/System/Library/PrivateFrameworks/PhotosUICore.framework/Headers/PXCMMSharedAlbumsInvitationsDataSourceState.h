/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSDictionary, PHFetchResult;

@interface PXCMMSharedAlbumsInvitationsDataSourceState : NSObject <Swift>

{
    PHFetchResult *_sharedAlbums;
    NSDictionary *_invitationsBySharedAlbumObjectID;
}

@property (nonatomic, readonly) PHFetchResult *sharedAlbums;
@property (nonatomic, readonly) NSDictionary *invitationsBySharedAlbumObjectID;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)stateUpdatedWithChange:(id)arg1 changeDetails:(id *)arg2;
- (id)initWithSharedAlbums:(id)arg1 invitationsBySharedAlbumObjectID:(id)arg2;

@end
