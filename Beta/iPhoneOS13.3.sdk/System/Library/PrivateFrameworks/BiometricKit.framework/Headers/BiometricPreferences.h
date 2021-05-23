/*
 Image: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
 */

#import <NSObject.h>

__attribute__((visibility("hidden")))
@interface BiometricPreferences : NSObject

+ (id)stateDictionary;
+ (id)preferenceValueOfClass:(Class)arg1 forKey:(id)arg2 defaultValue:(id)arg3;
+ (id)preferenceValueOfClass:(Class)arg1 forKey:(id)arg2;
+ (void)setPreferenceValue:(id)arg1 forKey:(id)arg2;
+ (_Bool)isPreferenceKeySet:(id)arg1;

@end
