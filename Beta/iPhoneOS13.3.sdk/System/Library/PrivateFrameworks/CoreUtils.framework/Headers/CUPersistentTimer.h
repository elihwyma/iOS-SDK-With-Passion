/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class NSDate, NSString, PCPersistentTimer;

@protocol OS_dispatch_queue;

@interface CUPersistentTimer : NSObject

{
    NSDate *_cachedDate;
    double _cachedInterval;
    double _cachedLeeway;
    _Bool _cachedRepeating;
    _Bool _cachedUseXPC;
    _Bool _cachedWakeSystem;
    NSString *_identifier;
    _Bool _invalidateCalled;
    PCPersistentTimer *_pcPersistentTimer;
    struct LogCategory *_ucat;
    _Bool _xpcRegistered;
    _Bool _repeating;
    _Bool _useXPC;
    _Bool _wakeSystem;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSDate *_date;
    double _interval;
    double _leeway;
    CDUnknownBlockType _invalidationHandler;
    CDUnknownBlockType _timerHandler;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) NSDate *date;
@property (nonatomic) double interval;
@property (nonatomic) double leeway;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (nonatomic) _Bool repeating;
@property (copy, nonatomic) CDUnknownBlockType timerHandler;
@property (nonatomic) _Bool useXPC;
@property (nonatomic) _Bool wakeSystem;

- (void)dealloc;
- (void)invalidate;
- (void)_invalidate;
- (void)start;
- (id)initWithIdentifier:(id)arg1;
- (void)_start;
- (void)_startPCPersistentTimer;
- (void)_startXPCActivity;
- (void)_pcTimerFired:(id)arg1;
- (void)_xpcTimerFired:(id)arg1;

@end
