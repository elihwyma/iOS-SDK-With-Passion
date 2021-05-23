/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVWeakReference, NSArray, NSMutableArray, NSString;

@protocol OS_dispatch_queue;

@interface AVCaptureDeferredPhotoProcessor : NSObject

{
    NSString *_applicationID;
    NSObject<OS_dispatch_queue> *_fcdppQueue;
    struct OpaqueFigCaptureDeferredPhotoProcessor *_fcdpp;
    AVWeakReference *_weakReference;
    struct OpaqueFigSimpleMutex *_requestsLock;
    NSMutableArray *_requests;
}

@property (nonatomic, readonly) NSArray *persistentlyStoredDeferredPhotoProxies;

+ (void)initialize;
+ (id)sharedPhotoProcessor;
+ (id)sharedPhotoProcessorForApplicationID:(id)arg1;

- (void)dealloc;
- (_Bool)isPaused;
- (void)setPaused:(_Bool)arg1;
- (void)_handleNotification:(struct __CFString *)arg1 payload:(id)arg2;
- (void)_handleServerConnectionDiedNotification;
- (id)_initWithApplicationID:(id)arg1;
- (void)_setFigCaptureDeferredPhotoProcessor:(struct OpaqueFigCaptureDeferredPhotoProcessor *)arg1;
- (int)_establishServerConnection;
- (void)_handleWillBeginProcessingPhotoProxyNotificationWithPayload:(id)arg1 forRequest:(id)arg2;
- (void)_handleDidFinishProcessingPhotoProxyNotificationWithPayload:(id)arg1 forRequest:(id)arg2;
- (id)_processingRequestForCaptureRequestIdentifier:(id)arg1 photoIdentifier:(id)arg2;
- (void)_dispatchFailureCallbacks:(unsigned int)arg1 forProcessingRequest:(id)arg2 error:(id)arg3;
- (void)processPhotoProxy:(id)arg1 queuePosition:(id)arg2 delegate:(id)arg3;
- (_Bool)cancelProcessingForPhotoProxy:(id)arg1 error:(id *)arg2;
- (void)deletePersistentStorageForPhotoProxy:(id)arg1;

@end
