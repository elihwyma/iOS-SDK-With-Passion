/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NURenderJob.h>

@class CIRenderTask, NUImageHistogram, NUPurgeableStoragePool;

@protocol NUPurgeableStorage, NUScalePolicy;

@interface NUHistogramRenderJob : NURenderJob

{
    NUPurgeableStoragePool *_storagePool;
    id <NUPurgeableStorage> _renderDestination;
    NUImageHistogram *_histogram;
    CIRenderTask *_renderTask;
    id <NUScalePolicy> _scalePolicy;
}

- (id)result;
- (id)cacheKey;
- (_Bool)render:(out id *)arg1;
- (id)initWithRequest:(id)arg1;
- (void)cleanUp;
- (_Bool)complete:(out id *)arg1;
- (_Bool)wantsOutputGeometry;
- (_Bool)wantsOutputImage;
- (id)scalePolicy;
- (id)initWithHistogramRequest:(id)arg1;
- (id)histogramRequest;

@end
