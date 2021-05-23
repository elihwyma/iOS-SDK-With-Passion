/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVVideoComposition, NSDictionary, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVVideoCompositionRenderContextInternal : NSObject

{
    NSDictionary *_basisProperties;
    struct CGSize _size;
    struct CGAffineTransform _renderTransform;
    float _renderScale;
    CDStruct_43f4b5b8 _pixelAspectRatio;
    CDStruct_1edcc8d7 _edgeWidths;
    _Bool _highQualityRendering;
    NSDictionary *_clientRequiredPixelBufferAttributes;
    NSDictionary *_destinationDesiredPixelBufferAttributes;
    NSString *_destinationDesiredPixelBufferYCbCrMatrix;
    NSString *_destinationDesiredPixelBufferColorPrimaries;
    NSString *_destinationDesiredPixelBufferTransferFunction;
    int pixelFormatFamily;
    struct __CFDictionary *_pixelAspectRatioDict;
    struct __CFDictionary *_cleanApertureDict;
    CDStruct_79c71658 _destinationPixelBufferDimensions;
    struct OpaqueFigSimpleMutex *_bufferPoollInitMutex;
    NSObject<OS_dispatch_queue> *_pixelBufferPoolQ;
    struct __CVPixelBufferPool *_pixelBufferPool;
    AVVideoComposition *_videoComposition;
}

- (void)dealloc;
- (void)_willDeallocOrFinalize;

@end
