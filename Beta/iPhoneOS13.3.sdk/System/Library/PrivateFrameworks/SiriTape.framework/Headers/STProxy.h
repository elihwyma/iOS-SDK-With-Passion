/*
 Image: /System/Library/PrivateFrameworks/SiriTape.framework/SiriTape
 */

#import <Foundation/NSObject.h>

@class GCDAsyncSocket, NSArray, NSMutableArray, NSString, NSURL, STProxySocketDelegate;

@protocol OS_dispatch_queue, STAceObjectHandler;

@interface STProxy : NSObject

{
    GCDAsyncSocket *_socket;
    STProxySocketDelegate *_proxySocketDelegate;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _useSpeechLogs;
    _Bool _autoExit;
    unsigned long long _speechLogsIndex;
    NSArray *_speechLogs;
    NSURL *_testSpeechURL;
    NSMutableArray *_replayCompletions;
    NSString *_previousAccountIdentifier;
    id <STAceObjectHandler> _aceObjectHandler;
}

@property (retain, nonatomic) NSString *previousAccountIdentifier;
@property (retain, nonatomic) id <STAceObjectHandler> aceObjectHandler;

+ (id)sharedServer;

- (id)init;
- (void)dealloc;
- (void)disconnect;
- (void)addObserverActionForType:(long long)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)observeAndLogClientFlowPerformanceMetrics;
- (void)didFinishedOneRequestAndExpectMore:(_Bool)arg1;
- (void)_startProxyWithActiveServerURL:(id)arg1 handler:(id)arg2 replayFileURL:(id)arg3;
- (void)_loadSpeechLogsFromURL:(id)arg1;
- (void)_sendNextSpeechRequest;
- (void)startProxyWithActiveServerURL:(id)arg1 handler:(id)arg2;
- (void)startProxyRecordingWithActiveServerURL:(id)arg1;
- (void)startProxyServerWithReplayFileURL:(id)arg1;
- (void)startProxyServerWithReplayFileURL:(id)arg1 speechLogURL:(id)arg2;
- (void)updateLocalScriptsForReplayFile:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)addReplayCompletion:(CDUnknownBlockType)arg1;

@end
