/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@interface JTPixelBufferPool : NSObject

{
    struct __CVPixelBufferPool *_pixelBufferPool;
    unsigned int _type;
    struct CGSize _size;
}

@property (nonatomic, readonly) struct CGSize size;
@property (nonatomic, readonly) unsigned int type;

- (void)dealloc;
- (id)initWithSize:(struct CGSize)arg1;
- (struct __CVBuffer *)createPixelBuffer;
- (id)initWithSize:(struct CGSize)arg1 type:(unsigned int)arg2;

@end
