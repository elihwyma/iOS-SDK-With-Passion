/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

@interface WFBitmapContext : NSObject

{
    double _scale;
    struct CGContext *_CGContext;
    struct CGSize _size;
}

@property (nonatomic, readonly) struct CGSize size;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) struct CGContext *CGContext;

+ (id)contextWithSize:(struct CGSize)arg1 scale:(double)arg2;
+ (id)contextWithDeviceScreenScaleAndSize:(struct CGSize)arg1;
+ (id)currentContextWithScale:(double)arg1;

- (void)dealloc;
- (id)image;
- (id)initWithCGContext:(struct CGContext *)arg1 scale:(double)arg2;
- (id)initWithSize:(struct CGSize)arg1 opaque:(_Bool)arg2 scale:(double)arg3;
- (id)imageWithOrientation:(unsigned int)arg1;

@end
