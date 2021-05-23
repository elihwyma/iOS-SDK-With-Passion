/*
 Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

#import <NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;

@protocol MTLDevice, MTLLibrary, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface EspressoMetalKernelsCache : NSObject

{
    id <MTLLibrary> m_ShaderLibrary;
    id <MTLLibrary> m_DefaultLibrary;
    id <MTLDevice> _device;
    _Bool isSupportingiOSGPUFamilyV2;
    NSObject<OS_dispatch_queue> *dictionary_write_queue;
    NSMutableDictionary *auxLibraries;
    NSMutableDictionary *m_kernelCache_rw;
    NSString *_kernelPrefix;
    NSDictionary *_m_kernelCache;
}

@property (retain) NSDictionary *m_kernelCache;
@property (retain, nonatomic) NSString *kernelPrefix;

- (id)initWithDevice:(id)arg1;
- (void)addLibraryAtPath:(id)arg1;
- (id)kernelForFunction:(const char *)arg1 cacheString:(const char *)arg2 withConstants:(id)arg3;
- (void)loadLibraryNamed:(id)arg1;
- (id)kernelForFunction:(const char *)arg1;
- (_Bool)shouldUseTexArray;

@end
