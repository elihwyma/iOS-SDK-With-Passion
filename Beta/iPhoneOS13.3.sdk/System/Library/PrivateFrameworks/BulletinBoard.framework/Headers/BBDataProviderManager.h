/*
 Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <Foundation/NSObject.h>

#import <BulletinBoard/Swift-Protocol.h>

@class BBLocalDataProviderStore, BBRemoteDataProviderConnectionResolver, NSMutableDictionary, NSString;

@protocol BBDataProviderManagerDelegate, OS_dispatch_queue;

@interface BBDataProviderManager : NSObject <Swift>

{
    id <BBDataProviderManagerDelegate> _delegate;
    BBLocalDataProviderStore *_localDataProviderStore;
    BBRemoteDataProviderConnectionResolver *_remoteDataProviderResolver;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _loadQueueSuspended;
    NSObject<OS_dispatch_queue> *_loadDataProviderQueue;
    NSMutableDictionary *_parentFactoriesBySectionID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (id)dataProviderForSectionID:(id)arg1;
- (void)noteSettingsChanged:(id)arg1 forSectionID:(id)arg2;
- (void)performBlockOnDataProviders:(CDUnknownBlockType)arg1;
- (id)universalSectionIDForSectionID:(id)arg1;
- (id)localSectionIdentifierFromDismissalSectionIdentifer:(id)arg1;
- (void)loadAllDataProvidersAndPerformMigration:(_Bool)arg1;
- (void)reloadIdentityForSectionID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)rebuildSectionInfo:(id)arg1 forSectionID:(id)arg2;
- (id)debugDescriptionWithChildren:(unsigned long long)arg1;
- (void)dataProviderStore:(id)arg1 didAddDataProvider:(id)arg2 performMigration:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dataProviderStore:(id)arg1 didRemoveDataProvider:(id)arg2;
- (void)dataProviderStore:(id)arg1 didAddParentSectionFactory:(id)arg2;
- (id)_queue_getSectionInfoForSectionID:(id)arg1;
- (id)_configureSectionInfo:(id)arg1 forDataProvider:(id)arg2;
- (id)_queue_dataProviderForUniversalSectionID:(id)arg1;
- (id)parentSectionDataProviderFactoryForSectionID:(id)arg1;
- (id)_configureDataProvider:(id)arg1 performMigration:(_Bool)arg2;

@end
