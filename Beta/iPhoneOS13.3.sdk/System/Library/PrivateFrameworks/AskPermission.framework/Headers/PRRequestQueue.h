/*
 Image: /System/Library/PrivateFrameworks/AskPermission.framework/AskPermission
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol PRRequestDelegate;

@interface PRRequestQueue : NSObject

{
    id <PRRequestDelegate> _delegate;
    NSString *_identifier;
}

@property (weak, nonatomic) id <PRRequestDelegate> delegate;
@property (readonly) NSString *identifier;

+ (id)_requestQueueForIdentifier:(id)arg1;
+ (id)defaultRequestQueue;

- (id)_pushToken;
- (void)_attemptLocalApprovalForStorePurchaseRequestWithItemIdentifier:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)askPermissionTo:(id)arg1 withRequestInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)pendingRequestsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)attemptLocalApprovalForRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_didStartNewPurchaseRequestWithInfo:(id)arg1;
- (void)_didReceiveStorePushNotificationWithPayload:(id)arg1;
- (void)_pendingStorePurchaseRequestForItemIdentifier:(unsigned long long)arg1 replyBlock:(CDUnknownBlockType)arg2;
- (void)_attemptLocalApprovalForStorePurchaseRequestWithAdamID:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_requestToBePresentedWithReply:(CDUnknownBlockType)arg1;
- (void)_userDidApproveRequestWithRequestID:(id)arg1;
- (void)_userDidDenyRequestWithRequestID:(id)arg1;
- (void)_clearCachedRequests;
- (void)_registerPushToken;
- (void)_readTestValueFromTouchIDKeychain;
- (void)_writeTestValueToTouchIDKeychain;
- (void)_deleteTestValueFromTouchIDKeychain;

@end
