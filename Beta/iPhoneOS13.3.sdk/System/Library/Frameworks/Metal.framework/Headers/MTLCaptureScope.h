/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/_MTLObjectWithLabel.h>

@class NSString;

@protocol MTLCommandQueue, MTLDevice;

@interface MTLCaptureScope : _MTLObjectWithLabel

{
    id <MTLDevice> _device;
    id <MTLCommandQueue> _commandQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy) NSString *label;
@property (nonatomic, readonly) id <MTLDevice> device;
@property (nonatomic, readonly) id <MTLCommandQueue> commandQueue;

- (void)dealloc;
- (void)beginScope;
- (void)endScope;
- (id)initWithDevice:(id)arg1 commandQueue:(id)arg2;

@end
