/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSDate, NSDictionary, NSMutableSet, NSString;

@interface PLNotification : NSObject

{
    long long _notificationType;
    NSString *_senderName;
    NSString *_senderEmailAddress;
    NSString *_albumTitle;
    NSString *_photosBatchID;
    NSString *_mainAssetUUID;
    _Bool _mainAssetIsMine;
    _Bool _mainAssetIsVideo;
    _Bool _containsBatchFirstKnownAsset;
    NSMutableSet *_assetUUIDs;
    long long _assetCount;
    NSMutableSet *_placeholderAssetUUIDs;
    NSMutableSet *_lowResThumbAssetUUIDs;
    int _invitationState;
    NSString *_firstCommentGUID;
    NSDate *_commentDate;
    NSString *_commentText;
    long long _commentCount;
    _Bool _commentIsCaption;
    _Bool _suppressAlert;
    NSMutableSet *_senderNames;
    _Bool _forMultipleAsset;
    _Bool _allMultipleAssetIsMine;
    _Bool _isMixedType;
    _Bool _offerToReportAsJunk;
    NSString *_interestingMemoryUUID;
    NSString *_notificationTitle;
    NSString *_notificationSubtitle;
    NSString *_suggestedCMMUUID;
    NSString *_keyMomentShareUUID;
    NSArray *_momentShareUUIDs;
    NSString *_albumUUID;
    NSString *_albumCloudGUID;
    NSDate *_date;
    NSDate *_originalDate;
    NSDate *_expirationDate;
    NSDate *_notificationDeliveryDate;
    NSData *_thumbnailImageData;
}

@property (readonly) long long notificationType;
@property (copy, readonly) NSString *albumUUID;
@property (copy, readonly) NSString *albumCloudGUID;
@property (copy, readonly) NSString *mainAssetUUID;
@property (copy, readonly) NSString *senderEmailAddress;
@property (readonly) NSString *title;
@property (readonly) NSString *message;
@property (copy, readonly) NSDate *date;
@property (copy) NSDate *originalDate;
@property (copy, readonly) NSDate *expirationDate;
@property (readonly) NSString *destinationURLString;
@property (readonly) _Bool hasThumbnail;
@property (readonly) NSArray *suppressionContexts;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) _Bool canMergeWithPersistedNotifications;
@property (readonly) _Bool allAssetsAreFullResolution;
@property (readonly) _Bool thumbnailAssetIsPlaceholder;
@property (readonly) double completionPercentage;
@property _Bool suppressAlert;
@property (copy) NSDate *notificationDeliveryDate;
@property (readonly) NSString *requestIdentifier;
@property (readonly) NSString *keyObjectUUID;
@property (readonly) NSString *interestingMemoryUUID;
@property (retain) NSData *thumbnailImageData;
@property (readonly) _Bool offerToReportAsJunk;
@property (readonly) NSString *photosBatchID;
@property (readonly) NSString *commentText;

+ (id)requestIdentifierByNotificationType:(long long)arg1 keyObjectUUID:(id)arg2 photosBatchID:(id)arg3;
+ (id)_UNCategoryFromNotificationType:(long long)arg1;

- (id)init;
- (id)description;
- (id)_initWithType:(long long)arg1;
- (id)initWithInvitationAlbum:(id)arg1;
- (id)initWithInvitationRecordStatusChanged:(id)arg1;
- (id)initWithMultipleContributorEnabledForAlbum:(id)arg1;
- (id)initWithAssetAdded:(id)arg1 atIndex:(unsigned long long)arg2 toAlbum:(id)arg3;
- (id)initWithAssetsAdded:(id)arg1 toAlbum:(id)arg2;
- (id)_initWithPhotosAddedNotification:(id)arg1 mergedWithNotification:(id)arg2;
- (id)_initWithPhotosAddedNotification:(id)arg1 mergedWithNotificationDictionary:(id)arg2;
- (id)initWithCommentAdded:(id)arg1;
- (id)initWithLikeAdded:(id)arg1;
- (id)_initWithCommentsCount:(long long)arg1 commentDate:(id)arg2 firstCommentGUID:(id)arg3 toAssetWithUUID:(id)arg4 photosBatchID:(id)arg5 mainAssetIsMine:(_Bool)arg6 mainAssetIsVideo:(_Bool)arg7 inAlbumWithTitle:(id)arg8 albumUUID:(id)arg9 albumCloudGUID:(id)arg10 assetUUIDs:(id)arg11 placeholderAssetUUIDs:(id)arg12 lowResThumbAssetUUIDs:(id)arg13;
- (id)_initWithLikesCount:(long long)arg1 commentDate:(id)arg2 firstCommentGUID:(id)arg3 toAssetWithUUID:(id)arg4 photosBatchID:(id)arg5 mainAssetIsMine:(_Bool)arg6 mainAssetIsVideo:(_Bool)arg7 inAlbumWithTitle:(id)arg8 albumUUID:(id)arg9 albumCloudGUID:(id)arg10 assetUUIDs:(id)arg11 placeholderAssetUUIDs:(id)arg12 lowResThumbAssetUUIDs:(id)arg13 senderNames:(id)arg14 forMultipleAsset:(_Bool)arg15 allMultipleAssetIsMine:(_Bool)arg16 isMixedType:(_Bool)arg17;
- (id)initWithInterestingMemoryNotificationWithMemoryUUID:(id)arg1 keyAssetUUID:(id)arg2 notificationTitle:(id)arg3 notificationSubtitle:(id)arg4;
- (id)initWithSuggestedCMMUUID:(id)arg1 keyAssetUUID:(id)arg2 notificationTitle:(id)arg3 notificationSubtitle:(id)arg4;
- (id)initCMMInvitationWithMomentShare:(id)arg1;
- (id)initCMMInvitationReadyToViewWithMomentShare:(id)arg1;
- (id)initWithExpiringMomentShares:(id)arg1;
- (id)initWithExpiringMomentShareUUIDs:(id)arg1 thumbnailImageData:(id)arg2 notificationTitle:(id)arg3 notificationSubtitle:(id)arg4;
- (id)notificationByMergingWithNotification:(id)arg1;
- (id)notificationByMergingWithNotificationDictionary:(id)arg1;
- (_Bool)isCommentPiggyBackedOnPhotosAddedNotification;
- (_Bool)assetWithUUID:(id)arg1 didChangePlaceholderKindTo:(short)arg2 fromOldKind:(short)arg3;
- (id)_localizedCountFormatter;

@end
