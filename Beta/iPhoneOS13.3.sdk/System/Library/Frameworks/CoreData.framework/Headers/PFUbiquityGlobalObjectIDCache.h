/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSRecursiveLock, NSString;

__attribute__((visibility("hidden")))
@interface PFUbiquityGlobalObjectIDCache : NSObject

{
    NSString *_storeName;
    NSString *_localPeerID;
    NSMutableDictionary *_peerIDToEntityNameToPrimaryKey;
    NSRecursiveLock *_peerIDToEntityNameToPrimaryKeyLock;
}

@property (retain, nonatomic) NSString *storeName;
@property (retain, nonatomic) NSString *localPeerID;

+ (id)stringValueFromArray:(id)arg1 atIndexDescribedByStringNumber:(id)arg2;

- (id)init;
- (void)dealloc;
- (id)initWithLocalPeerID:(id)arg1 forStoreName:(id)arg2;
- (id)createGlobalIDForCompressedString:(id)arg1 withEntityNames:(id)arg2 primaryKeys:(id)arg3 peerIDs:(id)arg4;
- (void)purgeCache;
- (id)createGlobalIDForGlobalIDString:(id)arg1;
- (id)createGlobalIDForPrimaryKeyString:(id)arg1 entityName:(id)arg2 andOwningPeerID:(id)arg3;
- (id)createGlobalIDForPrimarKey:(unsigned long long)arg1 entityName:(id)arg2 andOwningPeerID:(id)arg3;

@end
