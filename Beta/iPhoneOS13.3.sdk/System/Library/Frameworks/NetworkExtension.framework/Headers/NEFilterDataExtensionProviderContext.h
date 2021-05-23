/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEFilterExtensionProviderContext.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSObject, NSString, NSXPCListenerEndpoint;

@protocol OS_dispatch_source, OS_xpc_object;

@interface NEFilterDataExtensionProviderContext : NEFilterExtensionProviderContext

{
    _Bool _controlProviderExists;
    NSObject<OS_xpc_object> *_clientListener;
    NSXPCListenerEndpoint *_listenerEndpoint;
    NSMutableDictionary *_browserFlows;
    NSMutableDictionary *_socketFlows;
    NSMutableDictionary *_channelFlows;
    NSMutableArray *_socketExceptions;
    NSObject<OS_dispatch_source> *_source;
    NSDictionary *_remediationMap;
    NSDictionary *_URLAppendStringMap;
    NSMutableArray *_pendingConnections;
}

@property _Bool controlProviderExists;
@property (retain) NSObject<OS_xpc_object> *clientListener;
@property (retain) NSXPCListenerEndpoint *listenerEndpoint;
@property (retain) NSMutableDictionary *browserFlows;
@property (retain) NSMutableDictionary *socketFlows;
@property (retain) NSMutableDictionary *channelFlows;
@property (retain, nonatomic) NSMutableArray *socketExceptions;
@property (retain) NSObject<OS_dispatch_source> *source;
@property (retain) NSDictionary *remediationMap;
@property (retain) NSDictionary *URLAppendStringMap;
@property (retain) NSMutableArray *pendingConnections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (id)extensionPoint;
- (void)dispose;
- (void)startFilterWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)provideRemediationMap:(id)arg1;
- (void)provideURLAppendStringMap:(id)arg1;
- (void)fetchProviderConnectionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)providerControlSocketFileHandle:(id)arg1;
- (void)handleRulesChanged;
- (void)report:(id)arg1;
- (void)sendBrowserContentFilterServerRequest;
- (void)sendSocketContentFilterRequest;
- (void)fetchCurrentRulesForFlow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getSourceAppInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)applySettings:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)closePendingConnections;
- (void)teardownSocketSource;
- (id)adjustDataToFilter:(id)arg1 startOffset:(unsigned long long *)arg2 flow:(id)arg3 direction:(long long)arg4;
- (void)reportFlow:(id)arg1 forVerdict:(id)arg2 event:(long long)arg3;
- (id)cleanRemediationURL:(id)arg1 flow:(id)arg2 providerConfiguration:(id)arg3;
- (id)sanitizeRemediationButtonText:(id)arg1;
- (void)closeBrowserFilterFlow:(id)arg1 forUUID:(id)arg2;
- (void)handleNewFlowMessageComplete:(id)arg1 flow:(id)arg2 flowUUID:(const char *)arg3 direction:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)reportFlow:(id)arg1 forVerdict:(id)arg2 absoluteVerdict:(id)arg3;
- (id)getDataVerdictWithControlVerdict:(id)arg1 flow:(id)arg2 data:(id)arg3 startOffset:(unsigned long long)arg4 direction:(long long)arg5;
- (void)handleNewFlowMessage:(id)arg1 filloutReply:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)handleAddDataMessage:(id)arg1 filloutReply:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)handleDataCompleteMessage:(id)arg1 filloutReply:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)handleRemediationMessage:(id)arg1 filloutReply:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)handleNewChannelFlowMessage:(id)arg1 filloutReply:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)handleChannelMessageMoreData:(id)arg1 filloutReply:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)handleChannelMessageFlowFinish:(id)arg1 filloutReply:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)handleClientMessage:(id)arg1 filloutReply:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)reportFlowClosed:(id)arg1;
- (_Bool)blessClient:(id)arg1;
- (void)purgeData:(int)arg1 size:(int)arg2 buf:(char *)arg3 bufSize:(int)arg4;
- (_Bool)socketContentFilterWriteMessageWithControlSocket:(int)arg1 socketID:(unsigned long long)arg2 drop:(_Bool)arg3 inboundPassOffset:(unsigned long long)arg4 inboundPeekOffset:(unsigned long long)arg5 outboundPassOffset:(unsigned long long)arg6 outboundPeekOffset:(unsigned long long)arg7;
- (void)closeSocketFlow:(id)arg1 socketID:(unsigned long long)arg2;
- (void)handleSocketSourceEventAttachComplete:(id)arg1 socketID:(unsigned long long)arg2 sendNewFlowReply:(CDUnknownBlockType)arg3;
- (void)handleSocketSourceEventWithSocket:(int)arg1;
- (void)setupSocketSourceWithControlSocket:(int)arg1;
- (void)setupSocketContentFilterWithControlSocket:(int)arg1;
- (void)acceptNewClientConnection:(id)arg1;
- (void)channelContentFilterWriteMessageForFlowUUID:(id)arg1 xpc_object_t:(id)arg2 drop:(_Bool)arg3 inboundPassOffset:(unsigned long long)arg4 inboundPeekOffset:(unsigned long long)arg5 outboundPassOffset:(unsigned long long)arg6 outboundPeekOffset:(unsigned long long)arg7;
- (void)closeChannelFlow:(id)arg1 flowUUID:(id)arg2;
- (void)handleChannelSourceEventAttachComplete:(id)arg1 flowUUID:(id)arg2 sendNewFlowReply:(CDUnknownBlockType)arg3;
- (id)trimURLFromFlow:(id)arg1;
- (void)resumeFlow:(id)arg1 withVerdict:(id)arg2;

@end
