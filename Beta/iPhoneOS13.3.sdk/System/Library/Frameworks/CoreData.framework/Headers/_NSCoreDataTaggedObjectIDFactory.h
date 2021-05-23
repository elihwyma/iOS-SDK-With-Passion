/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NSCoreDataTaggedObjectIDFactory : NSObject

{
    int _cd_rc;
    unsigned int _taggedPoolIndex;
    id _fallbackFactories;
}

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;

- (id)alloc;
- (unsigned long long)retainCount;
- (void)dealloc;
- (id)retain;
- (oneway void)release;
- (id)allocWithZone:(struct _NSZone *)arg1;
- (unsigned int)allocateBatch:(id *)arg1 count:(unsigned int)arg2;
- (id)initWithPK64:(long long)arg1;
- (id)_storeInfo1;
- (void)_setStoreInfo1:(id)arg1;
- (void)setObjectStoreIdentifier:(id)arg1;
- (id)managedObjectIDFromUTF8String:(const char *)arg1 length:(unsigned long long)arg2;
- (id)managedObjectIDFromURIRepresentation:(id)arg1;
- (void)_storeDeallocated;
- (id)_fallbackFactory;
- (id)_initCoreWithTaggedIndex:(unsigned int)arg1;

@end
