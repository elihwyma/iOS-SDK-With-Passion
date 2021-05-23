/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class NSMutableDictionary, NSOperationQueue, NSString;

@protocol OS_dispatch_queue;

@interface ICMusicSubscriptionLeaseController : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSMutableDictionary *_accountDSIDToFairPlayKeyStatus;
    NSMutableDictionary *_cacheKeyToLeaseSession;
    _Bool _hasReceivedUserInteractionEvent;
    _Bool _isRemoteServerLikelyReachable;
    _Bool _isServerReachable;
    NSString *_lastKnownHouseholdID;
    int _leaseDidEndNotificationToken;
    NSOperationQueue *_leaseSessionPreparationOperationQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedController;

- (void)dealloc;
- (id)_init;
- (void)environmentMonitorDidChangeNetworkReachability:(id)arg1;
- (void)getLeaseSessionWithRequestContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)musicLeaseSession:(id)arg1 requestsFairPlayKeyStatusUpdateWithCompletion:(CDUnknownBlockType)arg2;
- (void)musicLeaseSession:(id)arg1 didFinishPlaybackRequest:(id)arg2 withPlaybackResponse:(id)arg3 responseError:(id)arg4 updatedFairPlayKeyStatusList:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)_handlePlaybackLeaseDidEndPushNotification;
- (void)getLastKnownHouseholdIDWithCompletion:(CDUnknownBlockType)arg1;
- (void)receivedUserInteractionEvent;

@end
