/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

#import <CameraUI/Swift-Protocol.h>

@class CAMNebulaDaemonProxyManager, NSMutableArray, NSMutableDictionary, NSString;

@protocol CAMIrisVideoControllerDelegate, OS_dispatch_queue;

@interface CAMIrisVideoController : NSObject <Swift>

{
    id <CAMIrisVideoControllerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *__mutexQueue;
    CAMNebulaDaemonProxyManager *__nebulaDaemonProxyManager;
    NSMutableArray *__jobsToBeSent;
    NSMutableDictionary *__pendingJobs;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_mutexQueue;
@property (nonatomic, readonly) CAMNebulaDaemonProxyManager *_nebulaDaemonProxyManager;
@property (nonatomic, readonly) NSMutableArray *_jobsToBeSent;
@property (nonatomic, readonly) NSMutableDictionary *_pendingJobs;
@property (weak, nonatomic, readonly) id <CAMIrisVideoControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)stillImageRequestDidCompleteCapture:(id)arg1 error:(id)arg2;
- (void)nebulaDaemonDidCompleteLocalVideoPersistenceWithResult:(id)arg1;
- (void)_submitJob:(id)arg1;
- (void)_notifyDelegateOfVideoLocalPersistenceResult:(id)arg1 forVideoPersistenceUUID:(id)arg2;
- (id)initWithNebulaDaemonProxyManager:(id)arg1 delegate:(id)arg2;
- (_Bool)shouldHandleLivePhotoRenderingForRequest:(id)arg1;
- (void)stillImageRequest:(id)arg1 didCompleteVideoCaptureWithResult:(id)arg2;
- (_Bool)isWaitingOnNebuladForRequest:(id)arg1;

@end
