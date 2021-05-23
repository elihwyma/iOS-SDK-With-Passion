/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSArray.h>

@class NSKnownKeysDictionary, _PFWeakReference;

__attribute__((visibility("hidden")))
@interface _PFResultArray : NSArray

{
    int _cd_rc;
    unsigned int _count;
    unsigned int _resultType;
    CDStruct_6cdbdfa1 *_resultSet;
    _PFWeakReference *_weakRequestStore;
    NSKnownKeysDictionary *_metadata;
}

+ (void)initialize;
+ (_Bool)accessInstanceVariablesDirectly;
+ (Class)classForKeyedUnarchiver;

- (unsigned long long)retainCount;
- (void)dealloc;
- (id)retain;
- (oneway void)release;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (void)getObjects:(id *)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;
- (unsigned long long)indexOfObject:(id)arg1;
- (unsigned long long)indexOfObjectIdenticalTo:(id)arg1;
- (Class)classForCoder;
- (unsigned long long)indexOfObject:(id)arg1 inRange:(struct _NSRange)arg2;
- (unsigned long long)indexOfObjectIdenticalTo:(id)arg1 inRange:(struct _NSRange)arg2;
- (Class)classForArchiver;
- (id)_metadata;
- (id)initWithObjects:(CDStruct_6cdbdfa1 *)arg1 count:(unsigned int)arg2 store:(id)arg3 metadata:(id)arg4;
- (void *)hydratedRowAtIndex:(unsigned long long)arg1;
- (id)_sqlCore;
- (CDStruct_6cdbdfa1 *)_resultSet;

@end
