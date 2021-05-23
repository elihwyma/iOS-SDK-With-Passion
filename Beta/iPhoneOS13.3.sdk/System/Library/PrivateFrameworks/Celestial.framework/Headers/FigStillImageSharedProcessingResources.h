/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class FigWiredMemory;

@protocol MTLBuffer;

@interface FigStillImageSharedProcessingResources : NSObject

{
    unsigned long long _sharedMetalBufferLengthInMB;
    unsigned long long _sharedRegWarpBufferLengthInMB;
    _Bool _resourcesAllocated;
    int _resourceAllocationError;
    id <MTLBuffer> _sharedMetalBuffer;
    FigWiredMemory *_sharedRegWarpBuffer;
}

@property (nonatomic, readonly) unsigned long long sharedMetalBufferLengthInMB;
@property (nonatomic, readonly) unsigned long long sharedRegWarpBufferLengthInMB;
@property (nonatomic, readonly) id <MTLBuffer> sharedMetalBuffer;
@property (nonatomic, readonly) FigWiredMemory *sharedRegWarpBuffer;

+ (void)initialize;

- (void)dealloc;
- (int)ensureAllocatedSync;
- (int)_allocateSharedMetalBufferWithSizeInMB:(unsigned long long)arg1;
- (id)initWithSharedMetalBufferLengthInMB:(unsigned long long)arg1 sharedRegWarpBufferLengthInMB:(unsigned long long)arg2;

@end
