/*
 Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface PLDefaults : NSObject

{
    _Bool _debugEnabled;
    NSMutableDictionary *_managedPrefsCache;
    NSMutableDictionary *_instancePrefsCache;
    NSMutableDictionary *_userPrefsCache;
}

@property (retain) NSMutableDictionary *managedPrefsCache;
@property (retain) NSMutableDictionary *instancePrefsCache;
@property (retain) NSMutableDictionary *userPrefsCache;
@property _Bool debugEnabled;

+ (id)objectForKey:(id)arg1;
+ (void)setObject:(id)arg1 forKey:(id)arg2;
+ (_Bool)boolForKey:(id)arg1;
+ (long long)longForKey:(id)arg1;
+ (double)doubleForKey:(id)arg1;
+ (long long)mode;
+ (id)sharedDefaults;
+ (id)applicationID;
+ (_Bool)debugEnabled;
+ (_Bool)isClassDebugEnabled:(Class)arg1 forKey:(id)arg2;
+ (_Bool)isClassDebugEnabled:(Class)arg1;
+ (_Bool)boolForKey:(id)arg1 ifNotSet:(_Bool)arg2;
+ (_Bool)fullMode;
+ (long long)longForKey:(id)arg1 ifNotSet:(long long)arg2;
+ (void)setObject:(id)arg1 forKey:(id)arg2 saveToDisk:(_Bool)arg3;
+ (id)objectForKey:(id)arg1 forApplicationID:(id)arg2 synchronize:(_Bool)arg3;
+ (_Bool)isDevBoard;
+ (_Bool)taskMode;
+ (_Bool)liteMode;
+ (void)resetUserDefaultCacheForKey:(id)arg1 forApplicationID:(id)arg2;
+ (_Bool)isModelTrigger;
+ (double)doubleForKey:(id)arg1 ifNotSet:(double)arg2;
+ (id)objectForKey:(id)arg1 ifNotSet:(id)arg2;
+ (_Bool)objectExistsForKey:(id)arg1;
+ (void)setObject:(id)arg1 forKey:(id)arg2 forApplicationID:(id)arg3 saveToDisk:(_Bool)arg4;
+ (_Bool)oldFullMode;
+ (void)resetUserDefaultCacheForKey:(id)arg1;
+ (int)liveModeQuery;
+ (id)objectForKey:(id)arg1 synchronize:(_Bool)arg2;
+ (id)allDefaultsEnabled;
+ (_Bool)isClassNameDebugEnabled:(id)arg1;
+ (_Bool)isClassNameDebugEnabled:(id)arg1 forKey:(id)arg2;
+ (void)setClassName:(id)arg1 debugEnabled:(_Bool)arg2;
+ (void)setClassName:(id)arg1 debugEnabled:(_Bool)arg2 forKey:(id)arg3;
+ (_Bool)fullModeForClass:(Class)arg1;
+ (_Bool)isModelingDebugEnabled;
+ (_Bool)fullPLLog;
+ (void)setClass:(Class)arg1 debugEnabled:(_Bool)arg2;
+ (void)setClass:(Class)arg1 debugEnabled:(_Bool)arg2 forKey:(id)arg3;

- (id)init;
- (id)objectForKey:(id)arg1 forApplicationID:(id)arg2 synchronize:(_Bool)arg3;
- (id)managedPrefsObjectForKey:(id)arg1 forApplicationID:(id)arg2 synchronize:(_Bool)arg3;
- (void)resetUserDefaultCacheForKey:(id)arg1 forApplicationID:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 forApplicationID:(id)arg3 saveToDisk:(_Bool)arg4;
- (id)userDefaultsObjectForKey:(id)arg1 forApplicationID:(id)arg2 synchronize:(_Bool)arg3;
- (id)instancePrefsObjectForKey:(id)arg1;

@end
