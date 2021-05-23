/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class ICMusicSubscriptionFairPlayKeyStatus, ICMusicSubscriptionStatus, ICUserIdentity, NSString, SSVFairPlaySubscriptionStatus, SSVSubscriptionStatus;

@protocol OS_dispatch_queue;

@interface MPCloudServiceStatusController : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSObject<OS_dispatch_queue> *_cloudLibraryStatusAccessQueue;
    long long _cloudLibraryStatus;
    unsigned long long _cloudLibraryObservationCount;
    _Bool _hasLoadedMatchStatus;
    _Bool _hasLoadedSubscriptionAvailability;
    ICMusicSubscriptionStatus *_lastKnownMusicSubscriptionStatus;
    unsigned long long _matchStatusObservationCount;
    unsigned long long _matchStatus;
    _Bool _observingNetworkReachability;
    _Bool _hasSubscriptionLease;
    _Bool _shouldPlaybackRequireSubscriptionLease;
    _Bool _subscriptionAvailable;
    ICUserIdentity *_userIdentity;
    ICMusicSubscriptionFairPlayKeyStatus *_lastKnownSubscriptionFairPlayKeyStatus;
    SSVSubscriptionStatus *_subscriptionStatus;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic, readonly) ICUserIdentity *userIdentity;
@property (nonatomic, readonly) SSVFairPlaySubscriptionStatus *lastKnownFairPlaySubscriptionStatus;
@property (nonatomic, readonly) ICMusicSubscriptionFairPlayKeyStatus *lastKnownSubscriptionFairPlayKeyStatus;
@property (nonatomic, readonly) unsigned long long matchStatus;
@property (nonatomic, readonly, getter=isSubscriptionAvailable) _Bool subscriptionAvailable;
@property (copy, nonatomic, readonly) SSVSubscriptionStatus *subscriptionStatus;
@property (copy, nonatomic, readonly) ICMusicSubscriptionStatus *musicSubscriptionStatus;
@property (nonatomic, readonly) _Bool shouldPlaybackRequireSubscriptionLease;
@property (nonatomic, readonly, getter=isCloudLibraryEnabled) _Bool cloudLibraryEnabled;
@property (nonatomic, readonly, getter=isPurchaseHistoryEnabled) _Bool purchaseHistoryEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedController;
+ (id)controllers;
+ (void)_postNotificationName:(id)arg1 controller:(id)arg2;
+ (void)_postNotificationName:(id)arg1 controller:(id)arg2 userInfo:(id)arg3;
+ (id)globalSerialQueue;
+ (id)_cloudServiceStatusControllerWithUserIdentity:(id)arg1 createIfRequired:(_Bool)arg2;
+ (id)cloudServiceStatusControllerWithUserIdentity:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)_initWithUserIdentity:(id)arg1;
- (_Bool)_handlesSameAccountAs:(id)arg1;
- (void)environmentMonitorDidChangeNetworkReachability:(id)arg1;
- (void)_allowsMusicSubscriptionDidChange:(id)arg1;
- (void)_cloudClientAuthenticationDidChange;
- (void)_userIdentityStoreDidChange:(id)arg1;
- (void)_subscriptionStatusDidChange:(id)arg1;
- (void)_enableICMLErrorReasonChange:(id)arg1;
- (void)beginObservingCloudLibraryEnabled;
- (void)beginObservingMatchStatus;
- (void)refreshMusicSubscriptionStatus;
- (void)beginObservingFairPlaySubscriptionStatus;
- (void)beginObservingPurchaseHistoryEnabled;
- (void)beginObservingSubscriptionAvailability;
- (void)endObservingCloudLibraryEnabled;
- (void)endObservingMatchStatus;
- (void)endObservingFairPlaySubscriptionStatus;
- (void)endObservingPurchaseHistoryEnabled;
- (void)endObservingSubscriptionAvailability;
- (_Bool)_calculateShouldPlaybackRequireSubscriptionLeaseReturningLikelyToReachRemoteServer:(_Bool *)arg1;
- (_Bool)_currentCloudLibraryEnabled;
- (_Bool)_currentPurchaseHistoryEnabled;
- (void)_updateMatchStatus;
- (void)_updateSubscriptionAvailability;
- (void)_updateSubscriptionAvailabilityWithValue:(_Bool)arg1;
- (void)_updateSubscriptionStatusWithIgnoreCachePolicy:(_Bool)arg1;
- (void)_beginObservingCloudLibraryEnabled;
- (void)_endObservingCloudLibraryEnabled;
- (void)_beginObservingMatchStatus;
- (void)_endObservingMatchStatus;
- (void)_copyObservationStateFrom:(id)arg1;
- (void)_performBlockOnControllerHandlingTheSameAccount:(CDUnknownBlockType)arg1;

@end
