/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class ICRequestContext, ICUserIdentityStore, NSOperationQueue;

@protocol OS_dispatch_queue;

@interface ICDelegationProviderServiceProtocolHandler : NSObject

{
    NSObject<OS_dispatch_queue> *_calloutQueue;
    ICUserIdentityStore *_identityStore;
    NSOperationQueue *_operationQueue;
    unsigned long long _nextSessionUniqueID;
    ICRequestContext *_requestContext;
}

- (id)initWithUserIdentityStore:(id)arg1 requestContext:(id)arg2;
- (void)getFinishDelegationRequestsWithStartDelegationResponse:(id)arg1 streamContexts:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (void)getStartDelegationRequestForAccountIDs:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_getPlayInfoRequestWithStartDelegationResponse:(id)arg1 streamContexts:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (unsigned long long)_nextSessionUniqueID;

@end
