/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NTPBPrefetchConfig;

@interface FCPrefetchConfiguration : NSObject

{
    NTPBPrefetchConfig *_pbConfig;
    NSDictionary *_configDict;
    _Bool _backgroundFetchEnabled;
    _Bool _shouldPrefetchForYouFeed;
    double _minimumBackgroundFetchInterval;
    unsigned long long _maximumFavoritesFeedsToPrefetch;
    double _prefetchedForYouExpiration;
}

@property (nonatomic, readonly, getter=isBackgroundFetchEnabled) _Bool backgroundFetchEnabled;
@property (nonatomic, readonly) double minimumBackgroundFetchInterval;
@property (nonatomic, readonly) _Bool shouldPrefetchForYouFeed;
@property (nonatomic, readonly) unsigned long long maximumFavoritesFeedsToPrefetch;
@property (nonatomic, readonly) double prefetchedForYouExpiration;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDefaults;
- (id)initWithConfigDictionary:(id)arg1;
- (id)initWithPBPrefetchConfig:(id)arg1;

@end
