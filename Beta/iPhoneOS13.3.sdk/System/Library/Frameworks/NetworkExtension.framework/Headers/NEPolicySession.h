/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NSData, NSMutableDictionary;

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface NEPolicySession : NSObject

{
    unsigned int _lastSendMessageID;
    int _sessionFD;
    long long _internalPriority;
    NSMutableDictionary *_policies;
    NSObject<OS_dispatch_queue> *_ioQueue;
    NSObject<OS_dispatch_semaphore> *_responseSemaphore;
    NSData *_lastReceivedResponse;
}

@property long long internalPriority;
@property (retain) NSMutableDictionary *policies;
@property (retain) NSObject<OS_dispatch_queue> *ioQueue;
@property (retain) NSObject<OS_dispatch_semaphore> *responseSemaphore;
@property (retain) NSData *lastReceivedResponse;
@property unsigned int lastSendMessageID;
@property int sessionFD;
@property long long priority;

+ (void)addTLVToMessage:(id)arg1 type:(unsigned char)arg2 length:(unsigned long long)arg3 value:(const void *)arg4;
+ (id)copyTLVForBytes:(const char *)arg1 messageLength:(unsigned long long)arg2 type:(unsigned char)arg3 includeHeaderOffset:(_Bool)arg4 n:(int)arg5;
+ (unsigned char)getTLVtypeForBytes:(const char *)arg1 includeHeaderOffset:(_Bool)arg2 nextTLVOffset:(unsigned int *)arg3;
+ (_Bool)isTLVValid:(char *)arg1 cursorCurrent:(char *)arg2 totalLength:(unsigned long long)arg3;
+ (id)readTLVOfType:(unsigned char)arg1 startCursor:(char *)arg2 currentCursor:(char **)arg3 totalLength:(unsigned long long)arg4 readTLVInstance:(unsigned int)arg5;
+ (id)policyDumpFromData:(id)arg1;
+ (id)parseTLVResponseForDump:(id)arg1;
+ (id)errorFromMessage:(id)arg1;
+ (unsigned int)policyIDFromMessage:(id)arg1;
+ (unsigned int)messageIDForMessage:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)description;
- (_Bool)apply;
- (unsigned long long)addPolicy:(id)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (int)dupSocket;
- (id)initWithSocket:(int)arg1;
- (_Bool)lockSessionToCurrentProcess;
- (_Bool)registerServiceUUID:(id)arg1;
- (_Bool)unregisterServiceUUID:(id)arg1;
- (_Bool)removePolicyWithID:(unsigned long long)arg1;
- (_Bool)removeAllPolicies;
- (id)priorityString;
- (id)initWithSessionName:(id)arg1;
- (id)createTLVMessage:(unsigned char)arg1;
- (id)dumpKernelPolicies;
- (id)policyWithID:(unsigned long long)arg1;

@end
