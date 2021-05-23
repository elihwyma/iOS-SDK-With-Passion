/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class FigM2MController;

__attribute__((visibility("hidden")))
@interface FigUtlROIProcessor : NSObject

{
    int _originalWidth;
    int _originalHeight;
    struct CGRect _roiInPixels;
    struct CGRect _originalRectangle;
    int _orientation;
    FigM2MController *_m2m;
    int _width;
    int _height;
    struct __CVBuffer *_pixelBuffer;
    struct CGRect _roiRectangle;
    CDStruct_8e0628e6 _originalToRoiMatrix;
    CDStruct_8e0628e6 _roiToOriginalMatrix;
}

@property (nonatomic, readonly) CDStruct_8e0628e6 originalToRoiMatrix;
@property (nonatomic, readonly) CDStruct_8e0628e6 roiToOriginalMatrix;
@property (nonatomic, readonly) struct CGRect roiRectangle;
@property (nonatomic, readonly) struct __CVBuffer *pixelBuffer;
@property (nonatomic, readonly) int width;
@property (nonatomic, readonly) int height;

- (void)dealloc;
- (struct CGPoint)originalToRoi:(struct CGPoint)arg1;
- (struct CGPoint)roiToOriginal:(struct CGPoint)arg1;
- (CDStruct_8e0628e6)matrix:(int)arg1 rectangle:(struct CGRect)arg2 scaleX:(double)arg3 scaleY:(double)arg4 inverse:(CDStruct_8e0628e6 *)arg5;
- (struct CGPoint)originalToRoiPixels:(struct CGPoint)arg1;
- (struct CGPoint)roiToOriginalPixels:(struct CGPoint)arg1;
- (id)initWithWidth:(int)arg1 height:(int)arg2 pixelFormat:(unsigned int)arg3;
- (_Bool)processImage:(struct __CVBuffer *)arg1 orientation:(int)arg2 rect:(struct CGRect)arg3;

@end
