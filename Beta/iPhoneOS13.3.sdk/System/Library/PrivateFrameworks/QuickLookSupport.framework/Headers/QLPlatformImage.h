/*
 Image: /System/Library/PrivateFrameworks/QuickLookSupport.framework/QuickLookSupport
 */

#import <Foundation/NSObject.h>

@class UIImage;

@interface QLPlatformImage : NSObject

{
    struct CGImage *_cgImage;
    unsigned int _orientation;
    double _scale;
    CDUnknownBlockType _cleanupDataBlock;
    struct CGSize _size;
}

@property struct CGSize size;
@property (readonly) UIImage *UIImage;
@property struct CGImage *CGImage;
@property (copy, nonatomic) CDUnknownBlockType cleanupDataBlock;
@property unsigned int orientation;
@property double scale;

+ (id)imageWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 orientation:(unsigned int)arg3;
+ (id)imageWithUIImage:(id)arg1;

- (void)dealloc;

@end
