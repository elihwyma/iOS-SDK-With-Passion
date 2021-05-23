/*
 Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TPSPreferences : NSObject

{
    NSString *_domain;
}

@property (copy, nonatomic, readonly) NSString *domain;
@property (nonatomic, readonly) _Bool showSubscriptionList;

+ (id)sharedInstance;

- (id)init;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (void)setNumber:(id)arg1 forKey:(id)arg2;
- (_Bool)boolForKey:(id)arg1 defaultValue:(_Bool)arg2;
- (id)stringForKey:(id)arg1 defaultValue:(id)arg2;
- (long long)integerForKey:(id)arg1 defaultValue:(long long)arg2;
- (id)preferencesValueForKey:(id)arg1 domain:(id)arg2;
- (void)setPreferencesValue:(id)arg1 forKey:(id)arg2 domain:(id)arg3;
- (id)numberForKey:(id)arg1 defaultValue:(id)arg2;
- (id)preferencesValueForKey:(id)arg1;
- (void)setPreferencesValue:(id)arg1 forKey:(id)arg2;
- (unsigned long long)unsignedIntegerForKey:(id)arg1 defaultValue:(unsigned long long)arg2;
- (void)setUnsignedInteger:(unsigned long long)arg1 forKey:(id)arg2;

@end
