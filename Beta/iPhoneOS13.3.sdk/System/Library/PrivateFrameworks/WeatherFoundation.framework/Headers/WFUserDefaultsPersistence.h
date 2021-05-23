/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <NSObject.h>

@class NSString, NSUserDefaults;

__attribute__((visibility("hidden")))
@interface WFUserDefaultsPersistence : NSObject

{
    NSUserDefaults *_userDefaults;
}

@property (retain) NSUserDefaults *userDefaults;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)synchronize;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (_Bool)boolForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;
- (id)initWithUserDefaults:(id)arg1;

@end
