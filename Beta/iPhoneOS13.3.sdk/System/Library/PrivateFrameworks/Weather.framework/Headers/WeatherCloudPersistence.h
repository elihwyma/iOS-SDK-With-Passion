/*
 Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

#import <NSObject.h>

@class NSString, NSUbiquitousKeyValueStore;

@protocol WeatherCloudPersistenceDelegate;

__attribute__((visibility("hidden")))
@interface WeatherCloudPersistence : NSObject

{
    id <WeatherCloudPersistenceDelegate> _delegate;
    NSUbiquitousKeyValueStore *_cloudStore;
}

@property (retain) NSUbiquitousKeyValueStore *cloudStore;
@property (weak) id <WeatherCloudPersistenceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)cloudPersistenceWithDelegate:(id)arg1;
+ (_Bool)processIsWhitelistedForSync;

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
- (id)initWithDelegate:(id)arg1;
- (void)cloudCitiesChangedExternally:(id)arg1;
- (_Bool)isInitialSyncNotification:(id)arg1;

@end
