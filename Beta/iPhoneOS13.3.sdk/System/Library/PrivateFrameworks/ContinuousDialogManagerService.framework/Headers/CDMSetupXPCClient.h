/*
 Image: /System/Library/PrivateFrameworks/ContinuousDialogManagerService.framework/ContinuousDialogManagerService
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection;

@interface CDMSetupXPCClient : NSObject

{
    NSXPCConnection *_connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)_connection;
- (void)disconnect;
- (void)connect;
- (id)_remoteObjectProxy;
- (void)_clearConnectionWithError:(id)arg1;
- (void)getNLAssetStatusForType:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)getClientFlowStatusWithReply:(CDUnknownBlockType)arg1;
- (void)invalidateClientFlowCacheWithCompletion:(CDUnknownBlockType)arg1;

@end
