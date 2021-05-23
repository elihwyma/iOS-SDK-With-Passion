/*
 Image: /System/Library/PrivateFrameworks/NewsDaemon.framework/NewsDaemon
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection;

@protocol NDNewsService, NDNewsServiceClient, OS_dispatch_queue;

@interface NDNewsServiceConnection : NSObject

{
    NSXPCConnection *_connection;
    id <NDNewsService> _daemon;
    NSObject<OS_dispatch_queue> *_accessQueue;
    id <NDNewsServiceClient> _client;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) id <NDNewsService> daemon;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (weak, nonatomic) id <NDNewsServiceClient> client;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithClient:(id)arg1;
- (void)fetchLatestResultsWithParameters:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)markAnalyticsElements:(id)arg1 asSeenAtDate:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)markAnalyticsElement:(id)arg1 asReadAtDate:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)serviceHasNewTodayResults;
- (void)_establishConnectionIfNeededWithCompletion:(CDUnknownBlockType)arg1;

@end
