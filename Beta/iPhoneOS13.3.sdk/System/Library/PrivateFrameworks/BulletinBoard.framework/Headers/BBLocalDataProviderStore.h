/*
 Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@protocol BBDataProviderStoreDelegate, OS_dispatch_queue;

@interface BBLocalDataProviderStore : NSObject

{
    id <BBDataProviderStoreDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_serverQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_dataProvidersBySectionID;
    NSMutableDictionary *_dataProvidersByUniversalSectionID;
    NSMutableArray *_localFactories;
}

@property (retain, nonatomic) NSMutableDictionary *dataProvidersBySectionID;
@property (retain, nonatomic) NSMutableDictionary *dataProvidersByUniversalSectionID;
@property (retain, nonatomic) NSMutableArray *localFactories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)localDataProviderStoreWithDelegate:(id)arg1 dataProviderQueue:(id)arg2;

- (void)removeDataProviderWithSectionID:(id)arg1;
- (void)addParentSectionInfo:(id)arg1 displayName:(id)arg2 icon:(id)arg3 universalSectionID:(id)arg4;
- (void)addParentSectionInfo:(id)arg1 displayName:(id)arg2 icon:(id)arg3;
- (id)dataProviderForSectionID:(id)arg1;
- (void)performBlockOnDataProviders:(CDUnknownBlockType)arg1;
- (void)loadAllDataProvidersAndPerformMigration:(_Bool)arg1;
- (id)debugDescriptionWithChildren:(unsigned long long)arg1;
- (id)dataProviderForUniversalSectionID:(id)arg1;
- (void)removeDataProvider:(id)arg1;
- (void)_queue_removeDataProvider:(id)arg1;
- (id)initWithDelegate:(id)arg1 dataProviderQueue:(id)arg2;
- (void)_loadDataProviderPluginBundle:(id)arg1 performMigration:(_Bool)arg2;
- (void)_addDataProviderClass:(Class)arg1 performMigration:(_Bool)arg2;
- (void)_addLocalDataProviderFactoryOfClass:(Class)arg1;
- (void)_queue_addDataProvider:(id)arg1 performMigration:(_Bool)arg2;
- (void)addDataProvider:(id)arg1 performMigration:(_Bool)arg2;

@end
