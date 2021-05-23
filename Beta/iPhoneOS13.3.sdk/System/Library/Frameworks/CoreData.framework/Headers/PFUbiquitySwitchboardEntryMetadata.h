/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSPersistentStoreCoordinator, NSSQLCore, NSSet, NSString, PFUbiquityBaselineHeuristics, PFUbiquityLocation, PFUbiquityRecordsImporterSchedulingContext, PFUbiquitySwitchboardCacheWrapper, _PFUbiquityRecordsExporter, _PFUbiquityRecordsImporter;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PFUbiquitySwitchboardEntryMetadata : NSObject

{
    NSString *_localPeerID;
    NSString *_storeName;
    PFUbiquityLocation *_ubiquityRootLocation;
    PFUbiquityLocation *_localRootLocation;
    NSString *_activeModelVersionHash;
    NSMutableSet *_stores;
    NSPersistentStoreCoordinator *_privatePSC;
    NSSQLCore *_privateStore;
    _PFUbiquityRecordsImporter *_importer;
    _PFUbiquityRecordsExporter *_exporter;
    PFUbiquitySwitchboardCacheWrapper *_cacheWrapper;
    PFUbiquityRecordsImporterSchedulingContext *_schedulingContext;
    _Bool _useLocalStorage;
    _Bool _useLocaAccount;
    NSObject<OS_dispatch_queue> *_privateQueue;
    PFUbiquityBaselineHeuristics *_baselineHeuristics;
}

@property (retain, nonatomic) PFUbiquitySwitchboardCacheWrapper *cacheWrapper;
@property (nonatomic, readonly) _PFUbiquityRecordsImporter *importer;
@property (nonatomic, readonly) _PFUbiquityRecordsExporter *exporter;
@property (retain, nonatomic) PFUbiquityLocation *ubiquityRootLocation;
@property (nonatomic, readonly) NSSet *stores;
@property (nonatomic, readonly) NSString *activeModelVersionHash;
@property (nonatomic, readonly) NSPersistentStoreCoordinator *privatePSC;
@property (nonatomic, readonly) NSSQLCore *privateStore;
@property (nonatomic, readonly) PFUbiquityRecordsImporterSchedulingContext *schedulingContext;
@property (nonatomic) _Bool useLocalStorage;
@property (nonatomic) _Bool useLocalAccount;
@property (nonatomic, readonly) PFUbiquityBaselineHeuristics *baselineHeuristics;

- (void)dealloc;
- (void)tearDown;
- (id)initWithLocalPeerID:(id)arg1 ubiquityRootLocation:(id)arg2 localRootLocation:(id)arg3 storeName:(id)arg4 andPrivateQueue:(id)arg5;
- (void)addPersistentStore:(id)arg1;
- (void)removePersistentStore:(id)arg1;

@end
