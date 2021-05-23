/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSUserDefaults.h>

@interface NSUserDefaults (NSKeyValueCoding)

+ (id)standardUserDefaults;
+ (void)setStandardUserDefaults:(id)arg1;
+ (void)resetStandardUserDefaults;
+ (id)_copyStandardUserDefaultsIfPresent;
+ (void)_ensureAndLockPreferredLanguageLock;
+ (void)_web_addDefaultsChangeObserver;
+ (void)_web_defaultsDidChange;
+ (id)_web_preferredLanguageCode;

- (id)init;
- (void)dealloc;
- (oneway void)release;
- (void)finalize;
- (_Bool)synchronize;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (_Bool)boolForKey:(id)arg1;
- (void)_willBeginKeyValueObserving;
- (void)_didEndKeyValueObserving;
- (id)dictionaryRepresentation;
- (void)setObject:(id)arg1 forKey:(id)arg2 inDomain:(id)arg3;
- (id)initWithSuiteName:(id)arg1;
- (id)_initWithSuiteName:(id)arg1 container:(id)arg2;
- (id)initWithUser:(id)arg1;
- (void)setPersistentDomain:(id)arg1 forName:(id)arg2;
- (id)objectForKey:(id)arg1 inDomain:(id)arg2;
- (void)removeObjectForKey:(id)arg1 inDomain:(id)arg2;
- (id)stringForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)dataForKey:(id)arg1;
- (id)stringArrayForKey:(id)arg1;
- (long long)integerForKey:(id)arg1;
- (long long)longForKey:(id)arg1;
- (float)floatForKey:(id)arg1;
- (double)doubleForKey:(id)arg1;
- (id)URLForKey:(id)arg1;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (void)setLong:(long long)arg1 forKey:(id)arg2;
- (void)setFloat:(float)arg1 forKey:(id)arg2;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;
- (void)setURL:(id)arg1 forKey:(id)arg2;
- (id)searchList;
- (void)setSearchList:(id)arg1;
- (void)addSuiteNamed:(id)arg1;
- (void)removeSuiteNamed:(id)arg1;
- (void)registerDefaults:(id)arg1;
- (id)volatileDomainNames;
- (id)volatileDomainForName:(id)arg1;
- (void)setVolatileDomain:(id)arg1 forName:(id)arg2;
- (void)removeVolatileDomainForName:(id)arg1;
- (id)persistentDomainNames;
- (id)persistentDomainForName:(id)arg1;
- (void)removePersistentDomainForName:(id)arg1;
- (_Bool)objectIsForcedForKey:(id)arg1;
- (_Bool)objectIsForcedForKey:(id)arg1 inDomain:(id)arg2;

@end
