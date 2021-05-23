/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSCountedSet, NSDate, NSIndexSet, NSOrderedSet, NSString, PLCloudFeedEntry, PLCloudSharedAlbumInvitationRecord, PLManagedAsset, PLPhotoLibrary;

@protocol PLCloudSharedAlbumProtocol;

@interface PXFeedSectionInfo : NSObject

{
    _Bool _loaded;
    _Bool _shouldBeVisibleWhenEmpty;
    NSString *_transientIdentifier;
    PLManagedAsset *_keyAsset;
    PLManagedAsset *_secondaryKeyAsset;
    PLManagedAsset *_tertiaryKeyAsset;
    PLCloudFeedEntry *_cloudFeedEntry;
    long long _sectionType;
    NSDate *_date;
    id <PLCloudSharedAlbumProtocol> _sharedAlbum;
    NSString *_albumTitle;
    PLCloudSharedAlbumInvitationRecord *_invitationRecord;
    long long _numberOfItems;
    NSIndexSet *_excludedAssetIndexes;
    long long _cachedInboxModelType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) long long inboxModelType;
@property (copy, nonatomic, readonly) NSString *inboxModelTitle;
@property (nonatomic, readonly) unsigned long long assetsCount;
@property (copy, nonatomic, readonly) NSArray *senderNames;
@property (nonatomic, readonly) _Bool userIsSender;
@property (nonatomic, getter=isSeen) _Bool seen;
@property (nonatomic, readonly) NSArray *leftPreviewItems;
@property (nonatomic, readonly) NSArray *assetsForOneUp;
@property (nonatomic, readonly) NSString *ownerFirstName;
@property (nonatomic, readonly) NSString *ownerLastName;
@property (nonatomic, readonly) NSString *ownerEmail;
@property (nonatomic, readonly) NSString *keyCommentGUID;
@property (copy, nonatomic) NSDate *date;
@property (nonatomic, getter=isLoaded) _Bool loaded;
@property (nonatomic) long long cachedInboxModelType;
@property (retain, nonatomic) id <PLCloudSharedAlbumProtocol> sharedAlbum;
@property (copy, nonatomic) NSString *albumTitle;
@property (retain, nonatomic) PLCloudSharedAlbumInvitationRecord *invitationRecord;
@property (nonatomic) long long numberOfItems;
@property (nonatomic) _Bool shouldBeVisibleWhenEmpty;
@property (nonatomic, readonly) _Bool isMine;
@property (nonatomic, readonly) long long inboxModelType;
@property (nonatomic, readonly) PLCloudFeedEntry *cloudFeedEntry;
@property (nonatomic, readonly) long long sectionType;
@property (nonatomic, readonly) PLPhotoLibrary *photoLibrary;
@property (copy, nonatomic) NSIndexSet *excludedAssetIndexes;
@property (copy, nonatomic, readonly) NSString *transientIdentifier;
@property (nonatomic, readonly) NSCountedSet *countsByAssetDisplayType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic, readonly) NSString *uuid;
@property (retain, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *localizedTitle;
@property (retain, nonatomic, readonly) NSOrderedSet *assets;
@property (nonatomic, readonly) unsigned long long approximateCount;
@property (nonatomic, readonly) unsigned long long assetsCount;
@property (nonatomic, readonly) unsigned long long photosCount;
@property (nonatomic, readonly) unsigned long long videosCount;
@property (nonatomic, readonly) _Bool isEmpty;
@property (retain, nonatomic) PLManagedAsset *keyAsset;
@property (retain, nonatomic) PLManagedAsset *secondaryKeyAsset;
@property (retain, nonatomic) PLManagedAsset *tertiaryKeyAsset;
@property (nonatomic, readonly) _Bool canShowComments;
@property (nonatomic, readonly) _Bool canShowAvalancheStacks;
@property (copy, nonatomic, readonly) NSArray *localizedLocationNames;
@property (retain, nonatomic, readonly) NSDate *startDate;
@property (retain, nonatomic, readonly) NSDate *endDate;

+ (id)sectionInfoWithCloudFeedEntry:(id)arg1;
+ (void)beginCachingSharedAlbumsByGUIDs;
+ (void)endCachingSharedAlbumsByGUIDs;
+ (id)defaultPreviewImage;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)reload;
- (void)getPhotoCount:(out unsigned long long *)arg1 videoCount:(out unsigned long long *)arg2;
- (_Bool)canPerformEditOperation:(unsigned long long)arg1;
- (void)updateFromCloudFeedEntry;
- (long long)typeForItemAtIndex:(long long)arg1;
- (id)assetForItemAtIndex:(long long)arg1;
- (_Bool)hasMultipleAssetsForItemAtIndex:(long long)arg1;
- (id)assetsForItemAtIndex:(long long)arg1 maximumCount:(long long)arg2;
- (id)commentForItemAtIndex:(long long)arg1;
- (id)commentTextForItemAtIndex:(long long)arg1;
- (id)likesForItemAtIndex:(long long)arg1;
- (void)getCommentCount:(out unsigned long long *)arg1 likeCount:(out unsigned long long *)arg2;
- (_Bool)containsAsset:(id)arg1;
- (long long)indexOfItemWithAsset:(id)arg1;
- (long long)indexOfItemWithComment:(id)arg1;
- (id)initWithCloudFeedEntry:(id)arg1;
- (_Bool)hasPlayableAssetForItemAtIndex:(long long)arg1;
- (id)captionForItemAtIndex:(long long)arg1;
- (id)batchIDForItemAtIndex:(long long)arg1;
- (long long)indexOfFirstItemFromLastBatch;
- (id)commentsForItemAtIndex:(long long)arg1;
- (_Bool)areAllAssetsLiked;
- (long long)_inboxModelTypeForCloudCommentType;
- (id)sharedAlbumWithGUID:(id)arg1;
- (void)fetchLeftPreviewItemsWithCompletion:(CDUnknownBlockType)arg1;
- (id)_usersInvolvedForLike;
- (id)_usersInvolvedForComment;
- (id)_usersInvolvedForPost;
- (id)_usersInvolvedForResponse;
- (id)_usersInvolvedForInvitation;
- (id)_usersInvolvedForCoalescedEntry;
- (id)_usersInvolved;

@end
