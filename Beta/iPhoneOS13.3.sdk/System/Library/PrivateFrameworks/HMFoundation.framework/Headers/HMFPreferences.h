/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@class HMFClassRegistry, HMFUnfairLock, NSArray, NSMutableDictionary, NSString;

@interface HMFPreferences

{
    NSMutableDictionary *_preferences;
    HMFUnfairLock *_lock;
    HMFClassRegistry *_classRegistry;
}

@property (nonatomic, readonly) HMFUnfairLock *lock;
@property (readonly) HMFClassRegistry *classRegistry;
@property (copy, readonly) NSArray *preferences;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, readonly) NSString *shortDescription;
@property (copy, readonly) NSString *privateDescription;
@property (copy, readonly) NSString *propertyDescription;
@property (copy, nonatomic, readonly) NSArray *attributeDescriptions;

+ (id)sharedPreferences;
+ (id)classRegistry;
+ (id)defaultValues;
+ (Class)preferenceClassForPreferenceKey:(id)arg1;
+ (id)defaultValueForPreferenceKey:(id)arg1;
+ (void)setPreferenceClass:(Class)arg1 forPreferenceKey:(id)arg2;
+ (void)setDefaultValue:(id)arg1 forPreferenceKey:(id)arg2;

- (id)init;
- (Class)preferenceClassForPreferenceKey:(id)arg1;
- (void)setPreferenceClass:(Class)arg1 forPreferenceKey:(id)arg2;
- (id)preferenceForKey:(id)arg1;

@end
