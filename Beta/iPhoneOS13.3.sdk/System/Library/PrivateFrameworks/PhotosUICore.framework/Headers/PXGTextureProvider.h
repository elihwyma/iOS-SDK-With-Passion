/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSIndexSet, NSMutableIndexSet, NSString, PXGViewEnvironment;

@protocol OS_dispatch_queue, PXGTextureProviderDelegate;

@interface PXGTextureProvider : NSObject

{
    NSMutableIndexSet *_lookupLock_activeRequests;
    struct os_unfair_lock_s _lookupLock;
    CDStruct_1b544862 *_imageDataSpecs;
    long long _imageDataSpecsCount;
    long long _imageDataSpecsCapacity;
    void **_textureAtlasManagers;
    CDStruct_1b544862 _lastImageDataSpec;
    long long _lastImageDataSpecIndex;
    NSMutableIndexSet *_requestIDsPendingCancellation;
    PXGViewEnvironment *_viewEnvironment;
    NSIndexSet *_requestIDsInTargetRect;
    id <PXGTextureProviderDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_requestQueue;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_processingQueue;
    CDStruct_93894d6c _interactionState;
}

@property (weak, nonatomic) id <PXGTextureProviderDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
@property (retain, nonatomic) PXGViewEnvironment *viewEnvironment;
@property (nonatomic) CDStruct_93894d6c interactionState;
@property (copy, nonatomic) NSIndexSet *requestIDsInTargetRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (struct _NSRange)requestTexturesForSpritesInRange:(struct _PXGSpriteIndexRange)arg1 geometries:(CDStruct_3ab912e1 *)arg2 styles:(CDStruct_506f5052 *)arg3 infos:(CDStruct_9d1ebe49 *)arg4 inLayout:(id)arg5;
- (void)viewEnvironmentDidChange:(id)arg1;
- (void)registerImageDataSpecs:(id)arg1;
- (void)interactionStateDidChange:(CDStruct_93894d6c)arg1;
- (void)didFinishRequestingTextures;
- (void)cancelTextureRequests:(id)arg1;
- (long long)registerImageDataSpec:(CDStruct_1b544862)arg1;
- (void)cancelTextureRequestDeferred:(int)arg1;
- (void)performDeferredCancellations;
- (_Bool)isRequestActive:(int)arg1;
- (void)requestUpdatedTexturesForDisplayLink:(id)arg1;
- (void)provideNothingForRequestID:(int)arg1;
- (void)provideCGImage:(struct CGImage *)arg1 orientation:(unsigned int)arg2 forRequestID:(int)arg3;
- (void)provideCGImage:(struct CGImage *)arg1 forRequestID:(int)arg2;
- (void)provideImageData:(id)arg1 withSpecAtIndex:(long long)arg2 bytesPerRow:(unsigned long long)arg3 contentsRect:(struct CGRect)arg4 forRequestID:(int)arg5;
- (void)providePixelBuffer:(struct __CVBuffer *)arg1 orientationTransform:(struct CGAffineTransform)arg2 forRequestID:(int)arg3;
- (void)setNeedsRegisterToDisplayLinkUpdates;
- (void)setNeedsUnregisterFromDisplayLinkUpdates;
- (void)providePayload:(id)arg1 forRequestID:(int)arg2;
- (void)prepareImageDataSpecs;
- (CDStruct_1b544862)imageDataSpecAtIndex:(long long)arg1;
- (long long)requestQueue_indexForImageDataSpec:(CDStruct_1b544862)arg1;
- (id)textureAtlasManagerAtSpecIndex:(long long)arg1;
- (void)setTextureAtlasManager:(id)arg1 atSpecIndex:(long long)arg2;
- (void)clearTextureAtlasManagerCache;

@end
