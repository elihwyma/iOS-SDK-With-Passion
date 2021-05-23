/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NFSession;

@protocol OS_dispatch_queue;

@interface PKPaymentSession : NSObject

{
    NSObject<OS_dispatch_queue> *_internalSessionSerialQueue;
    NFSession *_internalSession;
}

@property (nonatomic, readonly) unsigned long long lifecycleState;

+ (id)startApplePayTrustSessionWithCompletion:(CDUnknownBlockType)arg1;
+ (id)startInAppSessionWithCompletion:(CDUnknownBlockType)arg1 targetQueue:(id)arg2;
+ (id)startContactlessInterfaceSessionWithCompletion:(CDUnknownBlockType)arg1 targetQueue:(id)arg2;
+ (id)startReaderSessionWithCompletion:(CDUnknownBlockType)arg1 targetQueue:(id)arg2;
+ (id)startPeerPaymentSessionWithCompletion:(CDUnknownBlockType)arg1 targetQueue:(id)arg2;
+ (id)startApplePayTrustSessionWithCompletion:(CDUnknownBlockType)arg1 targetQueue:(id)arg2;
+ (id)startInAppSessionWithCompletion:(CDUnknownBlockType)arg1;
+ (id)startContactlessInterfaceSessionWithCompletion:(CDUnknownBlockType)arg1;
+ (id)startReaderSessionWithCompletion:(CDUnknownBlockType)arg1;
+ (id)startPeerPaymentSessionWithCompletion:(CDUnknownBlockType)arg1;

- (id)init;
- (void)invalidateSession;
- (id)initWithInternalSession:(id)arg1 targetQueue:(id)arg2;
- (void)performBlockSyncOnInternalSession:(CDUnknownBlockType)arg1;
- (void)invalidateSessionWithCompletion:(CDUnknownBlockType)arg1;
- (void)performBlockAsyncOnInternalSession:(CDUnknownBlockType)arg1;

@end
