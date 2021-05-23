/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@protocol NFSession, OS_dispatch_queue;

@interface PKPaymentSessionHandle : NSObject

{
    NSObject<OS_dispatch_queue> *_internalSessionSerialQueue;
    id <NFSession> _sessionHandle;
}

- (void)invalidateSession;
- (void)invalidateSessionWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)isFirstInQueue;
- (id)initWithInternalSessionHandle:(id)arg1 targetQueue:(id)arg2;

@end
