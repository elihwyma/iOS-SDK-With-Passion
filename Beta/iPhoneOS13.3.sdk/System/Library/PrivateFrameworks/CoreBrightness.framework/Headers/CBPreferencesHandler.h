/*
 Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CBPreferencesHandler : NSObject

+ (id)copyPreferenceForAllUsersForKey:(id)arg1;
+ (_Bool)storePreferenceForAllUsersForKey:(id)arg1 andValue:(id)arg2;
+ (id)copyNestedPreferenceForKey1:(id)arg1 key2:(id)arg2 key3:(id)arg3;
+ (_Bool)storeNestedPreferenceForAllUsersWithKey1:(id)arg1 key2:(id)arg2 key3:(id)arg3 andValue:(id)arg4;
+ (struct __CFDictionary *)copyPreferenceDictionaryForUser:(id)arg1;
+ (_Bool)storePreferenceForUser:(id)arg1 withKey:(id)arg2 andValue:(id)arg3;
+ (_Bool)storePreferenceForAllUsersMultiple:(id)arg1;
+ (id)copyPreferenceForUser:(id)arg1 forKey:(id)arg2;
+ (id)copyPreferenceForAllUsersMultiple:(id)arg1;
+ (void)consistencyCheckForUser:(id)arg1;

@end
