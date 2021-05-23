/*
 Image: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
 */

#import <NSObject.h>

@class NPSDomainAccessor, NSDate, NSLock, NSMutableDictionary, NSMutableSet;

@interface HUNoiseSettings : NSObject

{
    NSLock *_synchronizeDomainsLock;
    NSMutableSet *_registeredNotifications;
    NSMutableSet *_synchronizePreferences;
    NSMutableDictionary *_updateBlocks;
    NPSDomainAccessor *_domainAccessor;
}

@property (retain, nonatomic) NSMutableSet *registeredNotifications;
@property (retain, nonatomic) NSMutableSet *synchronizePreferences;
@property (retain, nonatomic) NSMutableDictionary *updateBlocks;
@property (retain, nonatomic) NPSDomainAccessor *domainAccessor;
@property (nonatomic) _Bool noiseEnabled;
@property (nonatomic) _Bool onboardingCompleted;
@property (nonatomic) _Bool notificationsEnabled;
@property (nonatomic) unsigned long long notificationThreshold;
@property (retain, nonatomic) NSDate *notificationMuteDate;
@property (nonatomic) double currentLeq;
@property (nonatomic) NSDate *leqTimestamp;
@property (nonatomic) double leqDuration;
@property (nonatomic) _Bool migratedThreshold;
@property (nonatomic) unsigned long long thresholdVersion;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)registerUpdateBlock:(CDUnknownBlockType)arg1 forRetrieveSelector:(SEL)arg2 withListener:(id)arg3;
- (void)_setValue:(id)arg1 forPreferenceKey:(id)arg2;
- (id)_notificationForPreferenceKey:(id)arg1;
- (id)_valueForPreferenceKey:(id)arg1;
- (void)_registerForNotification:(id)arg1;
- (void)_handlePreferenceChanged:(id)arg1;
- (id)_preferenceKeyForSelector:(SEL)arg1;
- (void)_synchronizeIfNecessary:(id)arg1;
- (_Bool)preferenceIsSetForRetrieveSelector:(SEL)arg1;

@end
