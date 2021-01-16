//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NPSDomainAccessor, NSDate, NSLock, NSMutableDictionary, NSMutableSet;

@interface HUNoiseSettings : NSObject
{
    NSLock *_synchronizeDomainsLock;
    NSMutableSet *_registeredNotifications;
    NSMutableSet *_synchronizePreferences;
    NSMutableDictionary *_updateBlocks;
    NPSDomainAccessor *_domainAccessor;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NPSDomainAccessor *domainAccessor; // @synthesize domainAccessor=_domainAccessor;
@property(retain, nonatomic) NSMutableDictionary *updateBlocks; // @synthesize updateBlocks=_updateBlocks;
@property(retain, nonatomic) NSMutableSet *synchronizePreferences; // @synthesize synchronizePreferences=_synchronizePreferences;
@property(retain, nonatomic) NSMutableSet *registeredNotifications; // @synthesize registeredNotifications=_registeredNotifications;
// - (void).cxx_destruct;
@property(nonatomic) NSUInteger thresholdVersion;
@property(nonatomic) BOOL migratedThreshold;
@property(nonatomic) double leqDuration;
@property(nonatomic) NSDate *leqTimestamp;
@property(nonatomic) double currentLeq;
@property(retain, nonatomic) NSDate *notificationMuteDate;
@property(nonatomic) NSUInteger notificationThreshold;
@property(nonatomic) BOOL notificationsEnabled;
@property(nonatomic) BOOL onboardingCompleted;
@property(nonatomic) BOOL noiseEnabled;
- (id)_valueForPreferenceKey:(id)arg1;
- (void)_synchronizeIfNecessary:(id)arg1;
- (void)_setValue:(id)arg1 forPreferenceKey:(id)arg2;
- (BOOL)preferenceIsSetForRetrieveSelector:(SEL)arg1;
- (void)registerUpdateBlock:(id /* CDUnknownBlockType */)arg1 forRetrieveSelector:(SEL)arg2 withListener:(id)arg3;
- (void)_registerForNotification:(id)arg1;
- (id)_preferenceKeyForSelector:(SEL)arg1;
- (id)_notificationForPreferenceKey:(id)arg1;
- (void)_handlePreferenceChanged:(id)arg1;
- (void)dealloc;
- (id)init;

@end
