/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
 */

#import <MPSCore/MPSNDArray.h>

@interface MPSTemporaryNDArray : MPSNDArray

{
    unsigned long long _readCount;
}

@property (nonatomic) unsigned long long readCount;

+ (id)defaultAllocator;
+ (id)temporaryNDArrayWithCommandBuffer:(id)arg1 descriptor:(id)arg2;

- (void)synchronizeOnCommandBuffer:(id)arg1;
- (id)initWithCommandBuffer:(id)arg1 descriptor:(id)arg2;

@end
