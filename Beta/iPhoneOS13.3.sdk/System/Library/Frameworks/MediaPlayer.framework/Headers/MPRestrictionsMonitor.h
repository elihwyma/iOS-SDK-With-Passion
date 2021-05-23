/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MCProfileConnection, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface MPRestrictionsMonitor : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_cachedSettings;
    MCProfileConnection *_connection;
    _Bool _allowsAccountModification;
    _Bool _allowsDeletion;
    _Bool _allowsExplicitContent;
    _Bool _allowsMusicSubscription;
    _Bool _allowsStorePurchases;
    _Bool _allowsRadioPurchases;
    long long _maximumTVShowRatingForAgeGate;
    long long _maximumMovieRatingForAgeGate;
}

@property (nonatomic) long long maximumTVShowRatingForAgeGate;
@property (nonatomic) long long maximumMovieRatingForAgeGate;
@property (nonatomic, readonly) _Bool allowsAccountModification;
@property (nonatomic, readonly) _Bool allowsDeletion;
@property (nonatomic, readonly) _Bool allowsExplicitContent;
@property (nonatomic, readonly) _Bool allowsMusicSubscription;
@property (nonatomic, readonly) _Bool allowsStorePurchases;
@property (nonatomic, readonly) _Bool allowsRadioPurchases;
@property (nonatomic, readonly) long long maximumTVShowRating;
@property (nonatomic, readonly) long long maximumMovieRating;
@property (nonatomic, readonly) _Bool hasRestrictionsPasscode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedRestrictionsMonitor;

- (id)init;
- (void)dealloc;
- (void)synchronizeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)effectiveValueForSetting:(id)arg1;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (_Bool)_isRunningInStoreDemoMode;
- (void)_cacheValue:(id)arg1 forSetting:(id)arg2;
- (void)_updateWithCanPostNotifications:(_Bool)arg1;

@end
