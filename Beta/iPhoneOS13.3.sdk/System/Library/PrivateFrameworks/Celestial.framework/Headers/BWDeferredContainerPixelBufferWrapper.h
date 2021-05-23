/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWDeferredContainerPixelBufferPoolWrapper;

@interface BWDeferredContainerPixelBufferWrapper : NSObject

{
    BWDeferredContainerPixelBufferPoolWrapper *_owner;
}

- (void)dealloc;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1 owner:(id)arg2;

@end
