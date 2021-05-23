/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol NetDiagnosticsShimDelegate, OS_dispatch_queue, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface NetDiagnosticsShim : NSObject

{
    NSObject<OS_xpc_object> *_netDiagServiceConnection;
    NSObject<OS_xpc_object> *_netDiagNotificationListener;
    NSObject<OS_xpc_object> *_netDiagNotificationConnection;
    NSObject<OS_dispatch_queue> *_netDiagConnQueue;
    NSObject<OS_dispatch_queue> *_netDiagMsgQueue;
    id <NetDiagnosticsShimDelegate> _delegate;
    NSString *_taskName;
}

@property (retain, nonatomic) NSString *taskName;
@property (retain, nonatomic) id <NetDiagnosticsShimDelegate> delegate;

- (void)dealloc;
- (void)invalidateConnections;
- (id)initWithTaskName:(id)arg1 queue:(id)arg2;
- (_Bool)startNetDiagnosticTaskWithOptions:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (_Bool)stopNetDiagnosticTaskWithReply:(CDUnknownBlockType)arg1;
- (_Bool)netDiagnosticTaskStatusWithReply:(CDUnknownBlockType)arg1;
- (id)_connectionForServiceNamed:(const char *)arg1 queue:(id)arg2 connectionInvalidHandler:(CDUnknownBlockType)arg3;
- (id)createNotificationListener;
- (void)sendNotificationListener;
- (void)connectToNetDiagnosticsd;

@end
