/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/MTLToolsResource.h>

@class MTLToolsPointerArray, NSString;

@protocol MTLDevice, MTLHeap;

@interface MTLToolsIndirectCommandBuffer : MTLToolsResource

{
    MTLToolsPointerArray *_indirectComputeCommand;
    MTLToolsPointerArray *_indirectRenderCommand;
}

@property (nonatomic, readonly) MTLToolsPointerArray *indirectComputeCommand;
@property (nonatomic, readonly) MTLToolsPointerArray *indirectRenderCommand;
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
@property (readonly) unsigned long long size;
@property (readonly) unsigned long long uniqueIdentifier;
@property (nonatomic) unsigned long long resourceIndex;

- (void)dealloc;
- (void)getHeader:(void **)arg1 headerSize:(unsigned long long *)arg2;
- (id)indirectRenderCommandAtIndex:(unsigned long long)arg1;
- (id)indirectComputeCommandAtIndex:(unsigned long long)arg1;
- (void)resetWithRange:(struct _NSRange)arg1;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (void)acceptVisitor:(id)arg1;

@end
