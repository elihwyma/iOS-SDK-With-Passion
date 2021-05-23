/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <ITMLKit/IKJSObject.h>

@class NSXPCConnection;

__attribute__((visibility("hidden")))
@interface VUIJSNetworkInterface : IKJSObject

{
    int _playbackReportToken;
    NSXPCConnection *_connection;
    _Bool _suppressServerConfigNotifications;
}

@property _Bool suppressServerConfigNotifications;

- (void)dealloc;
- (id)_connection;
- (void)cancelRequest:(id)arg1;
- (id)initWithAppContext:(id)arg1;
- (void)_handleAppLibChange:(id)arg1;
- (void)_handleServerConfigChange:(id)arg1;
- (void)_handlePlaybackReport:(id)arg1;
- (long long)_requestOptionsFromJSOptions:(id)arg1;
- (void)_enqueueNetworkOp:(id)arg1 withJSCallback:(id)arg2;
- (id)makeRequest:(id)arg1:(id)arg2;
- (id)makeUpNextRequest:(id)arg1:(id)arg2;
- (void)fetchConfiguration:(_Bool)arg1:(id)arg2;
- (void)invalidateConfiguration;

@end
