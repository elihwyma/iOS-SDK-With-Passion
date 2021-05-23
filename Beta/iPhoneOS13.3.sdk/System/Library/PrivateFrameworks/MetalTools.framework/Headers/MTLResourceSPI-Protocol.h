/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/Swift-Protocol.h>

@class MISSING_TYPE, MTLResourceAllocationInfo;

@protocol MTLResourceSPI <Swift>

@property int responsibleProcess;
@property (readonly) MTLResourceAllocationInfo *sharedAllocationInfo;
@property (readonly) MTLResourceAllocationInfo *cachedAllocationInfo;
@property (readonly) unsigned long long protectionOptions;
@property (readonly) unsigned long long unfilteredResourceOptions;

- (MISSING_TYPE *)isComplete;
- (MISSING_TYPE *)waitUntilComplete;
- (MISSING_TYPE *)isPurgeable;
- (MISSING_TYPE *)doesAliasAllResources:count: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)doesAliasAnyResources:count: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)doesAliasResource: /* Error: Ran out of types for this method. */;

@end
