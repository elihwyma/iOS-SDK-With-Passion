/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSData, NSDate, NSSet, NSString, NSURL;

@interface PLMomentShare : PLManagedObject

@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSString *scopeIdentifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSURL *shareURL;
@property (nonatomic) short status;
@property (nonatomic) short mode;
@property (nonatomic) int assetCount;
@property (nonatomic) int photosCount;
@property (nonatomic) int videosCount;
@property (nonatomic) int uploadedPhotosCount;
@property (nonatomic) int uploadedVideosCount;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSDate *expiryDate;
@property (copy, nonatomic) NSData *thumbnailImageData;
@property (copy, nonatomic) NSData *previewData;
@property (nonatomic) short cloudDeleteState;
@property (nonatomic) _Bool shouldIgnoreBudgets;
@property (nonatomic) _Bool shouldNotifyOnUploadCompletion;
@property (nonatomic) short trashedState;
@property (nonatomic) short localPublishState;
@property (copy, nonatomic) NSString *originatingScopeIdentifier;
@property (retain, nonatomic) NSSet *assets;
@property (retain, nonatomic) NSSet *masters;
@property (retain, nonatomic) NSSet *participants;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) long long cloudDeletionType;
@property (copy, readonly) NSString *cloudUUIDForDeletion;

+ (id)entityName;
+ (long long)cloudDeletionTypeForTombstone:(id)arg1;
+ (id)cloudUUIDKeyForDeletion;
+ (id)listOfSyncedProperties;
+ (id)insertInPhotoLibrary:(id)arg1;
+ (long long)_cloudDeletionTypeForStatus:(short)arg1;
+ (id)updateOrInsertWithCPLMomentShare:(id)arg1 inPhotoLibrary:(id)arg2;
+ (id)_andPredicateWithTrashedState:(id)arg1;
+ (id)momentShareWithUUID:(id)arg1 includeTrashed:(_Bool)arg2 inManagedObjectContext:(id)arg3;
+ (id)momentShareWithScopedIdentifier:(id)arg1 includeTrashed:(_Bool)arg2 inManagedObjectContext:(id)arg3;
+ (id)momentShareWithScopeIdentifier:(id)arg1 includeTrashed:(_Bool)arg2 inManagedObjectContext:(id)arg3;
+ (id)momentShareWithOriginatingScopeIdentifier:(id)arg1 includeTrashed:(_Bool)arg2 inManagedObjectContext:(id)arg3;
+ (id)momentShareWithShareURL:(id)arg1 includeTrashed:(_Bool)arg2 inManagedObjectContext:(id)arg3;
+ (id)_momentSharesWithPredicate:(id)arg1 fetchLimit:(unsigned long long)arg2 inManagedObjectContext:(id)arg3;
+ (id)predicateToExcludeTrashedMomentShares;
+ (id)predicateToExcludeExpiredMomentShares;
+ (void)deleteAllMomentSharesInManagedObjectContext:(id)arg1;
+ (void)deleteExpiredMomentSharesInManagedObjectContext:(id)arg1;
+ (void)fetchMomentShareFromShareURL:(id)arg1 inPhotoLibrary:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

- (id)_owner;
- (void)forceSync;
- (void)prepareForDeletion;
- (void)willSave;
- (id)ownerIdentifier;
- (id)_contactStore;
- (_Bool)supportsCloudUpload;
- (_Bool)isSyncableChange;
- (id)_statusDescription;
- (void)_updateSharingStatusFromParticipant:(id)arg1;
- (void)calculatePropertyValues;
- (id)cplMomentShare;
- (void)updateWithScopeChange:(id)arg1;
- (void)publishWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)shouldAutoAccept;
- (void)trash;
- (_Bool)_isOwnerInContacts;
- (void)acceptWithCompletionHandler:(CDUnknownBlockType)arg1;
- (unsigned long long)estimateUploadSize;
- (id)_modeDescription;

@end
