/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
 */

#import <MPSCore/Swift-Protocol.h>

@class NSString;

@protocol MTLDevice, MTLHeap;

@protocol MTLResource <Swift>

@property (copy) NSString *label;
@property (readonly) id <MTLDevice> device;
@property (readonly) unsigned long long cpuCacheMode;
@property (readonly) unsigned long long storageMode;
@property (readonly) unsigned long long hazardTrackingMode;
@property (readonly) unsigned long long resourceOptions;
@property (readonly) id <MTLHeap> heap;
@property (readonly) unsigned long long heapOffset;
@property (readonly) unsigned long long allocatedSize;

- (unsigned short)setPurgeableState: /* Error: Ran out of types for this method. */;
- (unsigned short)isAliasable;
- (unsigned short)makeAliasable;

@end
