/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
 */

#import <MPSCore/MPSImageDefaultAllocator.h>

@class NSString;

@interface MPSTemporaryImageDefaultAllocator : MPSImageDefaultAllocator

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)initWithCoder:(id)arg1;
- (id)imageForCommandBuffer:(id)arg1 imageDescriptor:(id)arg2 kernel:(id)arg3;

@end
