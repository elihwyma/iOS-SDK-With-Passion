/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class CUMobileDevice, CURunLoopThread;

@protocol OS_dispatch_queue;

@interface CUMobileDeviceSession : NSObject

{
    _Bool _activateCalled;
    _Bool _invalidateCalled;
    CURunLoopThread *_mdRunLoopThread;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CUMobileDevice *_peerDevice;
    CDUnknownBlockType _invalidationHandler;
    CDUnknownBlockType _promptForPINHandler;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) CUMobileDevice *peerDevice;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (copy, nonatomic) CDUnknownBlockType promptForPINHandler;

- (id)init;
- (void)invalidate;
- (void)_invalidated;
- (void)activate;
- (void)pairSetupWithFlags:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_pairSetupWithFlags:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pairSetupTryPIN:(id)arg1;
- (void)_pairSetupTryPIN:(id)arg1;
- (void)pairVerifyWithFlags:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_pairVerifyWithFlags:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)unpairWithCompletion:(CDUnknownBlockType)arg1;
- (void)_unpairWithCompletion:(CDUnknownBlockType)arg1;

@end
