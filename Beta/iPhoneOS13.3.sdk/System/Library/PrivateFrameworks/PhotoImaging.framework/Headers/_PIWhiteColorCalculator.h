/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <Foundation/NSObject.h>

@class NUBufferRenderClient, NUComposition, NUImageDataClient;

@protocol OS_dispatch_queue;

@interface _PIWhiteColorCalculator : NSObject

{
    NUComposition *_composition;
    NUBufferRenderClient *_bufferRenderClient;
    NUImageDataClient *_imageDataClient;
    NSObject<OS_dispatch_queue> *_q;
    _Bool _useSushi;
}

- (void)_configureRequest:(id)arg1;
- (id)initWithComposition:(id)arg1 useSushi:(_Bool)arg2;
- (void)readBufferFromImage:(id)arg1 withRGBAfBufferBlock:(CDUnknownBlockType)arg2;
- (void)calculateColorWithProperties:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_brightnessMultiplierFromImageProperties:(id)arg1;
- (CDStruct_92960315)_computeWhitePointColorWithGrayEdgesBuffer:(id)arg1 grayWorldBuffer:(id)arg2 greenChannelPercentage:(double)arg3 RAWCameraSpaceProperties:(id)arg4;
- (CDStruct_92960315)_whitePointColorFromGrayEdgesImage:(id)arg1 grayWorldImage:(id)arg2 greenChannelPercentage:(double)arg3 RAWCameraSpaceProperties:(id)arg4;
- (void)_computeGreenPercentage:(CDUnknownBlockType)arg1;
- (void)_submitGWRenderRequest:(CDUnknownBlockType)arg1;
- (void)_submitGERenderRequest:(CDUnknownBlockType)arg1;

@end
