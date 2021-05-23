/*
 Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

#import <Foundation/NSOperation.h>

@class CalSearch, ClientConnection, NSObject, NSString;

@protocol NSObject, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface CADCalSearchOperation : NSOperation

{
    ClientConnection *_connection;
    CalSearch *_search;
    NSObject<OS_dispatch_semaphore> *_finishedSemaphore;
    unsigned int _replyID;
    long long _lastIndex;
    id <NSObject> _boostToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)operationWithConnection:(id)arg1 filter:(struct CalFilter *)arg2 replyID:(unsigned int)arg3;

- (void)dealloc;
- (void)cancel;
- (void)main;
- (id)search;
- (void)_completeOperation;
- (id)initWithConnection:(id)arg1 filter:(struct CalFilter *)arg2 replyID:(unsigned int)arg3;
- (void)calSearch:(id)arg1 foundOccurrences:(struct __CFArray *)arg2 cachedDays:(struct __CFArray *)arg3 cachedDaysIndexes:(struct __CFArray *)arg4;
- (void)calSearchComplete:(id)arg1;
- (_Bool)calSearchShouldStopSearching:(id)arg1;
- (void)calSearch:(id)arg1 showResultsStartingOnDate:(double)arg2;
- (unsigned int)replyID;

@end
