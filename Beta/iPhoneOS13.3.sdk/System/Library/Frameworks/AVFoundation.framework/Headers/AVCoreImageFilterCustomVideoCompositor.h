/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class CIContext, NSDictionary, NSString;

@protocol OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVCoreImageFilterCustomVideoCompositor : NSObject

{
    NSObject<OS_dispatch_group> *_filteringRequestsInFlight;
    _Bool _shouldCancelAllRequests;
    NSObject<OS_dispatch_queue> *_defaultCIContextThreadSafety;
    CIContext *_defaultCIContext;
}

@property _Bool shouldCancelAllRequests;
@property (readonly) NSObject<OS_dispatch_group> *filteringRequestsInFlight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSDictionary *sourcePixelBufferAttributes;
@property (nonatomic, readonly) NSDictionary *requiredPixelBufferAttributesForRenderContext;
@property (nonatomic, readonly) _Bool supportsWideColorSourceFrames;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (void)renderContextChanged:(id)arg1;
- (void)startVideoCompositionRequest:(id)arg1;
- (void)cancelAllPendingVideoCompositionRequests;
- (void)_willDeallocOrFinalize;
- (id)defaultCIContext;

@end
