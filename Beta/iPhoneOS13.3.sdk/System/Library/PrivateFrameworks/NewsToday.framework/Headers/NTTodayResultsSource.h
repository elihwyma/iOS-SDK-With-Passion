/*
 Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

#import <Foundation/NSObject.h>

#import <NewsToday/Swift-Protocol.h>

@class FCAsyncSerialQueue, NSString;

@protocol FCContentContext, NTReadablePrivateDataStorage, NTTodayResultsFetchDescriptor;

@interface NTTodayResultsSource : NSObject <Swift>

{
    _Bool _flushingHasBeenEnabled;
    id <NTTodayResultsFetchDescriptor> _fetchDescriptor;
    id <NTReadablePrivateDataStorage> _privateDataStorage;
    id <FCContentContext> _contentContext;
    CDUnknownBlockType _sessionProvider;
    FCAsyncSerialQueue *_serialQueue;
}

@property (copy, nonatomic, readonly) id <NTTodayResultsFetchDescriptor> fetchDescriptor;
@property (nonatomic, readonly) id <NTReadablePrivateDataStorage> privateDataStorage;
@property (nonatomic, readonly) id <FCContentContext> contentContext;
@property (copy, nonatomic, readonly) CDUnknownBlockType sessionProvider;
@property (nonatomic, readonly) FCAsyncSerialQueue *serialQueue;
@property (nonatomic, getter=hasFlushingBeenEnabled) _Bool flushingHasBeenEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)_fetchLatestResultsWithOperationInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchLatestResultsWithOperationInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithFetchDescriptor:(id)arg1 privateDataStorage:(id)arg2 contentContext:(id)arg3 sessionProvider:(CDUnknownBlockType)arg4 fetchQueue:(id)arg5;

@end
