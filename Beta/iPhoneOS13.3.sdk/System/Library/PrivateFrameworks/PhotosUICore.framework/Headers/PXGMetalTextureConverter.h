/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSString, PXGColorProgramLibrary, PXGImageTexture;

@protocol MTLDeviceSPI, OS_dispatch_queue, PXGMetalTextureConverterDelegate;

@interface PXGMetalTextureConverter : NSObject

{
    long long _screenPixelCount;
    _Bool _hasExtendedColorTarget;
    NSObject<OS_dispatch_queue> *_requestQueue;
    NSObject<OS_dispatch_queue> *_processingQueue;
    PXGImageTexture *_transparentTexture;
    struct __CVMetalTextureCache *_videoTextureCache;
    id <MTLDeviceSPI> _device;
    unsigned long long _destinationColorSpaceName;
    id <PXGMetalTextureConverterDelegate> _delegate;
    struct CGColorSpace *_destinationColorSpace;
    PXGColorProgramLibrary *_colorProgramLibrary;
}

@property (retain, nonatomic) id <MTLDeviceSPI> device;
@property (nonatomic, readonly) _Bool hasExtendedColorTarget;
@property (nonatomic, readonly) struct CGColorSpace *destinationColorSpace;
@property (nonatomic, readonly) PXGColorProgramLibrary *colorProgramLibrary;
@property (nonatomic, readonly) struct __CVMetalTextureCache *videoTextureCache;
@property (nonatomic, readonly) unsigned long long destinationColorSpaceName;
@property (weak, nonatomic) id <PXGMetalTextureConverterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) int presentationType;
@property (nonatomic, readonly) PXGImageTexture *transparentTexture;
@property (nonatomic, readonly) _Bool supportsTextureAtlas;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;

- (id)init;
- (void)dealloc;
- (id)createTextureFromCGImage:(struct CGImage *)arg1 orientation:(unsigned int)arg2;
- (id)createTextureFromCVPixelBuffer:(struct __CVBuffer *)arg1 transform:(struct CGAffineTransform)arg2;
- (id)createPayloadTextureFromPayload:(id)arg1;
- (id)createTextureAtlasManagerForImageDataSpec:(CDStruct_1b544862)arg1;
- (id)initWithDevice:(id)arg1 destinationColorspaceName:(unsigned long long)arg2;
- (id)_createTransparentTexture;

@end
