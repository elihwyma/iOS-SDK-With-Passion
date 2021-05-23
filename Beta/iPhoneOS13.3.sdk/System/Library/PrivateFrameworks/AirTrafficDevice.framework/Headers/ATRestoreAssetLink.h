/*
 Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

#import <NSObject.h>

@class MBManager, NSArray, NSMutableArray, NSString;

@protocol ATAssetLinkDelegate, ATRestoreAssetLinkDelegate, OS_dispatch_queue;

@interface ATRestoreAssetLink : NSObject

{
    MBManager *_mbManager;
    NSMutableArray *_queuedAssets;
    NSMutableArray *_activeAssets;
    int _restoreState;
    _Bool _isRestoring;
    _Bool _batchingIsSupported;
    _Bool _singleAssetMode;
    unsigned long long _batchSize;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _open;
    id <ATAssetLinkDelegate> _delegate;
    NSArray *_allowedDataClasses;
    id <ATRestoreAssetLinkDelegate> _restoreDelegate;
}

@property (copy, nonatomic) NSArray *allowedDataClasses;
@property (weak, nonatomic) id <ATRestoreAssetLinkDelegate> restoreDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isOpen) _Bool open;
@property (weak, nonatomic) id <ATAssetLinkDelegate> delegate;

- (id)init;
- (_Bool)open;
- (void)close;
- (unsigned long long)priority;
- (void)environmentMonitorDidChangeNetworkReachability:(id)arg1;
- (unsigned long long)maximumBatchSize;
- (void)manager:(id)arg1 didUpdateProgress:(float)arg2 estimatedTimeRemaining:(unsigned long long)arg3;
- (void)managerDidFinishRestore:(id)arg1;
- (void)managerDidCancelRestore:(id)arg1;
- (void)manager:(id)arg1 didFailRestoreWithError:(id)arg2;
- (void)managerDidLoseConnectionToService:(id)arg1;
- (void)finishRestore;
- (void)_processQueuedAssets;
- (_Bool)_hasConnectivity;
- (id)_atErrorFromMBError:(id)arg1;
- (id)enqueueAssets:(id)arg1 force:(_Bool)arg2;
- (_Bool)canEnqueueAsset:(id)arg1;
- (void)cancelAssets:(id)arg1;
- (void)prioritizeAsset:(id)arg1;
- (_Bool)linkIsReady;
- (void)restoreSessionActiveWithCompletion:(CDUnknownBlockType)arg1;
- (void)processRestoreFailureForAsset:(id)arg1;

@end
