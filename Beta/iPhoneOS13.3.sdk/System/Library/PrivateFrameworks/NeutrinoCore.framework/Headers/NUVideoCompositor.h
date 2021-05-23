/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableSet, NSString;

@protocol OS_dispatch_queue;

@interface NUVideoCompositor : NSObject

{
    _Atomic unsigned long long _requestCounter;
    NSObject<OS_dispatch_queue> *_renderingQueue;
    NSMutableSet *_inFlightRequests;
    struct os_unfair_lock_s _inFlightRequestsLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSDictionary *sourcePixelBufferAttributes;
@property (nonatomic, readonly) NSDictionary *requiredPixelBufferAttributesForRenderContext;
@property (nonatomic, readonly) _Bool supportsWideColorSourceFrames;

- (id)init;
- (void)renderContextChanged:(id)arg1;
- (void)startVideoCompositionRequest:(id)arg1;
- (void)cancelAllPendingVideoCompositionRequests;
- (void)fulfillVideoCompositionRequest:(id)arg1;
- (_Bool)testAndSetVideoCompositionRequestFinished:(id)arg1;
- (id)videoFramesFromRequest:(id)arg1;
- (void)failVideoCompositionRequest:(id)arg1 error:(id)arg2;

@end
