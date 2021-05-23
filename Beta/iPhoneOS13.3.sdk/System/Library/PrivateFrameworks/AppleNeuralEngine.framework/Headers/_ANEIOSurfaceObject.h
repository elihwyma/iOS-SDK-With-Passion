/*
 Image: /System/Library/PrivateFrameworks/AppleNeuralEngine.framework/AppleNeuralEngine
 */

#import <Foundation/NSObject.h>

@interface _ANEIOSurfaceObject : NSObject

{
    struct __IOSurface *_ioSurface;
}

@property (nonatomic, readonly) struct __IOSurface *ioSurface;

+ (id)new;
+ (id)objectWithIOSurface:(struct __IOSurface *)arg1;
+ (struct __IOSurface *)createIOSurfaceWithWidth:(int)arg1 pixel_size:(int)arg2 height:(int)arg3;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)initWithIOSurface:(struct __IOSurface *)arg1;

@end
