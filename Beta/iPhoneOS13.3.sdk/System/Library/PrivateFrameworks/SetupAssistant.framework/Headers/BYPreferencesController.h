/*
 Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
 */

#import <NSObject.h>

@class NSMutableDictionary, NSString;

@interface BYPreferencesController : NSObject

{
    NSString *_domain;
    NSMutableDictionary *_preferences;
}

@property (retain, nonatomic) NSString *domain;
@property (retain, nonatomic) NSMutableDictionary *preferences;

+ (void)flushEverything;
+ (id)buddyPreferences;
+ (id)buddyPreferencesExcludedFromBackup;
+ (void)persistEverything;

- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (_Bool)boolForKey:(id)arg1;
- (void)reset;
- (id)initWithDomain:(id)arg1;
- (void)flush;
- (void)persist;
- (void)setObject:(id)arg1 forKey:(id)arg2 persistImmediately:(_Bool)arg3;
- (void)removeObjectForKey:(id)arg1 onlyFromMemory:(_Bool)arg2;

@end
