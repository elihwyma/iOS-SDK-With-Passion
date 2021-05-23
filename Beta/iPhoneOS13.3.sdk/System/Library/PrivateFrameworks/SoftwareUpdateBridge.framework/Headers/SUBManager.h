/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateBridge.framework/SoftwareUpdateBridge
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue, OS_xpc_object, SUBManagerDelegate;

@interface SUBManager : NSObject

{
    _Atomic _Bool _hasQueriedStateOnceFlag;
    id <SUBManagerDelegate> _delegate;
    NSObject<OS_xpc_object> *_serverConnection;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSObject<OS_xpc_object> *serverConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id <SUBManagerDelegate> delegate;

+ (void)initialize;

- (void)dealloc;
- (id)_serverConnection;
- (id)initWithDelegate:(id)arg1;
- (void)performMigration;
- (void)startDownload:(id)arg1;
- (void)installUpdate:(id)arg1;
- (void)_forwardDownloadProgress:(id)arg1;
- (void)_forwardScanResult:(id)arg1;
- (void)_forwardInstallResult:(id)arg1;
- (void)_forwardInstallationCanProceed:(id)arg1;
- (void)_forwardInstallationWillProceed:(id)arg1;
- (void)_forwardUserDidAcceptTermsAndConditionsChanged:(id)arg1;
- (void)_forwardUserInstallRequestTypeChanged:(id)arg1;
- (void)_forwardInstallationAwaitingUserInteraction:(id)arg1;
- (void)userDidAcceptTermsAndConditionsForUpdate:(id)arg1;
- (void)supportsInstallTonightWithCompletion:(CDUnknownBlockType)arg1;
- (void)managerState:(CDUnknownBlockType)arg1;
- (void)scanForUpdates;
- (void)startDownload:(id)arg1 passcode:(id)arg2;
- (void)installUpdate:(id)arg1 passcode:(id)arg2;
- (void)getCloudDescriptors:(CDUnknownBlockType)arg1;
- (void)removeCloudDescriptor:(id)arg1;
- (void)userDidAcceptTermsAndConditionsForUpdate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)purgeUpdate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setUserInstallRequestTypeForUpdate:(id)arg1 userInstallRequestType:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendTermsRequest:(CDUnknownBlockType)arg1;

@end
