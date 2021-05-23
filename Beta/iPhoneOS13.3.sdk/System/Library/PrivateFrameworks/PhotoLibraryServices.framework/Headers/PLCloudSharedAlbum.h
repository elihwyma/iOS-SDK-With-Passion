/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLManagedAlbum.h>

@class NSArray, NSDate, NSDictionary, NSMutableOrderedSet, NSNumber, NSObject, NSOrderedSet, NSString, NSURL, PLManagedAsset, PLPhotoLibrary;

@interface PLCloudSharedAlbum : PLManagedAlbum

{
    _Bool _deleteFromDBOnly;
}

@property (retain, nonatomic) NSOrderedSet *assets;
@property (nonatomic) short cloudAlbumSubtype;
@property (retain, nonatomic) NSNumber *cloudRelationshipState;
@property (retain, nonatomic) NSNumber *cloudRelationshipStateLocal;
@property (retain, nonatomic) NSNumber *isOwned;
@property (retain, nonatomic) NSNumber *hasUnseenContent;
@property (retain, nonatomic) NSNumber *cloudOwnerEmailKey;
@property (nonatomic) _Bool cloudNotificationsEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic, readonly) NSString *uuid;
@property (retain, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *localizedTitle;
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
@property (nonatomic, readonly) PLPhotoLibrary *photoLibrary;
@property (retain, nonatomic, readonly) NSNumber *kind;
@property (nonatomic, readonly) int kindValue;
@property (retain, nonatomic, readonly) NSMutableOrderedSet *mutableAssets;
@property (nonatomic) _Bool hasUnseenContentBoolValue;
@property (copy, nonatomic, readonly) NSString *name;
@property (retain, nonatomic, readonly) NSObject *posterImage;
@property (nonatomic, readonly) _Bool isLibrary;
@property (nonatomic, readonly) _Bool isCameraAlbum;
@property (nonatomic, readonly) _Bool isPanoramasAlbum;
@property (nonatomic, readonly) _Bool isPhotoStreamAlbum;
@property (nonatomic, readonly) _Bool isCloudSharedAlbum;
@property (nonatomic, readonly) _Bool isPendingPhotoStreamAlbum;
@property (nonatomic, readonly) _Bool isStandInAlbum;
@property (nonatomic, readonly) _Bool isFolder;
@property (nonatomic, readonly) _Bool isInTrash;
@property (nonatomic, readonly) _Bool isOwnedCloudSharedAlbum;
@property (nonatomic, readonly) _Bool isFamilyCloudSharedAlbum;
@property (nonatomic, readonly) _Bool isMultipleContributorCloudSharedAlbum;
@property (nonatomic, readonly) _Bool isRecentlyAddedAlbum;
@property (nonatomic, readonly) _Bool isUserLibraryAlbum;
@property (nonatomic, readonly) _Bool canContributeToCloudSharedAlbum;
@property (nonatomic, readonly) _Bool shouldDeleteWhenEmpty;
@property (retain, nonatomic) NSString *importSessionID;
@property (retain, nonatomic, readonly) NSURL *groupURL;
@property (copy, nonatomic, readonly) CDUnknownBlockType sortingComparator;
@property (nonatomic) int pendingItemsCount;
@property (nonatomic) int pendingItemsType;
@property (nonatomic) unsigned long long batchSize;
@property (retain, nonatomic) NSString *cloudGUID;
@property (retain, nonatomic) NSDictionary *cloudMetadata;
@property (retain, nonatomic) NSString *cloudOwnerFirstName;
@property (retain, nonatomic) NSString *cloudOwnerLastName;
@property (retain, nonatomic) NSString *cloudOwnerFullName;
@property (retain, nonatomic) NSString *cloudOwnerEmail;
@property (retain, nonatomic) NSString *cloudOwnerHashedPersonID;
@property (nonatomic) _Bool cloudOwnerIsWhitelisted;
@property (retain, nonatomic) NSDate *cloudSubscriptionDate;
@property (retain, nonatomic) NSString *publicURL;
@property (retain, nonatomic) NSOrderedSet *invitationRecords;
@property (retain, nonatomic) NSNumber *unseenAssetsCount;
@property unsigned long long unseenAssetsCountIntegerValue;
@property (retain, nonatomic) NSNumber *cloudPublicURLEnabled;
@property (retain, nonatomic) NSNumber *cloudPublicURLEnabledLocal;
@property (retain, nonatomic) NSNumber *cloudMultipleContributorsEnabled;
@property (retain, nonatomic) NSNumber *cloudMultipleContributorsEnabledLocal;
@property (retain, nonatomic) NSDate *cloudLastInterestingChangeDate;
@property (retain, nonatomic) NSDate *cloudCreationDate;
@property (retain, nonatomic) NSDate *cloudLastContributionDate;
@property (retain, nonatomic) NSString *cloudPersonID;
@property (readonly) int cloudRelationshipStateValue;
@property (readonly) int cloudRelationshipStateLocalValue;
@property (retain, nonatomic, readonly) NSString *localizedSharedWithLabel;
@property (retain, nonatomic, readonly) NSOrderedSet *cloudAlbumSubscriberRecords;
@property (retain, nonatomic, readonly) NSDate *cloudFirstRecentBatchDate;

+ (id)entityName;
+ (id)cloudOwnerDisplayNameWithFirstName:(id)arg1 lastName:(id)arg2 fullName:(id)arg3 emailKey:(id)arg4 includingEmail:(_Bool)arg5 allowsEmail:(_Bool)arg6 emailAddressManager:(id)arg7;
+ (id)localizedSharedByLabelWithFirstName:(id)arg1 lastName:(id)arg2 fullName:(id)arg3 emailKey:(id)arg4 isOwned:(_Bool)arg5 allowsEmail:(_Bool)arg6 emailAddressManager:(id)arg7;
+ (id)cloudSharedAlbumWithGUID:(id)arg1 inLibrary:(id)arg2;
+ (id)cloudSharedAlbumWithObjectID:(id)arg1 managedObjectContext:(id)arg2;
+ (id)allCloudSharedAlbumsInLibrary:(id)arg1;
+ (id)lightweightReimportDirectoryNameWithGUID:(id)arg1 cloudPersonID:(id)arg2;

- (void)delete;
- (void)awakeFromInsert;
- (void)prepareForDeletion;
- (void)willSave;
- (id)localizedSharedByLabelAllowsEmail:(_Bool)arg1;
- (id)cloudOwnerDisplayNameIncludingEmail:(_Bool)arg1 allowsEmail:(_Bool)arg2;
- (void)updateCloudLastInterestingChangeDateWithDate:(id)arg1;
- (void)updateCloudLastContributionDateWithDate:(id)arg1;
- (void)getUnseenStartMarkerIndex:(unsigned long long *)arg1 count:(unsigned long long *)arg2 showsProgress:(_Bool *)arg3;
- (void)userDeleteSubscriberRecord:(id)arg1;
- (id)_expectedKeyAssets:(id)arg1;
- (void)deleteFromDatabaseOnly;
- (id)albumDirectoryPath;
- (id)emailAddressManager;
- (void)publishBatchOfOriginalAssetUUIDs:(id)arg1 withBatchCommentText:(id)arg2 assetsSharingInfos:(id)arg3 customExportsInfo:(id)arg4 andTrimmedVideoPathInfo:(id)arg5 isNewAlbum:(_Bool)arg6;
- (void)persistRecoveryMetadata;

@end
