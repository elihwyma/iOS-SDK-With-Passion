/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@interface CAMIOSurfaceWrapper : NSObject

{
    void *_surface;
}

@property (nonatomic, readonly) void *surface;

- (void)dealloc;
- (id)initWithIOSurface:(void *)arg1;

@end
