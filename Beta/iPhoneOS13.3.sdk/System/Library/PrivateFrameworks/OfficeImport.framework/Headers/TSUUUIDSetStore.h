/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

@class NSLock, NSMutableDictionary, TSUSparseArray;

__attribute__((visibility("hidden")))
@interface TSUUUIDSetStore : NSObject <Swift>

{
    NSLock *_lock;
    TSUSparseArray *_uuidSetForIndex;
    NSMutableDictionary *_indexesUsingUuid;
    unsigned int _highestIndex;
}

@property (readonly) unsigned long long count;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)addSet:(id)arg1;
- (void)foreachUuidSet:(CDUnknownBlockType)arg1;
- (unsigned int)indexOfSet:(id)arg1;
- (void)p_addSet:(id)arg1 atIndex:(unsigned int)arg2;
- (id)indexesUsingUuid:(const UUIDData_60906e89 *)arg1;
- (id)setForIndex:(unsigned int)arg1;
- (void)_foreachUuidSet:(CDUnknownBlockType)arg1;
- (unsigned int)addSetForUuids:(const vector_4dc5f307 *)arg1;
- (void)removeSetAtIndex:(unsigned int)arg1;
- (_Bool)containsUuidSet:(id)arg1;
- (id)indexesUsingAnyOfUuids:(const vector_4dc5f307 *)arg1;
- (id)subsetStoreForIndexes:(id)arg1;
- (unsigned int)addSetForSingleUuid:(const UUIDData_60906e89 *)arg1;

@end
