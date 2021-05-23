/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSSQLCore, NSSet, NSString, PFUbiquityLocation, PFUbiquitySwitchboardCacheWrapper;

__attribute__((visibility("hidden")))
@interface PFUbiquityStoreExportContext : NSObject

{
    PFUbiquityLocation *_ubiquityRootLocation;
    NSString *_localPeerID;
    NSString *_storeName;
    NSMutableSet *_transactionEntries;
    NSSQLCore *_store;
    PFUbiquitySwitchboardCacheWrapper *_cacheWrapper;
}

@property (nonatomic, readonly) PFUbiquityLocation *ubiquityRootLocation;
@property (nonatomic, readonly) NSString *localPeerID;
@property (nonatomic, readonly) NSString *storeName;
@property (nonatomic, readonly) NSSet *transactionEntries;
@property (retain, nonatomic) NSSQLCore *store;
@property (retain, nonatomic) PFUbiquitySwitchboardCacheWrapper *cacheWrapper;

- (void)dealloc;
- (id)description;
- (id)initWithStoreName:(id)arg1 andUbiquityRootLocation:(id)arg2 forLocalPeerID:(id)arg3;
- (id)addTransactionEntryForGlobalID:(id)arg1 andTransactionType:(int)arg2;

@end
