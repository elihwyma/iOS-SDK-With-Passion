/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@interface _DKXPCKnowledgeStore : NSObject

{
    NSXPCConnection *_connection;
}

@property (retain) NSXPCConnection *connection;

+ (id)XPCKnowledgeStore;
+ (id)XPCUserKnowledgeStore;

- (id)init;
- (void)dealloc;
- (id)initWithMachServiceName:(id)arg1;
- (id)initWithConnection:(id)arg1;
- (unsigned long long)deleteAllEventsMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)executeQuery:(id)arg1 error:(id *)arg2;
- (id)deviceUUID;
- (_Bool)saveObjects:(id)arg1 error:(id *)arg2;
- (void)saveObjects:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (_Bool)deleteObjects:(id)arg1 error:(id *)arg2;
- (void)deleteObjects:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)executeQuery:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)executeQuery:(id)arg1 responseQueue:(id)arg2;
- (unsigned long long)deleteAllEventsInEventStream:(id)arg1 error:(id *)arg2;
- (void)deleteAllEventsInEventStream:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)deleteAllEventsMatchingPredicate:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (_Bool)synchronizeWithError:(id *)arg1;
- (_Bool)synchronizeWithUrgency:(unsigned long long)arg1 client:(id)arg2 error:(id *)arg3;
- (void)synchronizeWithUrgency:(unsigned long long)arg1 client:(id)arg2 responseQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)deleteRemoteState:(id *)arg1;
- (id)sourceDeviceIdentityFromObject:(id)arg1 error:(id *)arg2;
- (id)sourceDeviceIdentityWithError:(id *)arg1;
- (id)saveObjects:(id)arg1 synchronous:(_Bool)arg2 responseQueue:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (id)deleteObjects:(id)arg1 synchronous:(_Bool)arg2 responseQueue:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (unsigned long long)deleteAllEventsInEventStream:(id)arg1 synchronous:(_Bool)arg2 error:(id *)arg3 responseQueue:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (unsigned long long)deleteAllEventsMatchingPredicate:(id)arg1 synchronous:(_Bool)arg2 error:(id *)arg3 responseQueue:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (id)executeQuery:(id)arg1 synchronous:(_Bool)arg2 error:(id *)arg3 responseQueue:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (_Bool)confirmConnectionWithError:(id *)arg1;

@end
