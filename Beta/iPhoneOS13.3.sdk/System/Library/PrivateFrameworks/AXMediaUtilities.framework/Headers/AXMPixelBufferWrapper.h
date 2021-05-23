/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSObject.h>

@interface AXMPixelBufferWrapper : NSObject

{
    struct __CVBuffer *_pixelBuffer;
    unsigned int _orientation;
}

@property (nonatomic, readonly) struct __CVBuffer *pixelBuffer;
@property (nonatomic, readonly) unsigned int orientation;
@property (nonatomic, readonly) struct CGSize unorientedSize;
@property (nonatomic, readonly) struct CGSize orientedSize;

+ (id)new;
+ (id)wrapperWithPixelBuffer:(struct __CVBuffer *)arg1 orientation:(unsigned int)arg2;

- (id)init;
- (void)dealloc;
- (id)_initWithPixelBuffer:(struct __CVBuffer *)arg1 orientation:(unsigned int)arg2;

@end
