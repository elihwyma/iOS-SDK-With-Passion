/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MPSImageDefaultAllocator : NSObject

{
    int _dealloc_ok;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)imageForCommandBuffer:(id)arg1 imageDescriptor:(id)arg2 kernel:(id)arg3;
- (struct NSArray *)imageBatchForCommandBuffer:(id)arg1 imageDescriptor:(id)arg2 kernel:(id)arg3 count:(unsigned long long)arg4;

@end
