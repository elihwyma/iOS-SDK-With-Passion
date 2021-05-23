/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <Foundation/NSObject.h>

@class UIImage;

@interface GKImageContext : NSObject

{
    double _scale;
    struct CGContext *_CGContext;
    struct CGSize _size;
}

@property (nonatomic) struct CGSize size;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) struct CGContext *CGContext;
@property (nonatomic, readonly) UIImage *image;

+ (id)contextDrawnWithSize:(struct CGSize)arg1 scale:(double)arg2 options:(unsigned int)arg3 usingBlock:(CDUnknownBlockType)arg4;
+ (id)imageDrawnWithSize:(struct CGSize)arg1 scale:(double)arg2 options:(unsigned int)arg3 usingBlock:(CDUnknownBlockType)arg4;
+ (id)imageFromRawPixelsAtURL:(id)arg1;

- (void)dealloc;
- (id)initWithSize:(struct CGSize)arg1 scale:(double)arg2 options:(unsigned int)arg3;
- (id)initWithSize:(struct CGSize)arg1 scale:(double)arg2 options:(unsigned int)arg3 data:(void *)arg4;
- (_Bool)writeRawPixelsToURL:(id)arg1 error:(id *)arg2;

@end
