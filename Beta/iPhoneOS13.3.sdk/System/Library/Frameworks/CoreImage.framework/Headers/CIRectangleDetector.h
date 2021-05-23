/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIDetector.h>

@class CIContext, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CIRectangleDetector : CIDetector

{
    CIContext *context;
    double _width;
    double _height;
    NSMutableDictionary *featureOptions;
    struct OpaqueVTPixelTransferSession *pixelTransferSession;
    struct __CVBuffer *interimScaleBuffer;
    struct __CVBuffer *scaleBuffer;
    struct {
        CDUnknownFunctionPointerType _field1;
        CDUnknownFunctionPointerType _field2;
        CDUnknownFunctionPointerType _field3;
        CDUnknownFunctionPointerType _field4;
        CDUnknownFunctionPointerType _field5;
    } *CVMLFuncs;
    float *_perMeshPtr;
    struct vImage_Buffer *_internalBuffer;
}

@property (retain, nonatomic) CIContext *context;

- (void)dealloc;
- (void)finalize;
- (id)featuresInImage:(id)arg1 options:(id)arg2;
- (id)initWithContext:(id)arg1 options:(id)arg2;
- (id)featuresInImage:(id)arg1;
- (void)releaseResources;

@end
