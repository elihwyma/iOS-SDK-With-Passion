/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Foundation/NSObject.h>

@class MTLIOAccelResource;

__attribute__((visibility("hidden")))
@interface MTLIOMemoryInfo : NSObject

{
    void *memlist_key;
    MTLIOAccelResource *fResourceListHead;
    struct os_unfair_lock_s _memoryInfoLock;
}

+ (id)initialize;

- (id)init;
- (void)dealloc;
- (void)lock;
- (void)unlock;
- (void)shutdown;
- (void *)addDataSource:(CDUnknownBlockType)arg1;
- (void)removeDataSource:(void *)arg1;
- (void)addResourceToList:(id)arg1;
- (void)removeResourceFromList:(id)arg1;
- (struct __CFArray *)annotationList;

@end
