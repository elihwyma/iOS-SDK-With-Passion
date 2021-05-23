/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class NSMapTable, VNImageBuffer, VNObservationsCache, VNRequestForensics, VNRequestPerformer;

__attribute__((visibility("hidden")))
@interface VNRequestPerformingContext : NSObject

{
    unsigned int _qosClass;
    VNRequestPerformer *_requestPerformer_DO_NOT_DIRECTLY_ACCESS;
    VNImageBuffer *_imageBuffer_DO_NOT_DIRECTLY_ACCESS;
    NSMapTable *_requestToObservationsCacheKeyMap;
    VNObservationsCache *_observationsCache;
    VNRequestForensics *_requestForensics;
}

- (id)imageBufferAndReturnError:(id *)arg1;
- (void)setModelRequestHandler:(id)arg1;
- (id)modelRequestHandlerAndReturnError:(id *)arg1;
- (void)recordSequencedObservationsForRequest:(id)arg1;
- (id)previousSequencedObservationsForRequest:(id)arg1;
- (id)initWithRequestPerformer:(id)arg1 imageBuffer:(id)arg2 forensics:(id)arg3 observationsCache:(id)arg4;
- (id)initWithRequestPerformer:(id)arg1 imageBuffer:(id)arg2 forensics:(id)arg3 observationsCache:(id)arg4 qosClass:(unsigned int)arg5;
- (id)_observationsCacheKeyForRequest:(id)arg1;
- (id)requestPerformerAndReturnError:(id *)arg1;
- (_Bool)performDependentRequests:(id)arg1 onBehalfOfRequest:(id)arg2 error:(id *)arg3;
- (id)requestForensics;
- (unsigned int)qosClass;
- (_Bool)cacheObservationsForRequest:(id)arg1;
- (id)cachedObservationsForRequest:(id)arg1;

@end
