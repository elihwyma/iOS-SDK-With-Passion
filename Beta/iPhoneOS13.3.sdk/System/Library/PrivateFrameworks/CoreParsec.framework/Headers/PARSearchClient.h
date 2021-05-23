/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, NSXPCConnection, NSXPCListenerEndpoint, PARImageLoader, PARSessionConfiguration;

@protocol OS_dispatch_queue, PARDaemonXPC;

@interface PARSearchClient : NSObject

{
    id <PARDaemonXPC> _remoteObject;
    NSMutableArray *_sessions;
    NSObject<OS_dispatch_queue> *_queue;
    _Atomic _Bool _configured;
    PARSessionConfiguration *_configuration;
    NSXPCConnection *_connection;
    PARImageLoader *_imageLoader;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain) PARSessionConfiguration *configuration;
@property (nonatomic, readonly) NSXPCConnection *connection;
@property (retain) NSXPCListenerEndpoint *endpoint;
@property (readonly) PARImageLoader *imageLoader;

+ (id)sharedClient;
+ (id)daemonConnection;
+ (id)_deafListenerEndpoint;

- (id)init;
- (void)dealloc;
- (id)initWithConnection:(id)arg1;
- (void)configure:(id)arg1;
- (void)_invalidateConnection;
- (void)addSession:(id)arg1;
- (void)addCompletion:(id)arg1 forInput:(id)arg2;
- (void)clearCompletionsFromDate:(id)arg1 toDate:(id)arg2;
- (void)updateParameters:(double)arg1 safariLast1day:(double)arg2 safariLast1week:(double)arg3 safariLast1month:(double)arg4 safariAll:(double)arg5 safariMostRecent:(double)arg6 minThresholdToSend:(double)arg7;
- (void)bagDidLoad:(id)arg1 error:(id)arg2;
- (void)didDownloadResource:(id)arg1;
- (void)didDeleteResource:(id)arg1;
- (void)sessionDidChange:(id)arg1;
- (void)bag:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)forceFetchBag:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (unsigned long long)request:(id)arg1 request:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)listSessions:(CDUnknownBlockType)arg1;
- (void)fileHandleAndAttributesForResource:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getImageMap:(CDUnknownBlockType)arg1;
- (void)reportFeedback:(id)arg1 feedback:(id)arg2 queryId:(unsigned long long)arg3;

@end
