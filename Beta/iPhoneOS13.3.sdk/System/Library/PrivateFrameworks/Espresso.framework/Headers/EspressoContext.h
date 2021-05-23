/*
 Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

#import <NSObject.h>

@interface EspressoContext : NSObject

{
    shared_ptr_ae8b808b _ctx;
}

@property (readonly) shared_ptr_ae8b808b ctx;
@property (readonly) int platform;

- (id).cxx_construct;
- (id)initWithContext:(shared_ptr_ae8b808b)arg1;
- (id)initWithPlatform:(int)arg1;
- (void)set_priority:(_Bool)arg1 low_priority_max_ms_per_command_buffer:(float)arg2 gpu_priority:(unsigned int)arg3;
- (id)initWithDevice:(id)arg1 andWisdomParams:(id)arg2;
- (id)initWithNetworkContext:(id)arg1;

@end
