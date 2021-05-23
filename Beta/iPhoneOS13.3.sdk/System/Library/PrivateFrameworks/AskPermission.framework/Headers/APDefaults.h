/*
 Image: /System/Library/PrivateFrameworks/AskPermission.framework/AskPermission
 */

#import <Foundation/NSObject.h>

@interface APDefaults : NSObject

+ (void)_setValue:(id)arg1 forKey:(id)arg2;
+ (_Bool)_boolForKey:(id)arg1 defaultValue:(_Bool)arg2;
+ (id)_valueForKey:(id)arg1;
+ (long long)_integerForKey:(id)arg1 defaultValue:(long long)arg2;
+ (id)_valueForKey:(id)arg1 domain:(struct __CFString *)arg2;
+ (_Bool)_boolForKey:(id)arg1 defaultValue:(_Bool)arg2 domain:(struct __CFString *)arg3;
+ (void)_setBool:(_Bool)arg1 forKey:(id)arg2;
+ (void)_setInteger:(long long)arg1 forKey:(id)arg2;
+ (void)_setValue:(id)arg1 forKey:(id)arg2 domain:(struct __CFString *)arg3;
+ (void)_setBool:(_Bool)arg1 forKey:(id)arg2 domain:(struct __CFString *)arg3;
+ (long long)_integerForKey:(id)arg1 defaultValue:(long long)arg2 domain:(struct __CFString *)arg3;
+ (_Bool)APSDevelopmentEnvironment;
+ (_Bool)isApprover;
+ (_Bool)isRequester;
+ (void)setAPSDevelopmentEnvironment:(_Bool)arg1;
+ (void)setIsApprover:(_Bool)arg1;
+ (void)setIsRequester:(_Bool)arg1;

@end
