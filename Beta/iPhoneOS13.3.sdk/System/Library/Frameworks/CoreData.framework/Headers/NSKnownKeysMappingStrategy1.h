/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSKnownKeysMappingStrategy.h>

__attribute__((visibility("hidden")))
@interface NSKnownKeysMappingStrategy1 : NSKnownKeysMappingStrategy

{
    int _cd_rc;
    int _reserved64;
    void *_table;
    unsigned long long _length;
    id _reserved1;
    id *_keys;
}

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
+ (_Bool)supportsSecureCoding;
+ (_Bool)accessInstanceVariablesDirectly;
+ (Class)classForKeyedUnarchiver;

- (unsigned long long)retainCount;
- (void)dealloc;
- (unsigned long long)length;
- (_Bool)isEqual:(id)arg1;
- (id)retain;
- (oneway void)release;
- (unsigned long long)hash;
- (id)description;
- (_Bool)_tryRetain;
- (_Bool)_isDeallocating;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)allKeys;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (unsigned long long)indexForKey:(id)arg1;
- (id *)keys;
- (Class)classForArchiver;
- (id)initForKeys:(id)arg1;
- (id)initForKeys:(id *)arg1 count:(unsigned long long)arg2;
- (unsigned long long)fastIndexForKnownKey:(id)arg1;
- (struct __CFArray *)_makeBranchTableForKeys:(const char **)arg1 count:(unsigned long long)arg2;
- (void)_coreCreationForKeys:(const id *)arg1 count:(unsigned long long)arg2;
- (void)_coreDealloc:(_Bool)arg1;

@end
