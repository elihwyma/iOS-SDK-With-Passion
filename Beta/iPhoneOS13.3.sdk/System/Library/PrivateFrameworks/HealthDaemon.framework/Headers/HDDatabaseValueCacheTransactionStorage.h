/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface HDDatabaseValueCacheTransactionStorage : NSObject

{
    _Bool _didRemoveAllObjects;
    NSMutableDictionary *_cache;
    long long _cacheScope;
}

@property (retain, nonatomic) NSMutableDictionary *cache;
@property (nonatomic) long long cacheScope;
@property (nonatomic) _Bool didRemoveAllObjects;

- (id)init;

@end
