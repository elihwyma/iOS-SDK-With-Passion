/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/Swift-Protocol.h>

@class MTLResourceAllocationInfo;

@protocol MTLResourceSPI <Swift>

@property int responsibleProcess;
@property (readonly) MTLResourceAllocationInfo *sharedAllocationInfo;
@property (readonly) MTLResourceAllocationInfo *cachedAllocationInfo;
@property (readonly) unsigned long long protectionOptions;
@property (readonly) unsigned long long unfilteredResourceOptions;

- (unsigned short)isComplete;
- (unsigned short)waitUntilComplete;
- (unsigned short)isPurgeable;
- (unsigned short)doesAliasAllResources:count: /* Error: Ran out of types for this method. */;
- (unsigned short)doesAliasAnyResources:count: /* Error: Ran out of types for this method. */;
- (unsigned short)doesAliasResource: /* Error: Ran out of types for this method. */;

@end
