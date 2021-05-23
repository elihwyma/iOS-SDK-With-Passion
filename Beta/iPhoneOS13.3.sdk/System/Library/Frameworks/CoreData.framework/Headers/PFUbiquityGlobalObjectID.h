/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSManagedObjectID, NSString;

__attribute__((visibility("hidden")))
@interface PFUbiquityGlobalObjectID : NSObject

{
    NSString *_storeName;
    NSString *_entityName;
    NSString *_primaryKey;
    NSString *_owningPeerID;
    unsigned long long _hash;
    NSManagedObjectID *_managedObjectID;
    unsigned long long _primaryKeyInteger;
}

@property (nonatomic, readonly) NSString *storeName;
@property (nonatomic, readonly) NSString *entityName;
@property (nonatomic, readonly) NSString *primaryKey;
@property (nonatomic, readonly) NSString *owningPeerID;
@property (nonatomic, readonly) unsigned long long hash;
@property (retain, nonatomic) NSManagedObjectID *managedObjectID;
@property (nonatomic, readonly) unsigned long long primaryKeyInteger;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)createGlobalIDString;
- (void)updateHash;
- (id)initFromCopyWithStoreName:(id)arg1 entityName:(id)arg2 primaryKey:(id)arg3 peerID:(id)arg4 andHash:(unsigned long long)arg5 managedObjectID:(id)arg6 primaryKeyInteger:(unsigned long long)arg7;
- (id)initWithStoreName:(id)arg1 entityName:(id)arg2 primaryKeyInteger:(unsigned long long)arg3 andPeerID:(id)arg4;
- (id)initWithStoreName:(id)arg1 entityName:(id)arg2 primaryKey:(id)arg3 andPeerID:(id)arg4;
- (id)initWithCompressedString:(id)arg1 forStoreWithName:(id)arg2 andEntityNames:(id)arg3 primaryKeys:(id)arg4 peerIDs:(id)arg5;
- (id)createCompressedStringWithEntityNameToIndex:(id)arg1 primaryKeyToIndex:(id)arg2 peerIDToIndex:(id)arg3;

@end
