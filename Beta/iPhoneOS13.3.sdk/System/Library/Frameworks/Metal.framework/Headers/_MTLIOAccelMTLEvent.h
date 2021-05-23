/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <IOAccelerator/IOAccelMTLEvent.h>

#import <Metal/Swift-Protocol.h>

@class MTLIOAccelDevice, NSString;

@protocol MTLDevice;

__attribute__((visibility("hidden")))
@interface _MTLIOAccelMTLEvent : IOAccelMTLEvent <Swift>

{
    MTLIOAccelDevice<MTLDevice> *_device;
    unsigned long long _labelTraceID;
    NSString *_label;
    struct os_unfair_lock_s _labelLock;
}

@property (readonly) id <MTLDevice> device;
@property (copy) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithDevice:(id)arg1;
- (id)retainedLabel;

@end
