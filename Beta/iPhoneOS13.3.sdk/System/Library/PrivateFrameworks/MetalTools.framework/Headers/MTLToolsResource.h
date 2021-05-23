/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/MTLToolsObject.h>

#import <MetalTools/Swift-Protocol.h>

@class MTLResourceAllocationInfo, MTLToolsHeap, NSString;

@protocol MTLDevice, MTLHeap;

@interface MTLToolsResource : MTLToolsObject <Swift>

{
    unsigned long long _options;
    MTLToolsHeap *_heap;
}

@property (nonatomic, readonly) unsigned long long options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy) NSString *label;
@property (readonly) id <MTLDevice> device;
@property (readonly) unsigned long long cpuCacheMode;
@property (readonly) unsigned long long storageMode;
@property (readonly) unsigned long long hazardTrackingMode;
@property (readonly) unsigned long long resourceOptions;
@property (readonly) id <MTLHeap> heap;
@property (readonly) unsigned long long heapOffset;
@property (readonly) unsigned long long allocatedSize;
@property int responsibleProcess;
@property (readonly) MTLResourceAllocationInfo *sharedAllocationInfo;
@property (readonly) MTLResourceAllocationInfo *cachedAllocationInfo;
@property (readonly) unsigned long long protectionOptions;
@property (readonly) unsigned long long unfilteredResourceOptions;

- (_Bool)isComplete;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;
- (void)waitUntilComplete;
- (_Bool)isPurgeable;
- (_Bool)doesAliasAllResources:(const id *)arg1 count:(unsigned long long)arg2;
- (_Bool)doesAliasAnyResources:(const id *)arg1 count:(unsigned long long)arg2;
- (_Bool)doesAliasResource:(id)arg1;
- (_Bool)isAliasable;
- (void)makeAliasable;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2 heap:(id)arg3;
- (void)validateCPUReadable;
- (void)validateCPUWriteable;

@end
