/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/_MTLObjectWithLabel.h>

@class MTLIOAccelDevice, NSString;

@protocol MTLDevice;

@interface MTLIOAccelFence : _MTLObjectWithLabel

{
    MTLIOAccelDevice<MTLDevice> *_device;
    unsigned int _fenceIndex;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) id <MTLDevice> device;
@property (copy) NSString *label;

- (void)dealloc;
- (id)initWithDevice:(id)arg1 fenceIndex:(unsigned int)arg2;

@end
