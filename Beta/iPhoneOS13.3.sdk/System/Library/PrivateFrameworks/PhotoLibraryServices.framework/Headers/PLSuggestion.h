/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSData, NSDate, NSSet, NSString;

@interface PLSuggestion : PLManagedObject

@property (retain, nonatomic) NSString *uuid;
@property (nonatomic) short type;
@property (nonatomic) short subtype;
@property (nonatomic) short state;
@property (nonatomic) short version;
@property (nonatomic) short notificationState;
@property (nonatomic) int cachedCount;
@property (nonatomic) int cachedPhotosCount;
@property (nonatomic) int cachedVideosCount;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSDate *activationDate;
@property (retain, nonatomic) NSDate *relevantUntilDate;
@property (retain, nonatomic) NSDate *expungeDate;
@property (retain, nonatomic) NSData *actionData;
@property (retain, nonatomic) NSData *featuresData;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSSet *keyAssets;
@property (retain, nonatomic) NSSet *representativeAssets;
@property (nonatomic) short cloudLocalState;
@property (nonatomic) short cloudDeleteState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) long long cloudDeletionType;
@property (copy, readonly) NSString *cloudUUIDForDeletion;

+ (id)entityName;
+ (long long)cloudDeletionTypeForTombstone:(id)arg1;
+ (id)cloudUUIDKeyForDeletion;
+ (id)predicateForAllAssetsInSuggestion:(id)arg1 managedObjectContext:(id)arg2;
+ (id)insertIntoPhotoLibrary:(id)arg1 withUUID:(id)arg2;
+ (id)suggestionWithUUID:(id)arg1 inPhotoLibrary:(id)arg2;
+ (id)suggestionsWithUUIDs:(id)arg1 inPhotoLibrary:(id)arg2;
+ (id)_representativeAssetIDsInSuggestion:(id)arg1 managedObjectContext:(id)arg2;
+ (id)predicateForAllMomentsFromRepresentativeAssetsInSuggestion:(id)arg1 managedObjectContext:(id)arg2;
+ (void)resetCloudStateInPhotoLibrary:(id)arg1 hardReset:(_Bool)arg2;
+ (_Bool)_shouldPrefetchSuggestionKeyAssetsInManagedObjectContext:(id)arg1;
+ (id)suggestionsToUploadInPhotoLibrary:(id)arg1 limit:(long long)arg2;
+ (id)suggestionsToPrefetchInManagedObjectContext:(id)arg1;
+ (id)_suggestionsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(long long)arg3 inManagedObjectContext:(id)arg4;
+ (unsigned long long)deletePendingSuggestionsCreatedBefore:(id)arg1 inManagedObjectContext:(id)arg2;
+ (unsigned long long)deleteAllMomentShareSuggestionsInManagedObjectContext:(id)arg1;

- (_Bool)isEmpty;
- (_Bool)isPending;
- (void)delete;
- (void)prepareForDeletion;
- (void)willSave;
- (_Bool)supportsCloudUpload;
- (_Bool)isSyncableChange;
- (id)mutableKeyAssets;
- (id)mutableRepresentativeAssets;
- (void)updateStartAndEndDate;
- (void)updateCachedCounts:(id)arg1;
- (void)replaceKeyAsset:(id)arg1;
- (void)removeRepresentativeAsset:(id)arg1;
- (id)momentShare;
- (id)cplFullRecord;
- (void)updateWithCPLSuggestionChange:(id)arg1 inPhotoLibrary:(id)arg2;
- (id)cplSuggestionChange;

@end
