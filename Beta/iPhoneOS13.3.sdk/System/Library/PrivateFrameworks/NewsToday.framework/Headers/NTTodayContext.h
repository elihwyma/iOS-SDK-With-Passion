/*
 Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

#import <Foundation/NSObject.h>

@class FCAsyncSerialQueue, NSString, NTSourceAvailabilityManager;

@protocol FCContentContext, NTReadablePrivateDataStorage, NTTodayResultsSource, NTWritablePrivateDataStorage, OS_dispatch_queue;

@interface NTTodayContext : NSObject

{
    CDUnknownBlockType _newResultsHandler;
    id <FCContentContext> _contentContext;
    CDUnknownBlockType _sessionProvider;
    id <NTReadablePrivateDataStorage> _readablePrivateDataStorage;
    id <NTWritablePrivateDataStorage> _writablePrivateDataStorage;
    NTSourceAvailabilityManager *_sourceAvailabilityManager;
    id <NTTodayResultsSource> _todayResultsSource;
    NSObject<OS_dispatch_queue> *_accessQueue;
    FCAsyncSerialQueue *_fetchQueue;
}

@property (retain, nonatomic) id <FCContentContext> contentContext;
@property (copy, nonatomic) CDUnknownBlockType sessionProvider;
@property (retain, nonatomic) id <NTReadablePrivateDataStorage> readablePrivateDataStorage;
@property (retain, nonatomic) id <NTWritablePrivateDataStorage> writablePrivateDataStorage;
@property (retain, nonatomic) NTSourceAvailabilityManager *sourceAvailabilityManager;
@property (retain, nonatomic) id <NTTodayResultsSource> todayResultsSource;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic, readonly) FCAsyncSerialQueue *fetchQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) CDUnknownBlockType newResultsHandler;

- (id)init;
- (void)networkReachabilityDidChange:(id)arg1;
- (void)fetchLatestResultsWithOperationInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_setupTodayResultsSource;
- (id)initWithContentContext:(id)arg1 processVariant:(unsigned long long)arg2 accessQueue:(id)arg3 fetchQueue:(id)arg4 sessionProvider:(CDUnknownBlockType)arg5;
- (void)userDidSeeHeadlinesWithAnalyticsElements:(id)arg1 atDate:(id)arg2;
- (void)userDidReadHeadlineWithAnalyticsElement:(id)arg1 atDate:(id)arg2;
- (id)initWithContentHostDirectory:(id)arg1 processVariant:(unsigned long long)arg2 accessQueue:(id)arg3 fetchQueue:(id)arg4 sessionProvider:(CDUnknownBlockType)arg5;

@end
