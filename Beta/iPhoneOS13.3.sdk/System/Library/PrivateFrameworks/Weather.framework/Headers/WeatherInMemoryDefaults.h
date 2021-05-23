/*
 Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

#import <NSObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface WeatherInMemoryDefaults : NSObject

{
    _Bool _synchronizeWasCalled;
    NSMutableDictionary *_inMemoryStore;
}

@property (retain) NSMutableDictionary *inMemoryStore;
@property (readonly) _Bool synchronizeWasCalled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)synchronize;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (_Bool)boolForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;

@end
