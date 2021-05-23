/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@interface TSDGLTextureInfo : NSObject

{
    _Bool _containsMipmaps;
    unsigned int _name;
    unsigned int _target;
    unsigned int _height;
    unsigned int _width;
}

@property (nonatomic, readonly) _Bool containsMipmaps;
@property (nonatomic, readonly) unsigned int name;
@property (nonatomic, readonly) unsigned int target;
@property (nonatomic, readonly) unsigned int height;
@property (nonatomic, readonly) unsigned int width;

- (void)teardown;
- (id)initWithName:(unsigned int)arg1 target:(unsigned int)arg2 width:(unsigned int)arg3 height:(unsigned int)arg4 containsMipmaps:(_Bool)arg5;

@end
