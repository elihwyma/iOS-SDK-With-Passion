/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface EMFeaturePreferences : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
+ (_Bool)featureEnabled:(unsigned long long)arg1;
+ (id)log;
+ (void)setFeature:(unsigned long long)arg1 enabled:(_Bool)arg2;
+ (void)_registerForDefaultChanges;
+ (_Bool)_featureEnabled:(unsigned long long)arg1;
+ (id)defaultForFeature:(unsigned long long)arg1;
+ (_Bool)_userDefaultEnabledForKey:(id)arg1 defaultValue:(_Bool)arg2;
+ (void)_setUserDefaultEnabled:(_Bool)arg1 forKey:(id)arg2;
+ (_Bool)_hasUserDefaultValueForKey:(id)arg1 expectedValue:(id)arg2;

@end
