/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@interface AMSEphemeralDefaults : NSObject

+ (void)_setProperty:(id)arg1 forKey:(id)arg2;
+ (_Bool)HARLoggingEnabled;
+ (id)_propertyForKey:(id)arg1 defaultValue:(id)arg2 expectedType:(Class)arg3;
+ (void)_accessDataStoreUsingBlock:(CDUnknownBlockType)arg1;
+ (long long)HARLoggingItemLimit;
+ (void)setHARLoggingEnabled:(_Bool)arg1;
+ (void)setHARLoggingItemLimit:(long long)arg1;

@end
