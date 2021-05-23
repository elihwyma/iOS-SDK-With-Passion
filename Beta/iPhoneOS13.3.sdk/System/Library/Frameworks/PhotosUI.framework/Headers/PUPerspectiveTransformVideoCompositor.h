/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class AVVideoCompositionRenderContext, CIContext, NSDictionary, NSOperationQueue, NSString;

@interface PUPerspectiveTransformVideoCompositor : NSObject

{
    CIContext *_imageContext;
    AVVideoCompositionRenderContext *_compositionRenderContext;
    NSOperationQueue *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSDictionary *sourcePixelBufferAttributes;
@property (nonatomic, readonly) NSDictionary *requiredPixelBufferAttributesForRenderContext;
@property (nonatomic, readonly) _Bool supportsWideColorSourceFrames;

+ (double)greatestNormalizedInsetForPerspectiveTransform:(CDStruct_8e0628e6)arg1 dimensions:(struct CGSize)arg2;

- (id)init;
- (id)_imageContext;
- (void)renderContextChanged:(id)arg1;
- (void)startVideoCompositionRequest:(id)arg1;
- (void)cancelAllPendingVideoCompositionRequests;

@end
