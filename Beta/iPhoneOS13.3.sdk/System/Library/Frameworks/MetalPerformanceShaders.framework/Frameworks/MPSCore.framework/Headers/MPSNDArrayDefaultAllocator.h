/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MPSNDArrayDefaultAllocator : NSObject

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
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)arrayForCommandBuffer:(id)arg1 arrayDescriptor:(id)arg2 kernel:(id)arg3;
- (id)bufferForCommandBuffer:(id)arg1 size:(unsigned long long)arg2 options:(unsigned long long)arg3 kernel:(id)arg4;
- (void)freeBuffer:(id)arg1 forCommandBuffer:(id)arg2;

@end
