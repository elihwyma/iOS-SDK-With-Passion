/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class NSDictionary, VNImageSpecifier, VNObservationsCache, VNRequestPerformer;

@interface VNImageRequestHandler : NSObject

{
    NSDictionary *_options;
    VNImageSpecifier *_imageSpecifier;
    VNRequestPerformer *_requestPerformer;
    VNObservationsCache *_observationsCache;
}

+ (void)requestForcedCleanup;
+ (void)forcedCleanup;
+ (void)requestForcedCleanupWithOptions:(id)arg1;
+ (void)requestForcedCleanupWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)forcedCleanupWithOptions:(id)arg1;
+ (id)asyncProcessingDispatchQueue;

- (id)initWithCIImage:(id)arg1 options:(id)arg2;
- (_Bool)performRequests:(id)arg1 error:(id *)arg2;
- (id)initWithCGImage:(struct CGImage *)arg1 options:(id)arg2;
- (id)initWithCVPixelBuffer:(struct __CVBuffer *)arg1 options:(id)arg2;
- (id)initWithData:(id)arg1 options:(id)arg2;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (void)cancelAllRequests;
- (_Bool)prepareForPerformingRequestsOfClass:(id)arg1 error:(id *)arg2;
- (_Bool)prepareForPerformingRequests:(id)arg1 error:(id *)arg2;
- (id)imageBufferAndReturnError:(id *)arg1;
- (id)initWithImageSpecifier:(id)arg1;
- (id)initWithCVPixelBuffer:(struct __CVBuffer *)arg1 orientation:(unsigned int)arg2 options:(id)arg3;
- (id)initWithCGImage:(struct CGImage *)arg1 orientation:(unsigned int)arg2 options:(id)arg3;
- (id)initWithCIImage:(id)arg1 orientation:(unsigned int)arg2 options:(id)arg3;
- (id)initWithURL:(id)arg1 orientation:(unsigned int)arg2 options:(id)arg3;
- (id)initWithData:(id)arg1 orientation:(unsigned int)arg2 options:(id)arg3;
- (_Bool)performRequests:(id)arg1 gatheredForensics:(id *)arg2 error:(id *)arg3;

@end
