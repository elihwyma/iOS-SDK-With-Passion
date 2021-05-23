/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <Foundation/NSObject.h>

@class IOSurface;

@interface BSCGImageFromIOSurfaceBuilder : NSObject

{
    IOSurface *_surface;
    struct CGImage *_image;
    _Bool _isDirty;
    _Bool _isOpaque;
}

@property (nonatomic, readonly, getter=isOpaque) _Bool opaque;

- (void)dealloc;
- (id)initWithIOSurface:(id)arg1;
- (id)_surface;
- (struct CGImage *)_buildImage;
- (id)setOpaque:(_Bool)arg1;
- (struct CGImage *)buildCGImage;

@end
