/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIImageCGImageContent.h>

@class _UICGImageDecompressor;

__attribute__((visibility("hidden")))
@interface _UIImageAsyncCGImageContent : _UIImageCGImageContent

{
    long long _orientation;
    _Bool _finishedDecompressing;
    _UICGImageDecompressor *_decompressor;
}

@property (retain, setter=_setDecompressor:) _UICGImageDecompressor *_decompressor;
@property _Bool finishedDecompressing;
@property (readonly) long long orientation;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (struct CGImage *)CGImage;
- (_Bool)isDecompressing;
- (id)initWithData:(id)arg1 immediateLoadWithMaxSize:(struct CGSize)arg2 scale:(double)arg3 renderingIntent:(unsigned long long)arg4 cache:(_Bool)arg5;

@end
