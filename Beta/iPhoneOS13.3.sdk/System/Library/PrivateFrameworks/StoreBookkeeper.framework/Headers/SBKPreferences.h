/*
 Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <Foundation/NSObject.h>

@interface SBKPreferences : NSObject

+ (id)storeBookkeeperPreferences;

- (id)init;
- (void)dealloc;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (_Bool)boolForKey:(id)arg1;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1 withDefaultValue:(id)arg2;
- (void)registerDefaultsIfKeyNotSet:(id)arg1 registrationBlock:(CDUnknownBlockType)arg2;
- (void)_preferencesDidChange;

@end
