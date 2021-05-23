/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

#import <WiFiPolicy/TBDataSource.h>

@class NSObject;

@protocol OS_dispatch_queue;

@interface TBRemoteDataSource : TBDataSource

{
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)init;
- (unsigned long long)type;
- (void)executeFetchRequest:(id)arg1;
- (void)_executeNetworkFetchRequest:(id)arg1;
- (void)_executeLocationFetchRequest:(id)arg1;
- (void)_executeTileFetchRequest:(id)arg1;
- (void)_fetchTilesWithRequest:(id)arg1;
- (void)_submitNetworkSearch:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_fetchTilesForTileItems:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 trigger:(unsigned long long)arg3;
- (void)_captureTileFetchError:(id)arg1 tileKey:(id)arg2 duration:(double)arg3 trigger:(unsigned long long)arg4;
- (void)_submitLocationSearch:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_writeSearchTileToFile:(id)arg1;

@end
