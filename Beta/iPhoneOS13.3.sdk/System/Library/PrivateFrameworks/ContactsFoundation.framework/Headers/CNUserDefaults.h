/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@protocol CNPrimitiveUserDefaults;

@interface CNUserDefaults : NSObject

{
    id <CNPrimitiveUserDefaults> _primitiveDefaults;
    NSDictionary *_registeredDefaults;
}

@property (copy) NSDictionary *registeredDefaults;

+ (id)standardPreferences;
+ (id)preferencesWithApplicationID:(id)arg1;
+ (id)inMemoryPreferences;

- (_Bool)synchronize;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (_Bool)boolForKey:(id)arg1;
- (long long)integerForKey:(id)arg1;
- (double)doubleForKey:(id)arg1;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;
- (void)registerDefaults:(id)arg1;
- (_Bool)userHasOptedOutOfPreference:(id)arg1;
- (id)initWithApplicationID:(id)arg1;
- (id)initWithPrimitiveDefaults:(id)arg1;
- (id)primitiveObjectForKey:(id)arg1;
- (void)setPrimitiveObject:(id)arg1 forKey:(id)arg2;
- (long long)primitiveIntegerValueForKey:(id)arg1 keyExists:(_Bool *)arg2;
- (_Bool)primitiveBoolValueForKey:(id)arg1 keyExists:(_Bool *)arg2;
- (void)primitiveRemoveObjectForKey:(id)arg1;
- (void)setupAutosync;
- (_Bool)boolForKey:(id)arg1 keyExists:(_Bool *)arg2;
- (id)primitiveDefaults;
- (long long)integerForKey:(id)arg1 keyExists:(_Bool *)arg2;
- (_Bool)userHasOptedInToPreference:(id)arg1;

@end
