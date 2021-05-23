/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableArray, NSOperationQueue, SKUIMediaSocialProfile;

@protocol OS_dispatch_queue;

@interface SKUIMediaSocialProfileCoordinator : NSObject

{
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSDate *_lastAuthenticationAttempt;
    SKUIMediaSocialProfile *_lastKnownProfile;
    NSDate *_lastRequestDate;
    NSOperationQueue *_operationQueue;
    NSMutableArray *_profileBlocks;
    _Bool _waitingForAuthentication;
}

+ (id)sharedCoordinator;

- (id)init;
- (void)dealloc;
- (void)reset;
- (void)getProfileWithOptions:(id)arg1 profileBlock:(CDUnknownBlockType)arg2;
- (void)_accountStoreChangeNotification:(id)arg1;
- (void)_authenticateOnCompletion:(CDUnknownBlockType)arg1;
- (void)_queueProfileBlock:(CDUnknownBlockType)arg1;
- (void)_requestProfile;
- (void)_handleOperationResponseWithProfile:(id)arg1 error:(id)arg2;
- (void)_fireProfileBlocksWithProfile:(id)arg1 isFinal:(_Bool)arg2 error:(id)arg3;

@end
