/*
 Image: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
 */

#import <BaseBoard/BSXPCCoder.h>

@class NSObject, NSString;

@protocol BSServiceDispatchingQueue, OS_dispatch_queue;

@interface BSXPCServiceConnectionMessage : BSXPCCoder

{
    int _sendFlag;
    NSObject<OS_dispatch_queue> *_targetQueue;
    CDUnknownBlockType _completion;
    id <BSServiceDispatchingQueue> _replyQueue;
}

@property (retain, nonatomic) id <BSServiceDispatchingQueue> replyQueue;
@property (copy, nonatomic) CDUnknownBlockType completion;
@property (retain, nonatomic) NSString *messageID;
@property (nonatomic) unsigned long long childIdentifier;
@property (nonatomic) _Bool childIdentifierIsRemotelyDefined;
@property (retain, nonatomic) NSString *selectorName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)messageWithXPCConnection:(id)arg1 targetQueue:(id)arg2;

- (void)invalidate;
- (_Bool)send;
- (id)initWithMessage:(id)arg1;
- (id)sendSynchronouslyWithError:(out id *)arg1;
- (_Bool)expectsReply;
- (id)createReply;
- (id)initWithXPCConnection:(id)arg1 targetQueue:(id)arg2;
- (_Bool)_sendSynchronously:(_Bool)arg1;
- (_Bool)sendSynchronously;

@end
