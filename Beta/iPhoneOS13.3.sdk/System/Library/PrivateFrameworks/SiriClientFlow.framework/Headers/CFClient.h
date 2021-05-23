/*
 Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
 */

#import <Foundation/NSObject.h>

@class CFCommandQueuer;

@protocol AFServiceHelper, OS_dispatch_queue;

@interface CFClient : NSObject

{
    id <AFServiceHelper> _serviceHelper;
    CFCommandQueuer *_commandQueuer;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain) id <AFServiceHelper> serviceHelper;
@property (retain) CFCommandQueuer *commandQueuer;
@property (retain) NSObject<OS_dispatch_queue> *queue;

- (void)executeCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)warmUpWithSignal:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancelOperationsForRequestID:(id)arg1;
- (void)resetScriptExecutorCache;
- (id)initWithServiceHelper:(id)arg1 withConnectionName:(id)arg2;
- (id)initWithClientLiteWithConnectionName:(id)arg1;
- (void)rebootScripter;
- (void)_executeRemoteCommand:(id)arg1 peerInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)runMaintenanceWithCompletion:(CDUnknownBlockType)arg1;
- (void)executeCommand:(id)arg1 peerInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
