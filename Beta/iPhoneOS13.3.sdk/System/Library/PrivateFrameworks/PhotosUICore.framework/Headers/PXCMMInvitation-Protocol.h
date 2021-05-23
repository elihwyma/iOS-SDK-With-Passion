/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/Swift-Protocol.h>

@class NSDate, NSString, PXAssetCollectionActionManager;

@protocol PXCMMInvitationParticipant, PXDisplayAsset, PXUIImageProvider;

@protocol PXCMMInvitation <Swift>

@property (nonatomic, readonly) long long shareType;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) NSDate *expiryDate;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) id <PXCMMInvitationParticipant> owner;
@property (nonatomic, readonly) id <PXDisplayAsset> posterAsset;
@property (nonatomic, readonly) id <PXUIImageProvider> posterMediaProvider;
@property (nonatomic, readonly) PXAssetCollectionActionManager *assetCollectionActionManager;

- (unsigned short)acceptWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)contextForActivityType: /* Error: Ran out of types for this method. */;

@end
