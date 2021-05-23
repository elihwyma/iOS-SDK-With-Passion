/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <PhotoFoundation/PFWeakContainer.h>

@class NSPointerArray;

@protocol PFWeakHashDelegate;

@interface PFWeakHash : PFWeakContainer

{
    struct _opaque_pthread_mutex_t _serializer;
    _Bool _objectHashing;
    _Atomic struct _opaque_pthread_t *_serializedThread;
    id *_objects;
    unsigned long long _capacity;
    NSPointerArray *_payload;
    unsigned long long _payloadPurgeCounter;
    unsigned long long *_inUse;
    unsigned long long _count;
    long long _nilledWeakCount;
    id <PFWeakHashDelegate> _delegate;
}

@property (weak) id <PFWeakHashDelegate> delegate;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (id)member:(id)arg1;
- (void)addObject:(id)arg1;
- (_Bool)removeObject:(id)arg1;
- (void)removeAllObjects;
- (_Bool)containsObject:(id)arg1;
- (id)allObjects;
- (unsigned long long)capacity;
- (void)enumerateObjectsWithBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)_addObject:(id)arg1;
- (void)weakReferenceBecameNil;
- (void)_dumpBuckets;
- (void)_serialize:(CDUnknownBlockType)arg1;
- (_Bool)_onSerializedThread;
- (id)initWithObjectHashing;
- (id)initWithPointerHashing;
- (void)postDelegateBecameEmptyNotice;
- (_Bool)_removeAllObjects;
- (void)_rehashWithNewCapacity:(unsigned long long)arg1;
- (unsigned long long)_bucketForObject:(id)arg1 foundInHash:(_Bool *)arg2;
- (_Bool)_shouldGrow;
- (_Bool)_shouldShrink;
- (void)_resize;
- (void)_purgeOrphanedPayloads;
- (void)_processNilledWeakReferences;
- (void)_doEnumeration:(CDUnknownBlockType)arg1;
- (unsigned long long)countEstimate;
- (unsigned long long)countByVerifyingWeakObjects;
- (void)_setPayload:(id)arg1 inBucket:(unsigned long long)arg2;
- (void)addObject:(id)arg1 withPayload:(id)arg2;
- (void)setPayload:(id)arg1 forObject:(id)arg2;
- (id)payloadForObject:(id)arg1;
- (void)enumerateObjectsAndPayloadsWithBlock:(CDUnknownBlockType)arg1;

@end
