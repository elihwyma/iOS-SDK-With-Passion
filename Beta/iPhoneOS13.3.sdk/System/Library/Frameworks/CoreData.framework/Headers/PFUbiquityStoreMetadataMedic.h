/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSPersistentStore, NSSQLiteConnection, NSString, PFUbiquityLocation;

__attribute__((visibility("hidden")))
@interface PFUbiquityStoreMetadataMedic : NSObject

{
    NSString *_localPeerID;
    PFUbiquityLocation *_ubiquityRootLocation;
    NSString *_storeName;
    NSPersistentStore *_store;
}

@property (nonatomic, readonly) NSString *localPeerID;
@property (nonatomic, readonly) PFUbiquityLocation *ubiquityRootLocation;
@property (nonatomic, readonly) NSString *storeName;
@property (nonatomic, readonly) NSPersistentStore *store;
@property (nonatomic, readonly) NSSQLiteConnection *connection;

- (void)dealloc;
- (id)initWithStore:(id)arg1 localPeerID:(id)arg2 andUbiquityRootLocation:(id)arg3;
- (_Bool)recoverMetadataWithError:(id *)arg1;
- (_Bool)recoverBaselineMetadataWithImportContext:(id)arg1 error:(id *)arg2;
- (_Bool)recoverTransactionLogMetadataWithImportContext:(id)arg1 error:(id *)arg2;
- (_Bool)addTransactionHistoryEntriesForObjectIDs:(id)arg1 withImportContext:(id)arg2 error:(id *)arg3;
- (_Bool)cacheMetadataForTransactionLog:(id)arg1 withImportContext:(id)arg2 error:(id *)arg3;

@end
