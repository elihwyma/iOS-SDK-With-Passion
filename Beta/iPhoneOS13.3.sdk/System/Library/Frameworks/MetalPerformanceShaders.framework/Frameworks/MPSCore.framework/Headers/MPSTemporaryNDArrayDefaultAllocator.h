/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
 */

#import <MPSCore/MPSNDArrayDefaultAllocator.h>

@class NSString;

@interface MPSTemporaryNDArrayDefaultAllocator : MPSNDArrayDefaultAllocator

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)initWithCoder:(id)arg1;
- (id)arrayForCommandBuffer:(id)arg1 arrayDescriptor:(id)arg2 kernel:(id)arg3;

@end
