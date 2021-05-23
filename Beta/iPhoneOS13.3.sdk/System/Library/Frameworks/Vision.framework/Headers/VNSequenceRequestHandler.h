/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class VNRequestPerformer;

@interface VNSequenceRequestHandler : NSObject

{
    VNRequestPerformer *_requestPerformer;
}

+ (void)requestForcedCleanup;
+ (void)forcedCleanup;
+ (void)requestForcedCleanupWithOptions:(id)arg1;
+ (void)requestForcedCleanupWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)forcedCleanupWithOptions:(id)arg1;
+ (id)asyncProcessingDispatchQueue;

- (id)init;
- (void)cancelAllRequests;
- (_Bool)prepareForPerformingRequestsOfClass:(id)arg1 error:(id *)arg2;
- (_Bool)prepareForPerformingRequests:(id)arg1 error:(id *)arg2;
- (_Bool)_performRequests:(id)arg1 onUnvettedImageBuffer:(id)arg2 gatheredForensics:(id *)arg3 error:(id *)arg4;
- (_Bool)performRequests:(id)arg1 onCVPixelBuffer:(struct __CVBuffer *)arg2 error:(id *)arg3;
- (_Bool)performRequests:(id)arg1 onCVPixelBuffer:(struct __CVBuffer *)arg2 orientation:(unsigned int)arg3 error:(id *)arg4;
- (_Bool)performRequests:(id)arg1 onCVPixelBuffer:(struct __CVBuffer *)arg2 gatheredForensics:(id *)arg3 error:(id *)arg4;
- (_Bool)performRequests:(id)arg1 onCVPixelBuffer:(struct __CVBuffer *)arg2 orientation:(unsigned int)arg3 gatheredForensics:(id *)arg4 error:(id *)arg5;
- (_Bool)performRequests:(id)arg1 onCGImage:(struct CGImage *)arg2 error:(id *)arg3;
- (_Bool)performRequests:(id)arg1 onCGImage:(struct CGImage *)arg2 orientation:(unsigned int)arg3 error:(id *)arg4;
- (_Bool)performRequests:(id)arg1 onCGImage:(struct CGImage *)arg2 gatheredForensics:(id *)arg3 error:(id *)arg4;
- (_Bool)performRequests:(id)arg1 onCGImage:(struct CGImage *)arg2 orientation:(unsigned int)arg3 gatheredForensics:(id *)arg4 error:(id *)arg5;
- (_Bool)performRequests:(id)arg1 onCIImage:(id)arg2 error:(id *)arg3;
- (_Bool)performRequests:(id)arg1 onCIImage:(id)arg2 orientation:(unsigned int)arg3 error:(id *)arg4;
- (_Bool)performRequests:(id)arg1 onCIImage:(id)arg2 gatheredForensics:(id *)arg3 error:(id *)arg4;
- (_Bool)performRequests:(id)arg1 onCIImage:(id)arg2 orientation:(unsigned int)arg3 gatheredForensics:(id *)arg4 error:(id *)arg5;
- (_Bool)performRequests:(id)arg1 onImageURL:(id)arg2 error:(id *)arg3;
- (_Bool)performRequests:(id)arg1 onImageURL:(id)arg2 orientation:(unsigned int)arg3 error:(id *)arg4;
- (_Bool)performRequests:(id)arg1 onImageURL:(id)arg2 gatheredForensics:(id *)arg3 error:(id *)arg4;
- (_Bool)performRequests:(id)arg1 onImageURL:(id)arg2 orientation:(unsigned int)arg3 gatheredForensics:(id *)arg4 error:(id *)arg5;
- (_Bool)performRequests:(id)arg1 onImageData:(id)arg2 error:(id *)arg3;
- (_Bool)performRequests:(id)arg1 onImageData:(id)arg2 orientation:(unsigned int)arg3 error:(id *)arg4;
- (_Bool)performRequests:(id)arg1 onImageData:(id)arg2 orientation:(unsigned int)arg3 gatheredForensics:(id *)arg4 error:(id *)arg5;
- (_Bool)performRequests:(id)arg1 onImageSpecifier:(id)arg2 error:(id *)arg3;
- (_Bool)performRequests:(id)arg1 onImageSpecifier:(id)arg2 gatheredForensics:(id *)arg3 error:(id *)arg4;

@end
