/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSDictionary, PHFetchResult;

@interface PXCMMMomentsInvitationsDataSourceState : NSObject <Swift>

{
    PHFetchResult *_assetCollections;
    NSDictionary *_invitationsByAssetCollectionObjectID;
}

@property (nonatomic, readonly) PHFetchResult *assetCollections;
@property (nonatomic, readonly) NSDictionary *invitationsByAssetCollectionObjectID;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)stateUpdatedWithChange:(id)arg1 changeDetails:(id *)arg2;
- (id)initWithAssetCollections:(id)arg1 invitationsByAssetCollectionObjectID:(id)arg2;

@end
