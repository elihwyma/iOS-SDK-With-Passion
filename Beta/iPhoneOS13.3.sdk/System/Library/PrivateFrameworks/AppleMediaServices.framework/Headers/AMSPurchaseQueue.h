/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

#import <AppleMediaServices/Swift-Protocol.h>

@class AMSPurchaseProtocolHandler, AMSPurchaseQueueConfiguration, AMSURLSession, NSLock, NSMutableArray, NSOperationQueue, NSString;

@protocol OS_dispatch_queue;

@interface AMSPurchaseQueue : NSObject <Swift>

{
    _Bool _isSuspeneded;
    NSOperationQueue *_backgroundQueue;
    AMSPurchaseQueueConfiguration *_config;
    NSMutableArray *_batches;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSObject<OS_dispatch_queue> *_enqueue;
    NSLock *_lock;
    AMSPurchaseProtocolHandler *_protocolHandler;
    AMSURLSession *_session;
}

@property (retain, nonatomic) NSOperationQueue *backgroundQueue;
@property (retain, nonatomic) AMSPurchaseQueueConfiguration *config;
@property (retain, nonatomic) NSMutableArray *batches;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *enqueue;
@property (nonatomic) _Bool isSuspeneded;
@property (retain, nonatomic) NSLock *lock;
@property (retain, nonatomic) AMSPurchaseProtocolHandler *protocolHandler;
@property (retain, nonatomic) AMSURLSession *session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)bagKeySet;

- (id)initWithConfiguration:(id)arg1;
- (id)contextForPurchaseId:(id)arg1;
- (id)_purchaseContextForPurchase:(id)arg1;
- (void)_handleNextPurchase;
- (void)_processPurchase:(id)arg1;
- (id)_processURLRequest:(id)arg1 error:(id *)arg2;
- (void)_handlePurchaseCompleted:(id)arg1 result:(id)arg2 error:(id)arg3;
- (id)enquePurchases:(id)arg1;
- (_Bool)finishPurchaseId:(id)arg1 withError:(id)arg2;
- (void)setSuspended:(_Bool)arg1 logUUID:(id)arg2;

@end
