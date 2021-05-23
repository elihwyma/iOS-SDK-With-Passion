/*
 Image: /System/Library/PrivateFrameworks/RenderBox.framework/RenderBox
 */

#import <Foundation/NSObject.h>

@class RBDevice;

@protocol MTLTexture, RBDrawableDelegate;

@interface RBDrawable : NSObject

{
    struct unique_ptr<RB::Drawable, std::__1::default_delete<RB::Drawable>> _drawable;
    int _initialState;
    RBDevice *_device;
    unsigned long long _pixelFormat;
    id <RBDrawableDelegate> _delegate;
    id <MTLTexture> _texture;
    struct CGSize _size;
    CDStruct_0b1c536a _clearColor;
}

@property (nonatomic, readonly) RBDevice *device;
@property (weak, nonatomic) id <RBDrawableDelegate> delegate;
@property (nonatomic) struct CGSize size;
@property (nonatomic) unsigned long long pixelFormat;
@property (nonatomic) int initialState;
@property (nonatomic) CDStruct_0b1c536a clearColor;
@property (retain, nonatomic) id <MTLTexture> texture;
@property (nonatomic, readonly) double GPUDuration;

- (void)finish;
- (id).cxx_construct;
- (id)initWithDevice:(id)arg1;
- (void)dumpTexture:(id)arg1 name:(id)arg2;
- (void)renderDisplayList:(id)arg1 flags:(unsigned int)arg2;

@end
