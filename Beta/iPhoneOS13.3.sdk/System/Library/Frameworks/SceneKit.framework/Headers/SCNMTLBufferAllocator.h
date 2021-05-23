/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, SCNFixedSizePage;

@protocol MTLDevice;

__attribute__((visibility("hidden")))
@interface SCNMTLBufferAllocator : NSObject

{
    id <MTLDevice> _device;
    unsigned long long _bufferSize;
    unsigned long long _elementSize;
    NSString *_name;
    NSMutableArray *_pages;
    SCNFixedSizePage *_currentAllocatorPage;
    struct os_unfair_lock_s _allocatorLock;
}

@property (nonatomic, readonly) unsigned long long bufferSize;
@property (nonatomic, readonly) unsigned long long elementSize;

- (void)dealloc;
- (id)initWithDevice:(id)arg1 fixedSizeElement:(unsigned long long)arg2 buffersize:(unsigned long long)arg3 name:(id)arg4;
- (id)newSubBufferWithBytes:(const void *)arg1 length:(unsigned long long)arg2 renderContext:(id)arg3;
- (id)_newSubBuffer;

@end
