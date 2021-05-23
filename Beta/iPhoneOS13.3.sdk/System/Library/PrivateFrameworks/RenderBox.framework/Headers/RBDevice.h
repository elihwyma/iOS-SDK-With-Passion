/*
 Image: /System/Library/PrivateFrameworks/RenderBox.framework/RenderBox
 */

#import <Foundation/NSObject.h>

@protocol MTLCaptureScope, MTLDevice, OS_dispatch_queue;

@interface RBDevice : NSObject

{
    struct refcounted_ptr<RB::Device> _device;
    struct objc_ptr<NSObject<OS_dispatch_queue>*> _queue;
    struct atomic<unsigned int> _pending_collect;
}

@property (nonatomic, readonly) struct Device *rb_device;
@property (nonatomic, readonly) id <MTLDevice> device;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) id <MTLCaptureScope> captureScope;

+ (_Bool)isSupported;
+ (id)sharedDefaultDevice;
+ (id)sharedDevice:(id)arg1;

- (void)dealloc;
- (id).cxx_construct;
- (id)initWithDevice:(id)arg1;
- (void)collectResources;

@end
