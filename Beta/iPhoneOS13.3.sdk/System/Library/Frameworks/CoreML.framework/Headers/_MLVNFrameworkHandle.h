/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

__attribute__((visibility("hidden")))
@interface _MLVNFrameworkHandle : NSObject

{
    _Bool _valid;
    CDUnknownFunctionPointerType _scenePrintsFromPixelBuffersImpl;
    CDUnknownFunctionPointerType _scenePrintsFromPixelBuffersUsesCPUOnlyImpl;
    CDUnknownFunctionPointerType _scenePrintElementCountImpl;
    CDUnknownFunctionPointerType _scenePrintLengthImpl;
    Class _VNImageBufferClass;
}

@property (nonatomic, readonly) CDUnknownFunctionPointerType scenePrintsFromPixelBuffersImpl;
@property (nonatomic, readonly) CDUnknownFunctionPointerType scenePrintsFromPixelBuffersUsesCPUOnlyImpl;
@property (nonatomic, readonly) CDUnknownFunctionPointerType scenePrintElementCountImpl;
@property (nonatomic, readonly) CDUnknownFunctionPointerType scenePrintLengthImpl;
@property (nonatomic, readonly) Class VNImageBufferClass;
@property (nonatomic, readonly, getter=isValid) _Bool valid;

+ (id)sharedHandle;
+ (id)addOrientation:(unsigned int)arg1 toOptions:(id)arg2;

- (id)init;
- (id)scenePrintsFromPixelBuffers:(struct __CVBuffer *)arg1 version:(long long)arg2 augmentationOptions:(id)arg3 useCPUOnly:(_Bool)arg4 error:(id *)arg5;
- (unsigned long long)elementCountForScenePrintRequestRevision:(long long)arg1;
- (unsigned long long)lengthInBytesForScenePrintRequestRevision:(long long)arg1;
- (struct __CVBuffer *)createPixelBufferFromVNImageBuffer:(id)arg1 constraint:(id)arg2 cropRect:(struct CGRect)arg3 cropAndScaleOption:(unsigned long long)arg4 options:(id)arg5 error:(id *)arg6;
- (struct __CVBuffer *)createPixelBufferFromImageAtURL:(id)arg1 constraint:(id)arg2 cropRect:(struct CGRect)arg3 cropAndScaleOption:(unsigned long long)arg4 options:(id)arg5 error:(id *)arg6;
- (struct __CVBuffer *)createPixelBufferFromCGImage:(struct CGImage *)arg1 constraint:(id)arg2 cropRect:(struct CGRect)arg3 cropAndScaleOption:(unsigned long long)arg4 options:(id)arg5 error:(id *)arg6;

@end
