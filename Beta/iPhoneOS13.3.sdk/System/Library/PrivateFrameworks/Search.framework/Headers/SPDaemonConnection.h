/*
 Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

#import <Foundation/NSObject.h>

@class NSString, SPXPCConnection;

@protocol OS_dispatch_queue;

@interface SPDaemonConnection : NSObject

{
    SPXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSString *_daemonName;
    struct __CFDictionary *_runningQueries;
}

@property (retain, nonatomic) NSString *daemonName;
@property (nonatomic) struct __CFDictionary *runningQueries;

+ (id)sharedConnection;
+ (id)sharedBackgroundConnection;

- (id)init;
- (void)dealloc;
- (id)_connection;
- (id)connectionQueue;
- (void)activate;
- (void)deactivate;
- (void)preheat;
- (void)activate:(CDUnknownBlockType)arg1;
- (void)cancelQuery:(id)arg1;
- (void)_resetConnection;
- (void)_sendMessage:(id)arg1 object:(id)arg2 info:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)sendMessageForToken:(id)arg1;
- (void)_sendFeedbackMessage:(id)arg1 object:(id)arg2 info:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (id)initWithDaemonName:(id)arg1 qos:(unsigned int)arg2;
- (id)startQuery:(id)arg1 queue:(id)arg2 delegate:(id)arg3;
- (void)sendApps:(id)arg1;
- (void)clearInput:(id)arg1;
- (void)retrieveFirstTimeExperienceTextWithReply:(CDUnknownBlockType)arg1;
- (void)requestParsecParametersWithReply:(CDUnknownBlockType)arg1;
- (void)sendSFFeedback:(id)arg1 type:(long long)arg2 queryId:(unsigned long long)arg3;
- (void)barrierOnXPC:(CDUnknownBlockType)arg1;

@end
