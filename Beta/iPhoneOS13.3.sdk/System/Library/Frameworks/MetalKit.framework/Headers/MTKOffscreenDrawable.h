/*
 Image: /System/Library/Frameworks/MetalKit.framework/MetalKit
 */

#import <Foundation/NSObject.h>

@class CAMetalLayer, NSString;

@protocol MTLDevice, MTLTexture;

__attribute__((visibility("hidden")))
@interface MTKOffscreenDrawable : NSObject

{
    id <MTLTexture> _texture;
    unsigned long long _pixelFormat;
    struct CGSize _size;
    _Bool _textureDirty;
    CAMetalLayer *_layer;
    double _presentedTime;
    unsigned long long _drawableID;
    id <MTLDevice> _device;
}

@property (readonly) CAMetalLayer *layer;
@property (nonatomic, readonly) double presentedTime;
@property (nonatomic, readonly) unsigned long long drawableID;
@property (retain, nonatomic) id <MTLDevice> device;
@property (nonatomic) struct CGSize size;
@property (nonatomic) unsigned long long pixelFormat;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)texture;
- (void)present;
- (void)presentAtTime:(double)arg1;
- (void)presentAfterMinimumDuration:(double)arg1;
- (void)addPresentedHandler:(CDUnknownBlockType)arg1;
- (id)initWithDevice:(id)arg1 pixelFormat:(unsigned long long)arg2 size:(struct CGSize)arg3 drawableID:(unsigned long long)arg4;

@end
