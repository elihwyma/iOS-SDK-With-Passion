/*
 Image: /System/Library/PrivateFrameworks/CoreRE.framework/CoreRE
 */

#import <Foundation/NSObject.h>

@class IDSService, NSMutableArray, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface IDSConnectionsQueue : NSObject

{
    IDSService *_service;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_allConnections;
    NSMutableArray *_pendingConnections;
    NSMutableArray *_endedConnections;
}

@property (retain, nonatomic) IDSService *service;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *allConnections;
@property (retain, nonatomic) NSMutableArray *pendingConnections;
@property (retain, nonatomic) NSMutableArray *endedConnections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)sessionStarted:(id)arg1;
- (void)sessionEnded:(id)arg1;
- (void)sessionEnded:(id)arg1 withReason:(unsigned int)arg2 error:(id)arg3;
- (void)service:(id)arg1 account:(id)arg2 inviteReceivedForSession:(id)arg3 fromID:(id)arg4 withOptions:(id)arg5;
- (id)initWithIDSService:(id)arg1 queue:(id)arg2;
- (void)queueNewSessionForDestination:(id)arg1;
- (void)dequeSession:(id)arg1;

@end
