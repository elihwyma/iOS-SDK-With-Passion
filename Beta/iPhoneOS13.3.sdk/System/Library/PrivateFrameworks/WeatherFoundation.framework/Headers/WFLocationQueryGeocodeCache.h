/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface WFLocationQueryGeocodeCache : NSObject

{
    NSMutableDictionary *_cache;
    NSMutableDictionary *_cacheAge;
    NSObject<OS_dispatch_queue> *_cacheQueue;
    double _expirationInterval;
}

@property (nonatomic) double expirationInterval;

- (id)init;
- (void)removeAllObjects;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (_Bool)_shouldEvictObjectWithDate:(id)arg1;
- (void)_setObject:(id)arg1 forKey:(id)arg2 withDate:(id)arg3;

@end
