/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDOperation.h>

@class CKOperationResult, NSString;

__attribute__((visibility("hidden")))
@interface CKDProxyOperation : CKDOperation

{
    _Bool _didHandleCancel;
    CDUnknownBlockType _operationProgressedBlock;
    CKOperationResult *_cachedResult;
}

@property (retain, nonatomic) CKOperationResult *cachedResult;
@property (nonatomic) _Bool didHandleCancel;
@property (copy, nonatomic) CDUnknownBlockType operationProgressedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isInvalidated) _Bool invalidated;

- (void)main;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)operationResult;
- (_Bool)isProxyOperation;
- (_Bool)shouldCheckAppVersion;
- (void)wasUnexpectedlyUnregisteredForOperationID:(id)arg1;
- (void)operationWithID:(id)arg1 didProgress:(id)arg2;
- (void)operationWithID:(id)arg1 didComplete:(id)arg2;
- (void)_cancelOnCallbackQueueIfNecessary;

@end
