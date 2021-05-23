/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <Foundation/NSOperation.h>

@class EKAvailabilityCache, NSArray, NSDate, NSError, NSObject, NSString;

@protocol OS_dispatch_queue;

@interface EKRequestAvailabilityOperation : NSOperation

{
    _Bool _isFinished;
    _Bool _isExecuting;
    EKAvailabilityCache *_availabilityCache;
    NSDate *_startDate;
    NSDate *_endDate;
    NSString *_ignoredEventID;
    NSArray *_addresses;
    CDUnknownBlockType _resultsBlock;
    id _requestID;
    NSObject<OS_dispatch_queue> *_queue;
    NSError *_error;
}

@property (retain, nonatomic) NSError *error;

- (id)init;
- (id)description;
- (void)cancel;
- (void)start;
- (void)main;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isConcurrent;
- (void)_finishWithError:(id)arg1;
- (id)initWithSource:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ignoredEventID:(id)arg4 addresses:(id)arg5 resultsBlock:(CDUnknownBlockType)arg6;

@end
