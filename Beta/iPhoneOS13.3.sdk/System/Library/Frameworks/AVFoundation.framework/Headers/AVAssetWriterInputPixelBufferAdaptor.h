/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptorInternal, NSDictionary, NSString;

@interface AVAssetWriterInputPixelBufferAdaptor : NSObject

{
    AVAssetWriterInputPixelBufferAdaptorInternal *_internal;
}

@property (nonatomic, readonly) AVAssetWriterInput *assetWriterInput;
@property (nonatomic, readonly) NSDictionary *sourcePixelBufferAttributes;
@property (nonatomic, readonly) struct __CVPixelBufferPool *pixelBufferPool;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)assetWriterInputPixelBufferAdaptorWithAssetWriterInput:(id)arg1 sourcePixelBufferAttributes:(id)arg2;

- (id)init;
- (void)dealloc;
- (void)declareKeyPathDependenciesWithRegistry:(id)arg1;
- (void)addCallbackToCancelDuringDeallocation:(id)arg1;
- (_Bool)appendPixelBuffer:(struct __CVBuffer *)arg1 withPresentationTime:(CDStruct_1b6d18a9)arg2;
- (id)initWithAssetWriterInput:(id)arg1 sourcePixelBufferAttributes:(id)arg2;

@end
