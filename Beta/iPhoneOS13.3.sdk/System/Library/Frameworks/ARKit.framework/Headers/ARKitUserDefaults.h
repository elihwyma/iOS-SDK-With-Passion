/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@interface ARKitUserDefaults : NSObject

+ (void)synchronize;
+ (void)setValue:(id)arg1 forKey:(id)arg2;
+ (id)objectForKey:(id)arg1;
+ (void)removeObjectForKey:(id)arg1;
+ (void)setObject:(id)arg1 forKey:(id)arg2;
+ (id)valueForKey:(id)arg1;
+ (_Bool)boolForKey:(id)arg1;
+ (id)stringForKey:(id)arg1;
+ (long long)integerForKey:(id)arg1;
+ (float)floatForKey:(id)arg1;
+ (void)setBool:(_Bool)arg1 forKey:(id)arg2;
+ (id)numberForKey:(id)arg1;
+ (id)defaultValues;
+ (void)removeAllKeys;
+ (id)resolutionDictionaryForKey:(id)arg1;
+ (id)keysWhitelistedForProcessEnvironmentOverride;

@end
