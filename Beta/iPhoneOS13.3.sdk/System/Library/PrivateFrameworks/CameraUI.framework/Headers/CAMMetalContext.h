/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@protocol MTLCommandQueue, MTLDevice;

@interface CAMMetalContext : NSObject

{
    id <MTLDevice> _device;
    id <MTLCommandQueue> _commandQueue;
}

@property (nonatomic, readonly) id <MTLDevice> device;
@property (nonatomic, readonly) id <MTLCommandQueue> commandQueue;

- (id)init;

@end
