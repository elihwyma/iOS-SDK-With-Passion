/*
 Image: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface SPQueryResultsQueue : NSObject

{
    _Bool _canceled;
    _Bool _tracked;
    _Bool _live;
    _Bool _shared;
    NSString *_identifier;
    struct __SIResultQueue *_siResultsQueue;
    NSMutableDictionary *_jobs;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    long long _pausedCount;
}

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) struct __SIResultQueue *siResultsQueue;
@property (retain, nonatomic) NSMutableDictionary *jobs;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) long long pausedCount;
@property (nonatomic) _Bool canceled;
@property (nonatomic) _Bool tracked;
@property (nonatomic) _Bool live;
@property (nonatomic) _Bool shared;
@property (readonly) _Bool hasPausedResults;

+ (void)startTrackingResultsQueue:(id)arg1;
+ (void)stopTrackingResultsQueueWithIdentifier:(id)arg1;
+ (id)findResultsQueueWithIdentifier:(id)arg1;
+ (id)sharedInstanceDispatchQueue:(id)arg1;

- (void)dealloc;
- (void)cancel;
- (void)cancelJob:(id)arg1;
- (id)initWithIdentifier:(id)arg1 dispatchQueue:(id)arg2;
- (void)_startTracking;
- (void)_scheduleWakeupForced:(_Bool)arg1;
- (void)_stopTracking;
- (void)addJob:(id)arg1;
- (void)pauseResults;
- (void)resumeResults;
- (void)_processResults;

@end
