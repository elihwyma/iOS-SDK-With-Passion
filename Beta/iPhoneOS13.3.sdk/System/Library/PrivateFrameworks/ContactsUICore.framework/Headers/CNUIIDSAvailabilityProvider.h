/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@class CNUIDSHandleAvailabilityCache, NSArray, NSString;

@protocol CNScheduler, CNUIIDSIDQueryControllerWrapper;

@interface CNUIIDSAvailabilityProvider : NSObject

{
    id <CNUIIDSIDQueryControllerWrapper> _queryControllerWrapper;
    CNUIDSHandleAvailabilityCache *_faceTimeRequests;
    CNUIDSHandleAvailabilityCache *_iMessageRequests;
    NSArray *_requestFutures;
    id <CNScheduler> _resourceLock;
}

@property (retain, nonatomic) id <CNUIIDSIDQueryControllerWrapper> queryControllerWrapper;
@property (retain, nonatomic) CNUIDSHandleAvailabilityCache *faceTimeRequests;
@property (retain, nonatomic) CNUIDSHandleAvailabilityCache *iMessageRequests;
@property (retain, nonatomic) NSArray *requestFutures;
@property (retain, nonatomic) id <CNScheduler> resourceLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)makeFaceTimeRequestsCache;
+ (id)makeIMessageRequestsCache;

- (id)init;
- (id)validateHandlesForFaceTime:(id)arg1 schedulerProvider:(id)arg2;
- (id)validateHandlesForIMessage:(id)arg1 schedulerProvider:(id)arg2;
- (id)initWithQueryControllerWrapper:(id)arg1;
- (void)startRequestForCacheMisses:(id)arg1 service:(long long)arg2 scheduler:(id)arg3;
- (id)validateHandles:(id)arg1 forService:(long long)arg2 schedulerProvider:(id)arg3;

@end
