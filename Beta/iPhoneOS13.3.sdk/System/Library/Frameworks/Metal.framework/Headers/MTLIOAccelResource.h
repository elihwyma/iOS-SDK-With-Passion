/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Foundation/NSObject.h>

#import <Metal/Swift-Protocol.h>

@class MTLResourceAllocationInfo, NSString;

@protocol MTLDevice, MTLHeap;

@interface MTLIOAccelResource : NSObject <Swift>

{
    struct _MTLIOAccelResource _res;
    MTLIOAccelResource *next;
    MTLIOAccelResource *prev;
    unsigned long long uniqueId;
}

@property (readonly) struct __IOAccelResource *resourceRef;
@property (nonatomic, readonly) void *virtualAddress;
@property (nonatomic, readonly) unsigned long long gpuAddress;
@property (nonatomic, readonly) unsigned int resourceID;
@property (nonatomic, readonly) unsigned long long resourceSize;
@property (readonly) unsigned long long cpuCacheMode;
@property (readonly) unsigned long long storageMode;
@property (readonly) unsigned long long hazardTrackingMode;
@property (readonly) unsigned long long resourceOptions;
@property (readonly) unsigned long long unfilteredResourceOptions;
@property (readonly) unsigned long long allocatedSize;
@property (readonly) unsigned long long protectionOptions;
@property (readonly) unsigned long long heapOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy) NSString *label;
@property (readonly) id <MTLDevice> device;
@property (readonly) id <MTLHeap> heap;
@property int responsibleProcess;
@property (readonly) MTLResourceAllocationInfo *sharedAllocationInfo;
@property (readonly) MTLResourceAllocationInfo *cachedAllocationInfo;

- (void)dealloc;
- (_Bool)isComplete;
- (id)initWithResource:(id)arg1;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;
- (void)waitUntilComplete;
- (_Bool)isPurgeable;
- (id)retainedLabel;
- (_Bool)doesAliasAllResources:(const id *)arg1 count:(unsigned long long)arg2;
- (_Bool)doesAliasAnyResources:(const id *)arg1 count:(unsigned long long)arg2;
- (_Bool)doesAliasResource:(id)arg1;
- (_Bool)isAliasable;
- (void)makeAliasable;
- (id)initWithDevice:(id)arg1 options:(unsigned long long)arg2 args:(struct IOAccelNewResourceArgs *)arg3 argsSize:(unsigned int)arg4;
- (id)initMemoryless:(id)arg1 descriptor:(id)arg2;
- (void)annotateResource:(struct __CFDictionary *)arg1;
- (struct __CFArray *)copyAnnotations;
- (struct __CFDictionary *)copyAnnotationDictionary:(unsigned long long)arg1 obj_key_name:(struct __CFString *)arg2 obj_dict:(struct __CFDictionary *)arg3;
- (id)initStandinWithDevice:(id)arg1;
- (void)setAllocationInfoShared:(id)arg1 andCached:(id)arg2;

@end
