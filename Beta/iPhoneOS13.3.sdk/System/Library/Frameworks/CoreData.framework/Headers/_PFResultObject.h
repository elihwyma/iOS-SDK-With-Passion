/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSDictionary.h>

@class _PFResultArray;

__attribute__((visibility("hidden")))
@interface _PFResultObject : NSDictionary

{
    _PFResultArray *_parent_buffer;
    int _cd_rc;
    unsigned int _count;
    unsigned long long _sql_entity_id;
    unsigned long long _primary_key;
}

+ (Class)classForKeyedUnarchiver;

- (unsigned long long)retainCount;
- (void)dealloc;
- (id)retain;
- (oneway void)release;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectForKey:(id)arg1;
- (id)keyEnumerator;
- (Class)classForCoder;
- (id)initWithObjects:(const id *)arg1 forKeys:(const id *)arg2 count:(unsigned long long)arg3;
- (Class)classForArchiver;
- (id)valueAtIndex:(unsigned long long)arg1;
- (void)_setParentBuffer:(id)arg1;
- (unsigned long long *)_columnOffsets;
- (id)number32FromPtr:(void *)arg1;
- (id)number64FromPtr:(void *)arg1;
- (id)doubleFromPtr:(void *)arg1;
- (id)taggedStringFromPtr:(unsigned long long *)arg1 withLength:(unsigned long long)arg2;
- (id)stringFromPtr:(void *)arg1;
- (id)dataFromPtr:(void *)arg1;
- (id)objectIDFromPtr:(void *)arg1;
- (unsigned long long)_countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3 forKeys:(_Bool)arg4;
- (unsigned long long)_valueCountByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;

@end
