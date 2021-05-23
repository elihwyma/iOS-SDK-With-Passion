/*
 Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

#import <HMFoundation/HMFObject.h>

@class HMFTimer, HMFUnfairLock, NSDictionary, NSMutableDictionary, NSString;

@interface HMIPreference : HMFObject

{
    HMFUnfairLock *_lock;
    HMFTimer *_preferenceCacheFlushTimer;
    NSMutableDictionary *_preferenceCache;
    NSMutableDictionary *_preferenceLoggedValues;
    NSMutableDictionary *_preferenceOverridesInternal;
}

@property (nonatomic, readonly) HMFUnfairLock *lock;
@property (readonly) HMFTimer *preferenceCacheFlushTimer;
@property (nonatomic, readonly) NSMutableDictionary *preferenceCache;
@property (nonatomic, readonly) NSMutableDictionary *preferenceLoggedValues;
@property (nonatomic, readonly) NSMutableDictionary *preferenceOverridesInternal;
@property (readonly) _Bool usesCPUOnly;
@property (readonly) NSDictionary *preferenceOverrides;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)logCategory;
+ (_Bool)isProductTypeJ105;
+ (_Bool)isProductTypeB238;
+ (_Bool)isProductTypeJ42;
+ (id)qosMap;

- (id)init;
- (void)timerDidFire:(id)arg1;
- (_Bool)boolPreferenceForKey:(id)arg1 defaultValue:(_Bool)arg2;
- (id)numberPreferenceForKey:(id)arg1 defaultValue:(id)arg2 withMap:(id)arg3;
- (id)numberPreferenceForKey:(id)arg1 defaultValue:(id)arg2;
- (_Bool)hasPreferenceForKey:(id)arg1;
- (id)valuePreferenceForKey:(id)arg1 defaultValue:(id)arg2 withMap:(id)arg3;
- (void)setPreferenceOverrideFromDictionary:(id)arg1;
- (id)systemPreferenceValueForKey:(id)arg1;
- (void)logPreferenceForKey:(id)arg1 value:(id)arg2;
- (void)addPreferenceOverrideFromDictionary:(id)arg1;
- (void)removeAllPreferenceOverrides;
- (id)numberPreferenceForKey:(id)arg1 defaultValue:(id)arg2 withParser:(CDUnknownBlockType)arg3;
- (id)valuePreferenceForKey:(id)arg1 defaultValue:(id)arg2 withParser:(CDUnknownBlockType)arg3;
- (id)stringPreferenceForKey:(id)arg1 defaultValue:(id)arg2;

@end
