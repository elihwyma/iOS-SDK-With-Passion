/*
 Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

#import <NSObject.h>

@class EspressoMetalKernelsCache;

__attribute__((visibility("hidden")))
@interface EspressoSharedKernelCacheEntry : NSObject

{
    EspressoMetalKernelsCache *_cached;
}

@property (weak) EspressoMetalKernelsCache *cached;

@end
