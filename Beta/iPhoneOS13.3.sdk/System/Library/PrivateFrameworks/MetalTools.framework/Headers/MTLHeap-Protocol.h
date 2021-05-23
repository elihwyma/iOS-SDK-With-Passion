/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/Swift-Protocol.h>

@class NSString;

@protocol MTLDevice;

@protocol MTLHeap <Swift>

@property (copy) NSString *label;
@property (readonly) id <MTLDevice> device;
@property (readonly) unsigned long long storageMode;
@property (readonly) unsigned long long cpuCacheMode;
@property (readonly) unsigned long long hazardTrackingMode;
@property (readonly) unsigned long long resourceOptions;
@property (readonly) unsigned long long size;
@property (readonly) unsigned long long usedSize;
@property (readonly) unsigned long long currentAllocatedSize;
@property (readonly) long long type;

- (unsigned short)newTextureWithDescriptor: /* Error: Ran out of types for this method. */;
- (unsigned short)newBufferWithLength:options: /* Error: Ran out of types for this method. */;
- (unsigned short)setPurgeableState: /* Error: Ran out of types for this method. */;
- (unsigned short)newBufferWithLength:options:offset: /* Error: Ran out of types for this method. */;
- (unsigned short)newTextureWithDescriptor:offset: /* Error: Ran out of types for this method. */;
- (unsigned short)maxAvailableSizeWithAlignment: /* Error: Ran out of types for this method. */;

@end
