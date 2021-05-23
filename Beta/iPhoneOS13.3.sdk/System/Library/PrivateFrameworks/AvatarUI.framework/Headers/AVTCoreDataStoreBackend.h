/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol AVTAvatarManagedRecordTransformer, AVTAvatarRecordChangeTracker, AVTCoreDataPersistentStoreConfiguration, AVTCoreDataRemoteChangesObserver, AVTStoreBackendDelegate, AVTUILogger;

@interface AVTCoreDataStoreBackend : NSObject

{
    id <AVTStoreBackendDelegate> backendDelegate;
    id <AVTAvatarRecordChangeTracker> _recordChangeTracker;
    id <AVTCoreDataPersistentStoreConfiguration> _configuration;
    id <AVTUILogger> _logger;
    id <AVTAvatarManagedRecordTransformer> _recordTransformer;
    id <AVTCoreDataRemoteChangesObserver> _remoteChangesObserver;
    NSString *_localProcessName;
}

@property (nonatomic, readonly) id <AVTCoreDataPersistentStoreConfiguration> configuration;
@property (nonatomic, readonly) id <AVTUILogger> logger;
@property (nonatomic, readonly) id <AVTAvatarManagedRecordTransformer> recordTransformer;
@property (nonatomic, readonly) id <AVTCoreDataRemoteChangesObserver> remoteChangesObserver;
@property (nonatomic, readonly) NSString *localProcessName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <AVTStoreBackendDelegate> backendDelegate;
@property (nonatomic, readonly) id <AVTAvatarRecordChangeTracker> recordChangeTracker;

+ (_Bool)fetchRequestCriteriaSupported:(long long)arg1;
+ (id)cdFetchRequestForAvatarFetchRequest:(id)arg1 recordTransformer:(id)arg2;
+ (id)cdFetchRequestWithPredicate:(id)arg1 fetchLimit:(long long)arg2;

- (id)avatarsForFetchRequest:(id)arg1 error:(id *)arg2;
- (id)newManagedObjectContext;
- (_Bool)saveAvatar:(id)arg1 error:(id *)arg2;
- (_Bool)saveAvatars:(id)arg1 error:(id *)arg2;
- (_Bool)deleteAvatarWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)duplicateAvatarRecord:(id)arg1 error:(id *)arg2;
- (_Bool)canCreateAvatarWithError:(id *)arg1;
- (id)initWithConfiguration:(id)arg1 recordTransformer:(id)arg2 remoteChangesObserver:(id)arg3 localProcessName:(id)arg4 recordChangeTracker:(id)arg5 environment:(id)arg6;
- (void)startObservingChangesIfNeeded;
- (void)getChangedObjectIDsOfInterest:(id *)arg1 deletedIdentifiers:(id *)arg2 forTransactions:(id)arg3;
- (id)recordIdentifiersForManagedObjectIDs:(id)arg1 managedObjectContext:(id)arg2 error:(id *)arg3;
- (void)contentDidChangeWithIdentifiers:(id)arg1;
- (_Bool)setupStoreIfNeeded:(id *)arg1;
- (void)performWorkWithManagedObjectContext:(CDUnknownBlockType)arg1;
- (unsigned long long)nts_avatarCountWithManagedObjectContext:(id)arg1 error:(id *)arg2;
- (_Bool)nts_saveManagedObjectContext:(id)arg1 error:(id *)arg2;
- (id)initWithConfiguration:(id)arg1 environment:(id)arg2;

@end
