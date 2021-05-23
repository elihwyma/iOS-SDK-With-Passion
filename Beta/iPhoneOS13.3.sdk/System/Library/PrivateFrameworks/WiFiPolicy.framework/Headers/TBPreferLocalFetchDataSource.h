/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

#import <Foundation/NSObject.h>

@class TBDataSource;

@protocol TBCacheProvider;

@interface TBPreferLocalFetchDataSource : NSObject

{
    TBDataSource *_localDataSource;
    TBDataSource *_remoteDataSource;
    id <TBCacheProvider> _cacheProvider;
}

@property (retain, nonatomic) TBDataSource *localDataSource;
@property (retain, nonatomic) TBDataSource *remoteDataSource;
@property (retain, nonatomic) id <TBCacheProvider> cacheProvider;

- (id)initWithLocalDataSource:(id)arg1 remoteDataSource:(id)arg2 cacheProvider:(id)arg3;

@end
