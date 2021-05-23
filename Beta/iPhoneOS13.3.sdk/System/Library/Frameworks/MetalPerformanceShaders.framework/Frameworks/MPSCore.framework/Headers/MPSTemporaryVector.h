/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
 */

#import <MPSCore/MPSVector.h>

@interface MPSTemporaryVector : MPSVector

{
    unsigned long long _readCount;
}

@property (nonatomic) unsigned long long readCount;

+ (id)temporaryVectorWithCommandBuffer:(id)arg1 descriptor:(id)arg2;
+ (void)prefetchStorageWithCommandBuffer:(id)arg1 descriptorList:(id)arg2;

- (void)synchronizeOnCommandBuffer:(id)arg1;
- (id)initWithCommandBuffer:(id)arg1 descriptor:(id)arg2;

@end
