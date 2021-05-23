/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSUserDefaults.h>

@interface NSUserDefaults (TSKRoleAdditions)

- (id)keyForRole:(id)arg1;
- (id)objectForKey:(id)arg1 inRole:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 inRole:(id)arg3;
- (id)p_currentRole;
- (void)removeObjectForKey:(id)arg1 inRole:(id)arg2;
- (id)stringForKey:(id)arg1 inRole:(id)arg2;
- (id)arrayForKey:(id)arg1 inRole:(id)arg2;
- (id)dictionaryForKey:(id)arg1 inRole:(id)arg2;
- (id)dataForKey:(id)arg1 inRole:(id)arg2;
- (long long)integerForKey:(id)arg1 inRole:(id)arg2;
- (float)floatForKey:(id)arg1 inRole:(id)arg2;
- (double)doubleForKey:(id)arg1 inRole:(id)arg2;
- (_Bool)boolForKey:(id)arg1 inRole:(id)arg2;
- (void)setInteger:(long long)arg1 forKey:(id)arg2 inRole:(id)arg3;
- (void)setFloat:(float)arg1 forKey:(id)arg2 inRole:(id)arg3;
- (void)setDouble:(double)arg1 forKey:(id)arg2 inRole:(id)arg3;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2 inRole:(id)arg3;
- (id)objectForKeyInCurrentRole:(id)arg1;
- (void)setObject:(id)arg1 forKeyInCurrentRole:(id)arg2;
- (void)removeObjectForKeyInCurrentRole:(id)arg1;
- (id)stringForKeyInCurrentRole:(id)arg1;
- (id)arrayForKeyInCurrentRole:(id)arg1;
- (id)dictionaryForKeyInCurrentRole:(id)arg1;
- (id)dataForKeyInCurrentRole:(id)arg1;
- (long long)integerForKeyInCurrentRole:(id)arg1;
- (float)floatForKeyInCurrentRole:(id)arg1;
- (double)doubleForKeyInCurrentRole:(id)arg1;
- (_Bool)boolForKeyInCurrentRole:(id)arg1;
- (void)setInteger:(long long)arg1 forKeyInCurrentRole:(id)arg2;
- (void)setFloat:(float)arg1 forKeyInCurrentRole:(id)arg2;
- (void)setDouble:(double)arg1 forKeyInCurrentRole:(id)arg2;
- (void)setBool:(_Bool)arg1 forKeyInCurrentRole:(id)arg2;

@end
