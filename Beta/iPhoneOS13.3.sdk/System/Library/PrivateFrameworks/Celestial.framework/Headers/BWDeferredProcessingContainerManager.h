/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWDeferredContainerManagerBase.h>

@interface BWDeferredProcessingContainerManager : BWDeferredContainerManagerBase

{
    struct OpaqueFigCaptureDeferredContainerManager *_xpcContainerManager;
}

+ (id)sharedInstance;

- (id)init;
- (void)_dispatchNotification:(id)arg1 value:(id)arg2;
- (void)_handleServerConnectionDiedNotification;
- (int)waitForShaderCompilation;
- (id)manifestsForApplicationID:(id)arg1 err:(int *)arg2;
- (int)deleteContainerForApplicationID:(id)arg1 captureRequestIdentifier:(id)arg2;
- (void)_setXPCContainerManager:(struct OpaqueFigCaptureDeferredContainerManager *)arg1;
- (int)_queryContainerStatus:(id)arg1 captureRequestIdentifier:(id)arg2 status:(int *)arg3;
- (id)_copyRemoteContainer:(id)arg1 captureRequestIdentifier:(id)arg2 baseFolder:(id)arg3 err:(int *)arg4;
- (int)_releaseRemoteContainer:(id)arg1 captureRequestIdentifier:(id)arg2;
- (id)createProcessingContainerWithApplicationID:(id)arg1 captureRequestIdentifier:(id)arg2 err:(int *)arg3;
- (void)releaseProcessingContainer:(id)arg1;

@end
