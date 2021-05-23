/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSIndexSet, NSMutableIndexSet, NSMutableOrderedSet, NSNumber, NSOrderedSet, NSPredicate, NSString, NSURL, PLIndexMapper, PLManagedAsset, PLPhotoLibrary;

@protocol NSObject><NSCopying, PLAlbumProtocol;

@interface PLFilteredAlbum : NSObject

{
    PLIndexMapper *_indexMapper;
    NSMutableIndexSet *_filteredIndexes;
    _Bool _backingAlbumSupportsEdits;
    _Bool _backingAlbumSupportsCloudShared;
    NSMutableOrderedSet *_weak_assets;
    _Bool isObservingContextChanges;
    int filter;
    struct NSObject *_backingAlbum;
    NSPredicate *predicate;
    NSArray *_filterParameters;
}

@property (retain, nonatomic) NSObject<PLAlbumProtocol> *backingAlbum;
@property (nonatomic) int filter;
@property (retain, nonatomic) NSPredicate *predicate;
@property (nonatomic) _Bool isObservingContextChanges;
@property (weak, nonatomic) NSMutableOrderedSet *_assets;
@property (nonatomic, readonly) NSArray *filterParameters;
@property (nonatomic, readonly) PLIndexMapper *indexMapper;
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
@property (retain, nonatomic, readonly) NSMutableOrderedSet *userEditableAssets;
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
@property (nonatomic) _Bool cloudNotificationsEnabled;
@property (copy, nonatomic, readonly) NSIndexSet *filteredIndexes;
@property (copy, nonatomic, readonly) id <NSObject><NSCopying> cachedIndexMapState;

+ (id)filteredIndexesInAlbum:(struct NSObject *)arg1 predicate:(id)arg2;
+ (id)predicateForAlbumFilter:(int)arg1 parameters:(id)arg2 photoLibrary:(id)arg3;
+ (id)descriptionForAlbumFilter:(int)arg1 parameters:(id)arg2;
+ (struct NSObject *)filteredAlbum:(struct NSObject *)arg1 filter:(int)arg2;
+ (struct NSObject *)filteredAlbum:(struct NSObject *)arg1 filter:(int)arg2 parameters:(id)arg3;
+ (struct NSObject *)filteredAlbum:(struct NSObject *)arg1 predicate:(id)arg2;
+ (struct NSObject *)filteredAlbum:(struct NSObject *)arg1 intersectFilter:(int)arg2;
+ (struct NSObject *)unfilteredAlbum:(struct NSObject *)arg1;

- (void)dealloc;
- (unsigned long long)count;
- (_Bool)canPerformEditOperation:(unsigned long long)arg1;
- (id)localizedSharedByLabelAllowsEmail:(_Bool)arg1;
- (id)cloudOwnerDisplayNameIncludingEmail:(_Bool)arg1 allowsEmail:(_Bool)arg2;
- (void)updateCloudLastInterestingChangeDateWithDate:(id)arg1;
- (void)updateCloudLastContributionDateWithDate:(id)arg1;
- (void)getUnseenStartMarkerIndex:(unsigned long long *)arg1 count:(unsigned long long *)arg2 showsProgress:(_Bool *)arg3;
- (void)userDeleteSubscriberRecord:(id)arg1;
- (void)reducePendingItemsCountBy:(unsigned long long)arg1;
- (void)batchFetchAssets:(id)arg1;
- (void)insertInternalUserEditableAssets:(id)arg1 atIndexes:(id)arg2 customExportsInfo:(id)arg3 trimmedVideoPathInfo:(id)arg4 commentText:(id)arg5;
- (id)currentStateForChange;
- (_Bool)mappedDataSourceChanged:(id)arg1 remoteNotificationData:(id)arg2;
- (Class)derivedChangeNotificationClass;
- (_Bool)shouldIncludeObjectAtIndex:(unsigned long long)arg1;
- (id)_cloudSharedBackingAlbum;
- (void)backingContextDidChange:(id)arg1;
- (void)_commonInitWithBackingAlbum:(struct NSObject *)arg1 predicate:(id)arg2;
- (id)initWithBackingAlbum:(struct NSObject *)arg1 predicate:(id)arg2;
- (id)initWithBackingAlbum:(struct NSObject *)arg1 filter:(int)arg2 parameters:(id)arg3;
- (unsigned long long)countOfFilteredAssets;
- (unsigned long long)indexInFilteredAssetsOfObject:(id)arg1;
- (id)objectInFilteredAssetsAtIndex:(unsigned long long)arg1;
- (id)filteredAssetsAtIndexes:(id)arg1;
- (id)_editableBackingAlbum;
- (void)insertObject:(id)arg1 inFilteredAssetsAtIndex:(unsigned long long)arg2;
- (void)removeObjectFromFilteredAssetsAtIndex:(unsigned long long)arg1;
- (void)insertFilteredAssets:(id)arg1 atIndexes:(id)arg2;
- (void)removeFilteredAssetsAtIndexes:(id)arg1;
- (void)replaceObjectInFilteredAssetsAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)replaceFilteredAssetsAtIndexes:(id)arg1 withFilteredValues:(id)arg2;

@end
