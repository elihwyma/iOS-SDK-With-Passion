/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

#import <Foundation/NSOperation.h>

@class NSDate, TBRemoteFetchAndCacheDataSource;

@protocol TBFetchRequest, TBFetchResponse;

@interface TBRemoteFetchAndCacheOperation : NSOperation

{
    _Bool _finished;
    NSDate *_start;
    id <TBFetchResponse> _response;
    id <TBFetchRequest> _fetchRequest;
    TBRemoteFetchAndCacheDataSource *_dataSource;
}

@property (retain, nonatomic) id <TBFetchRequest> fetchRequest;
@property (retain, nonatomic) id <TBFetchResponse> response;
@property (retain, nonatomic) TBRemoteFetchAndCacheDataSource *dataSource;

- (id)name;
- (void)start;
- (_Bool)isFinished;
- (_Bool)isReady;
- (void)finish;
- (id)initWithFetchRequest:(id)arg1 dataSource:(id)arg2;

@end
