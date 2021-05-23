/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

#import <Foundation/NSObject.h>

@class NSOperationQueue, TBCoreDataSource, TBDataSource;

@interface TBDataSourceMediator : NSObject

{
    TBCoreDataSource *_local;
    TBDataSource *_remote;
    NSOperationQueue *_fetchQueue;
}

@property (retain, nonatomic) TBCoreDataSource *local;
@property (retain, nonatomic) TBDataSource *remote;
@property (retain, nonatomic) NSOperationQueue *fetchQueue;

- (void)executeFetchRequest:(id)arg1;
- (void)removeAllWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)prune3BarsNetworks:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithLocalStoreDescriptor:(id)arg1 remoteStore:(id)arg2;
- (id)initWithLocalStoreDescriptor:(id)arg1;
- (void)removeWithFetchRequest:(id)arg1;

@end
