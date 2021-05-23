/*
 Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

#import <CALayer.h>

@class MPSImageConversion, NSMutableDictionary, NSMutableSet, NSObject;

@protocol MTLCommandQueue, MTLDevice><MTLDeviceSPI, OS_dispatch_queue;

@interface FigPhotoTiledLayer : CALayer

{
    struct FigPhotoDecompressionSession *_decodeSession;
    struct FigPhotoDecompressionContainer *_container;
    struct FigPhotoDecompressionContainer *_jpegHWContainer;
    int _containerFormat;
    long long _imageIndex;
    struct CGSize _tileSize;
    _Bool _hasExtendedColorDisplay;
    _Bool _shouldTile;
    unsigned int _decodePixelFormat;
    unsigned int _conversionPixelFormat;
    id <MTLDevice><MTLDeviceSPI> _metalDevice;
    id <MTLCommandQueue> _metalCmdQueue;
    NSObject<OS_dispatch_queue> *_metalQueue;
    MPSImageConversion *_metalConverter;
    struct vImageConverter *_vimageConverter;
    _Bool _hasAlpha;
    int _err;
    struct FigPhotoCache *_tileCache;
    struct FigPhotoSurfacePool *_surfacePool;
    NSMutableSet *_visibleTileKeys;
    NSMutableDictionary *_subLayers;
    NSObject<OS_dispatch_queue> *_updateQueue;
    _Atomic unsigned int _requestID;
    int _zoomLevel;
    CALayer *_placeholderLayer;
    struct CGImage *_placeholderImage;
    double _zoomStartScale;
    struct os_unfair_lock_s _lock;
    struct CGRect _lastVisibleRect;
    double _lastZoomScale;
    _Bool _lastAboveZoomThreshold;
    _Bool _showTileBorders;
    long long _imageOrientation;
    struct CGSize _imageSize;
}

@property (nonatomic, readonly) struct CGSize imageSize;
@property (nonatomic, readonly) long long imageOrientation;

- (void)dealloc;
- (void)sizeToFit;
- (void)flushCache;
- (void)_setupConverterForSourceColorSpace:(struct CGColorSpace *)arg1 destinationColorSpace:(struct CGColorSpace *)arg2;
- (double)_zoomStartScaleForImage:(struct CGSize)arg1 placeholderImageSize:(struct CGSize)arg2;
- (void)_prepareForDecode;
- (id)initWithContainer:(id)arg1 containerImageIndex:(long long)arg2 backgroundImageSize:(struct CGSize)arg3 screenSize:(struct CGSize)arg4;
- (id)initWithContainerData:(id)arg1 containerImageIndex:(long long)arg2 backgroundImageSize:(struct CGSize)arg3 screenSize:(struct CGSize)arg4;
- (void)_runMetalConversionOnSurface:(struct __IOSurface *)arg1 cropRect:(struct CGRect)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_runVImageConversionOnSurface:(struct __IOSurface *)arg1 cropRect:(struct CGRect)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_updateSubLayers:(id)arg1;
- (_Bool)_visibleTileRegionHasChanged:(struct CGRect)arg1 level:(int)arg2;
- (void)_removeAllTiles;
- (void)_decodeImageRectangle:(struct CGRect)arg1 forLevel:(int)arg2 requestId:(unsigned int)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)setVisibleRectangle:(struct CGRect)arg1 zoomScale:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithContainerURL:(id)arg1 containerImageIndex:(long long)arg2 backgroundImageSize:(struct CGSize)arg3 screenSize:(struct CGSize)arg4;
- (id)initWithContainerData:(id)arg1 containerImageIndex:(long long)arg2 placeholderImage:(struct CGImage *)arg3 screenSize:(struct CGSize)arg4;
- (void)setVisibleRectangle:(struct CGRect)arg1 zoomScale:(double)arg2;

@end
