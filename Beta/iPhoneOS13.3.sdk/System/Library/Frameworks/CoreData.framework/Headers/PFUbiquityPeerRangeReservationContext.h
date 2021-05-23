/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSManagedObjectContext, NSMutableArray, NSMutableDictionary, NSPersistentStore, NSPersistentStoreCoordinator;

__attribute__((visibility("hidden")))
@interface PFUbiquityPeerRangeReservationContext : NSObject

{
    NSMutableDictionary *_peerEntityNameRangeStartSet;
    NSMutableDictionary *_globalIDToLocalURI;
    NSMutableArray *_unresolvedGlobalObjectIDs;
    NSManagedObjectContext *_moc;
    NSPersistentStore *_store;
    NSPersistentStoreCoordinator *_psc;
    NSMutableDictionary *_storeNameToFetchedMetadata;
    NSArray *_globalObjectIDs;
    long long _numRangesToReserve;
}

@property (nonatomic, readonly) NSPersistentStoreCoordinator *psc;
@property (nonatomic, readonly) NSPersistentStore *store;
@property (nonatomic, readonly) NSManagedObjectContext *moc;
@property (nonatomic, readonly) NSArray *globalObjectIDs;
@property (nonatomic, readonly) long long numRangesToReserve;
@property (nonatomic, readonly) NSDictionary *peerEntityNameRangeStartSet;

- (id)init;
- (void)dealloc;
- (id)initWithPersistentStore:(id)arg1 andGlobalObjectIDs:(id)arg2;
- (void)prepareForRangeReservationWithRangeStart:(id)arg1 andGlobalID:(id)arg2 andEntityName:(id)arg3;
- (id)createLocalIDStringForStoreUUID:(id)arg1 entityName:(id)arg2 andPrimaryKeyString:(id)arg3;
- (_Bool)createNewPeerRangesWithCache:(id)arg1 Error:(id *)arg2;

@end
