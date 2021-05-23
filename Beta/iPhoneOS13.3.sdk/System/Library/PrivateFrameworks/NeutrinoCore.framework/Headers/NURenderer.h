/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@class CIContext, NSString;

@protocol OS_dispatch_queue;

@interface NURenderer : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    CIContext *_context;
}

@property (nonatomic, readonly) CIContext *context;
@property (nonatomic, readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (struct CGColorSpace *)workingColorSpace;
+ (int)workingFormat;
+ (id)_renderContextOptionsWithOptions:(id)arg1 nameSuffix:(id)arg2;
+ (id)rendererWithGLContext:(id)arg1 options:(id)arg2;
+ (id)rendererWithMetalDevice:(id)arg1 options:(id)arg2;
+ (id)defaultRenderContextOptions;
+ (_Bool)defaultUseHalfFloat;
+ (_Bool)allowClampToAlpha;

- (id)init;
- (id)initWithCIContext:(id)arg1;
- (id)imageForSurface:(id)arg1 options:(id)arg2 owner:(id)arg3;
- (id)renderDestinationForSurface:(id)arg1 owner:(id)arg2;
- (id)renderImage:(id)arg1 rect:(CDStruct_996ac03c)arg2 toDestination:(id)arg3 atPoint:(CDStruct_912cb5d2)arg4 error:(out id *)arg5;

@end
