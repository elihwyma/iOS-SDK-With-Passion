/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSDate, NSString, PHAssetCollection, PHFetchResult, PXAssetCollectionActionManager;

@protocol PXCMMInvitationParticipant, PXDisplayAsset, PXUIImageProvider;

@interface PXCMMSharedAlbumInvitation : NSObject <Swift>

{
    long long _shareType;
    NSString *_title;
    NSString *_subtitle;
    id <PXCMMInvitationParticipant> _owner;
    id <PXDisplayAsset> _posterAsset;
    id <PXUIImageProvider> _posterMediaProvider;
    PHAssetCollection *_assetCollection;
    PHFetchResult *_previewAssetsFetchResult;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long aggregateMediaType;
@property (nonatomic, readonly) PHAssetCollection *assetCollection;
@property (nonatomic, readonly) PHFetchResult *previewAssetsFetchResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long aggregateMediaType;
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

+ (id)new;
+ (id)_participantsForAssetCollection:(id)arg1;
+ (id)_invitationWithAssetCollection:(id)arg1 previewAssetsFetchResult:(id)arg2;
+ (id)invitationWithAssetCollection:(id)arg1;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAssetCollection:(id)arg1;
- (void)acceptWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)contextForActivityType:(unsigned long long)arg1;
- (id)invitationWithUpdatedPreviewAssetsFetchResult:(id)arg1;

@end
