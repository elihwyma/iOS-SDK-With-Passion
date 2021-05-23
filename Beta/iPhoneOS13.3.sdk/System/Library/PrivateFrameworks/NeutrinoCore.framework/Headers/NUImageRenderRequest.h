/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NURenderRequest.h>

@class NSString, NUColorSpace, NUPixelFormat;

@protocol NUExtentPolicy, NUMutableImage, NURegionPolicy, NUScalePolicy;

@interface NUImageRenderRequest : NURenderRequest

{
    NUColorSpace *_colorSpace;
    id <NURegionPolicy> _regionPolicy;
    id <NUScalePolicy> _scalePolicy;
    id <NUExtentPolicy> _extentPolicy;
    NUPixelFormat *_pixelFormat;
    id <NUMutableImage> _targetImage;
    CDStruct_d58201db _tileSize;
    CDStruct_d58201db _borderSize;
}

@property (retain) id <NUMutableImage> targetImage;
@property (retain, nonatomic) NUColorSpace *colorSpace;
@property (retain) id <NURegionPolicy> regionPolicy;
@property (retain) id <NUScalePolicy> scalePolicy;
@property (retain) id <NUExtentPolicy> extentPolicy;
@property (retain) NUPixelFormat *pixelFormat;
@property CDStruct_912cb5d2 tileSize;
@property CDStruct_912cb5d2 borderSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) CDStruct_1b6d18a9 time;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithComposition:(id)arg1;
- (long long)mediaComponentType;

@end
