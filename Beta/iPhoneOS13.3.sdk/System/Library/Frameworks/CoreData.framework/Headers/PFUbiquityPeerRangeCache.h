/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSPersistentStore, NSString;

__attribute__((visibility("hidden")))
@interface PFUbiquityPeerRangeCache : NSObject

{
    NSMutableDictionary *_cachedRanges;
    NSMutableDictionary *_allEntityRanges;
    NSMutableDictionary *_translatedGlobalIDs;
    NSString *_localPeerID;
    NSString *_storeName;
    NSPersistentStore *_privateStore;
    _Bool _cachedStorePeerRanges;
}

@property (nonatomic, readonly) NSString *localPeerID;
@property (nonatomic, readonly) NSString *storeName;
@property (nonatomic, readonly) NSPersistentStore *privateStore;
@property (nonatomic, readonly) NSDictionary *translatedGlobalIDs;

+ (void)initialize;
+ (long long)integerFromPrimaryKeyString:(id)arg1;
+ (unsigned long long)peerRangeStartForPrimaryKey:(unsigned long long)arg1;

- (void)dealloc;
- (id)description;
- (_Bool)cachePeerRanges:(id *)arg1;
- (id)createMapOfManagedObjectIDsForStoreSaveSnapshot:(id)arg1 error:(id *)arg2;
- (_Bool)refreshPeerRangeCache:(id *)arg1;
- (id)createGlobalObjectIDForManagedObjectID:(id)arg1;
- (_Bool)cacheSQLCorePeerRange:(id)arg1 error:(id *)arg2;
- (id)cachedRangeForOwningPeerID:(id)arg1 andEntityName:(id)arg2 withPrimaryKey:(unsigned long long)arg3;
- (id)cachedRangeForLocalPrimaryKey:(unsigned long long)arg1 ofEntityNamed:(id)arg2;
- (id)createMapOfManagedObjectIDsForGlobalIDs:(id)arg1 count:(long long)arg2 error:(id *)arg3;
- (unsigned long long)localPrimaryKeyForOwningPeerID:(id)arg1 andEntityName:(id)arg2 withPrimaryKey:(unsigned long long)arg3;
- (id)initWithPrivateStore:(id)arg1 storeName:(id)arg2 andLocalPeerID:(id)arg3;
- (id)describeCaches;
- (id)describeCachesVerbose;

@end
