/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSPersistentCacheRow.h>

@class _CDSnapshot;

__attribute__((visibility("hidden")))
@interface NSSQLRow : NSPersistentCacheRow

{
    _CDSnapshot *_snapshot;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
+ (unsigned int)newBatchRowAllocation:(id *)arg1 count:(unsigned int)arg2 forSQLEntity:(id)arg3 withOwnedObjectIDs:(struct _NSScalarObjectID **)arg4 andTimestamp:(double)arg5;
+ (id)allocForSQLEntity:(id)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copy;
- (id)valueForKey:(id)arg1;
- (unsigned long long)version;
- (struct _NSScalarObjectID *)objectID;
- (void)setObjectID:(struct _NSScalarObjectID *)arg1;
- (void)setForeignEntityKeySlot:(unsigned int)arg1 entityKey:(unsigned int)arg2;
- (void)setForeignOrderKeySlot:(unsigned int)arg1 orderKey:(unsigned int)arg2;
- (void)setForeignKeySlot:(unsigned int)arg1 int64:(long long)arg2;
- (void)setOptLock:(long long)arg1;
- (id)initWithSQLEntity:(id)arg1 ownedObjectID:(struct _NSScalarObjectID *)arg2 andTimestamp:(double)arg3;
- (const id *)knownKeyValuesPointer;
- (id)_snapshot_;
- (id)sqlEntity;
- (long long)pk64;
- (unsigned int)sqlEntityID;
- (long long)optLock;
- (long long)foreignKeyForSlot:(unsigned int)arg1;
- (unsigned int)foreignEntityKeyForSlot:(unsigned int)arg1;
- (unsigned int)foreignOrderKeyForSlot:(unsigned int)arg1;
- (id)attributeValueForSlot:(unsigned int)arg1;
- (struct __CFBitVector *)newUpdateMaskForConstrainedValues;
- (unsigned int)_versionNumber;
- (struct __CFBitVector *)newUpdateMaskFrom:(id)arg1;
- (struct __CFBitVector *)newUpdateMaskWithChangedConstraintsFrom:(id)arg1;
- (id)initWithSQLEntity:(id)arg1 objectID:(struct _NSScalarObjectID *)arg2;
- (struct _NSScalarObjectID *)newObjectIDForToOne:(id)arg1;
- (void)_validateToOnes;
- (struct __CFBitVector *)newColumnMaskFrom:(id)arg1 columnInclusionOptions:(unsigned long long)arg2;
- (_Bool)hasUniqueConstraintDiffFrom:(id)arg1;

@end
