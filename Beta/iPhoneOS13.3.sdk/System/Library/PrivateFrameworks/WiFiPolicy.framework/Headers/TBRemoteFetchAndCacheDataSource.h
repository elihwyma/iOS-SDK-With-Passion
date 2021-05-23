/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

#import <Foundation/NSObject.h>

@class TBDataSource;

@protocol TBCacheProvider;

@interface TBRemoteFetchAndCacheDataSource : NSObject

{
    TBDataSource *_fetchDataSource;
    id <TBCacheProvider> _cacheProvider;
}

@property (retain, nonatomic) TBDataSource *fetchDataSource;
@property (retain, nonatomic) id <TBCacheProvider> cacheProvider;

- (id)initWithFetchDataSource:(id)arg1 cacheProvider:(id)arg2;

@end
