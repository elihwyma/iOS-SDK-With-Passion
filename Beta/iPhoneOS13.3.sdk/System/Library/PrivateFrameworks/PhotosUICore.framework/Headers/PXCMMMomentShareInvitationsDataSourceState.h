/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSDictionary, PHFetchResult;

@interface PXCMMMomentShareInvitationsDataSourceState : NSObject <Swift>

{
    PHFetchResult *_momentShares;
    NSDictionary *_invitationsByMomentShareObjectID;
}

@property (nonatomic, readonly) PHFetchResult *momentShares;
@property (nonatomic, readonly) NSDictionary *invitationsByMomentShareObjectID;

+ (id)new;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)stateUpdatedWithChange:(id)arg1 changeDetails:(id *)arg2;
- (id)initWithMomentShares:(id)arg1 invitationsByMomentShareObjectID:(id)arg2;

@end
